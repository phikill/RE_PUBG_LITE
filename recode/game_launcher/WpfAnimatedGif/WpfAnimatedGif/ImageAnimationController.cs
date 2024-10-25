using System;
using System.ComponentModel;
using System.Linq;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Media.Animation;

namespace WpfAnimatedGif
{
	// Token: 0x02000004 RID: 4
	public class ImageAnimationController : IDisposable
	{
		// Token: 0x0600000E RID: 14 RVA: 0x000022B0 File Offset: 0x000004B0
		internal ImageAnimationController(Image image, ObjectAnimationUsingKeyFrames animation, bool autoStart)
		{
			this._image = image;
			this._animation = animation;
			this._animation.Completed += this.AnimationCompleted;
			this._clock = this._animation.CreateClock();
			this._clockController = this._clock.Controller;
			ImageAnimationController._sourceDescriptor.AddValueChanged(image, new EventHandler(this.ImageSourceChanged));
			this._clockController.Pause();
			this._image.ApplyAnimationClock(Image.SourceProperty, this._clock);
			if (autoStart)
			{
				this._clockController.Resume();
			}
		}

		// Token: 0x0600000F RID: 15 RVA: 0x00002350 File Offset: 0x00000550
		private void AnimationCompleted(object sender, EventArgs e)
		{
			this._image.RaiseEvent(new RoutedEventArgs(ImageBehavior.AnimationCompletedEvent, this._image));
		}

		// Token: 0x06000010 RID: 16 RVA: 0x0000236D File Offset: 0x0000056D
		private void ImageSourceChanged(object sender, EventArgs e)
		{
			this.OnCurrentFrameChanged();
		}

		// Token: 0x17000003 RID: 3
		// (get) Token: 0x06000011 RID: 17 RVA: 0x00002375 File Offset: 0x00000575
		public int FrameCount
		{
			get
			{
				return this._animation.KeyFrames.Count;
			}
		}

		// Token: 0x17000004 RID: 4
		// (get) Token: 0x06000012 RID: 18 RVA: 0x00002388 File Offset: 0x00000588
		public TimeSpan Duration
		{
			get
			{
				if (!this._animation.Duration.HasTimeSpan)
				{
					return TimeSpan.Zero;
				}
				return this._animation.Duration.TimeSpan;
			}
		}

		// Token: 0x17000005 RID: 5
		// (get) Token: 0x06000013 RID: 19 RVA: 0x000023C3 File Offset: 0x000005C3
		public bool IsPaused
		{
			get
			{
				return this._clock.IsPaused;
			}
		}

		// Token: 0x17000006 RID: 6
		// (get) Token: 0x06000014 RID: 20 RVA: 0x000023D0 File Offset: 0x000005D0
		public bool IsComplete
		{
			get
			{
				return this._clock.CurrentState == ClockState.Filling;
			}
		}

		// Token: 0x06000015 RID: 21 RVA: 0x000023E0 File Offset: 0x000005E0
		public void GotoFrame(int index)
		{
			ObjectKeyFrame objectKeyFrame = this._animation.KeyFrames[index];
			this._clockController.Seek(objectKeyFrame.KeyTime.TimeSpan, TimeSeekOrigin.BeginTime);
		}

		// Token: 0x17000007 RID: 7
		// (get) Token: 0x06000016 RID: 22 RVA: 0x0000241C File Offset: 0x0000061C
		public int CurrentFrame
	{
		get
		{
			TimeSpan? time = _clock.CurrentTime;
			return _animation.KeyFrames.Cast<ObjectKeyFrame>().Select((ObjectKeyFrame f, int i) => new
			{
				Time = f.KeyTime.TimeSpan,
				Index = i
			}).FirstOrDefault(fi =>
			{
				TimeSpan time2 = fi.Time;
				TimeSpan? timeSpan = time;
				return time2 >= timeSpan;
			})?.Index ?? (-1);
		}
	}

		// Token: 0x06000017 RID: 23 RVA: 0x00002491 File Offset: 0x00000691
		public void Pause()
		{
			this._clockController.Pause();
		}

		// Token: 0x06000018 RID: 24 RVA: 0x0000249E File Offset: 0x0000069E
		public void Play()
		{
			this._clockController.Resume();
		}

		// Token: 0x14000001 RID: 1
		// (add) Token: 0x06000019 RID: 25 RVA: 0x000024AC File Offset: 0x000006AC
		// (remove) Token: 0x0600001A RID: 26 RVA: 0x000024E4 File Offset: 0x000006E4
		public event EventHandler CurrentFrameChanged;

		// Token: 0x0600001B RID: 27 RVA: 0x0000251C File Offset: 0x0000071C
		private void OnCurrentFrameChanged()
		{
			EventHandler currentFrameChanged = this.CurrentFrameChanged;
			if (currentFrameChanged != null)
			{
				currentFrameChanged(this, EventArgs.Empty);
			}
		}

		// Token: 0x0600001C RID: 28 RVA: 0x00002540 File Offset: 0x00000740
		~ImageAnimationController()
		{
			this.Dispose(false);
		}

		// Token: 0x0600001D RID: 29 RVA: 0x00002570 File Offset: 0x00000770
		public void Dispose()
		{
			this.Dispose(true);
			GC.SuppressFinalize(this);
		}

		// Token: 0x0600001E RID: 30 RVA: 0x00002580 File Offset: 0x00000780
		protected virtual void Dispose(bool disposing)
		{
			if (disposing)
			{
				this._image.BeginAnimation(Image.SourceProperty, null);
				this._animation.Completed -= this.AnimationCompleted;
				ImageAnimationController._sourceDescriptor.RemoveValueChanged(this._image, new EventHandler(this.ImageSourceChanged));
				this._image.Source = null;
			}
		}

		// Token: 0x04000005 RID: 5
		private static readonly DependencyPropertyDescriptor _sourceDescriptor = DependencyPropertyDescriptor.FromProperty(Image.SourceProperty, typeof(Image));

		// Token: 0x04000006 RID: 6
		private readonly Image _image;

		// Token: 0x04000007 RID: 7
		private readonly ObjectAnimationUsingKeyFrames _animation;

		// Token: 0x04000008 RID: 8
		private readonly AnimationClock _clock;

		// Token: 0x04000009 RID: 9
		private readonly ClockController _clockController;
	}
}
