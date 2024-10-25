using System;
using System.ComponentModel;
using System.IO;
using System.IO.Packaging;
using System.Linq;
using System.Net;
using System.Text;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Markup;
using System.Windows.Media;
using System.Windows.Media.Animation;
using System.Windows.Media.Imaging;
using System.Windows.Resources;
using WpfAnimatedGif.Decoding;

namespace WpfAnimatedGif
{
	// Token: 0x02000005 RID: 5
	public static class ImageBehavior
	{
		// Token: 0x0600001F RID: 31 RVA: 0x000025E0 File Offset: 0x000007E0
		[AttachedPropertyBrowsableForType(typeof(Image))]
		public static ImageSource GetAnimatedSource(Image obj)
		{
			return (ImageSource)obj.GetValue(ImageBehavior.AnimatedSourceProperty);
		}

		// Token: 0x06000020 RID: 32 RVA: 0x000025F2 File Offset: 0x000007F2
		public static void SetAnimatedSource(Image obj, ImageSource value)
		{
			obj.SetValue(ImageBehavior.AnimatedSourceProperty, value);
		}

		// Token: 0x06000021 RID: 33 RVA: 0x00002600 File Offset: 0x00000800
		[AttachedPropertyBrowsableForType(typeof(Image))]
		public static RepeatBehavior GetRepeatBehavior(Image obj)
		{
			return (RepeatBehavior)obj.GetValue(ImageBehavior.RepeatBehaviorProperty);
		}

		// Token: 0x06000022 RID: 34 RVA: 0x00002612 File Offset: 0x00000812
		public static void SetRepeatBehavior(Image obj, RepeatBehavior value)
		{
			obj.SetValue(ImageBehavior.RepeatBehaviorProperty, value);
		}

		// Token: 0x06000023 RID: 35 RVA: 0x00002625 File Offset: 0x00000825
		public static bool GetAnimateInDesignMode(DependencyObject obj)
		{
			return (bool)obj.GetValue(ImageBehavior.AnimateInDesignModeProperty);
		}

		// Token: 0x06000024 RID: 36 RVA: 0x00002637 File Offset: 0x00000837
		public static void SetAnimateInDesignMode(DependencyObject obj, bool value)
		{
			obj.SetValue(ImageBehavior.AnimateInDesignModeProperty, value);
		}

		// Token: 0x06000025 RID: 37 RVA: 0x0000264A File Offset: 0x0000084A
		[AttachedPropertyBrowsableForType(typeof(Image))]
		public static bool GetAutoStart(Image obj)
		{
			return (bool)obj.GetValue(ImageBehavior.AutoStartProperty);
		}

		// Token: 0x06000026 RID: 38 RVA: 0x0000265C File Offset: 0x0000085C
		public static void SetAutoStart(Image obj, bool value)
		{
			obj.SetValue(ImageBehavior.AutoStartProperty, value);
		}

		// Token: 0x06000027 RID: 39 RVA: 0x0000266F File Offset: 0x0000086F
		public static ImageAnimationController GetAnimationController(Image imageControl)
		{
			return (ImageAnimationController)imageControl.GetValue(ImageBehavior.AnimationControllerPropertyKey.DependencyProperty);
		}

		// Token: 0x06000028 RID: 40 RVA: 0x00002686 File Offset: 0x00000886
		private static void SetAnimationController(DependencyObject obj, ImageAnimationController value)
		{
			obj.SetValue(ImageBehavior.AnimationControllerPropertyKey, value);
		}

		// Token: 0x06000029 RID: 41 RVA: 0x00002694 File Offset: 0x00000894
		public static bool GetIsAnimationLoaded(Image image)
		{
			return (bool)image.GetValue(ImageBehavior.IsAnimationLoadedProperty);
		}

		// Token: 0x0600002A RID: 42 RVA: 0x000026A6 File Offset: 0x000008A6
		private static void SetIsAnimationLoaded(Image image, bool value)
		{
			image.SetValue(ImageBehavior.IsAnimationLoadedPropertyKey, value);
		}

		// Token: 0x0600002B RID: 43 RVA: 0x000026B9 File Offset: 0x000008B9
		public static void AddAnimationLoadedHandler(Image image, RoutedEventHandler handler)
		{
			if (image == null)
			{
				throw new ArgumentNullException("image");
			}
			if (handler == null)
			{
				throw new ArgumentNullException("handler");
			}
			image.AddHandler(ImageBehavior.AnimationLoadedEvent, handler);
		}

		// Token: 0x0600002C RID: 44 RVA: 0x000026E3 File Offset: 0x000008E3
		public static void RemoveAnimationLoadedHandler(Image image, RoutedEventHandler handler)
		{
			if (image == null)
			{
				throw new ArgumentNullException("image");
			}
			if (handler == null)
			{
				throw new ArgumentNullException("handler");
			}
			image.RemoveHandler(ImageBehavior.AnimationLoadedEvent, handler);
		}

		// Token: 0x0600002D RID: 45 RVA: 0x00002710 File Offset: 0x00000910
		public static void AddAnimationCompletedHandler(Image d, RoutedEventHandler handler)
		{
			if (d == null)
			{
				return;
			}
			d.AddHandler(ImageBehavior.AnimationCompletedEvent, handler);
		}

		// Token: 0x0600002E RID: 46 RVA: 0x00002730 File Offset: 0x00000930
		public static void RemoveAnimationCompletedHandler(Image d, RoutedEventHandler handler)
		{
			if (d == null)
			{
				return;
			}
			d.RemoveHandler(ImageBehavior.AnimationCompletedEvent, handler);
		}

		// Token: 0x0600002F RID: 47 RVA: 0x00002750 File Offset: 0x00000950
		private static void AnimatedSourceChanged(DependencyObject o, DependencyPropertyChangedEventArgs e)
		{
			Image image = o as Image;
			if (image == null)
			{
				return;
			}
			ImageSource imageSource = e.OldValue as ImageSource;
			ImageSource imageSource2 = e.NewValue as ImageSource;
			if (imageSource == imageSource2)
			{
				if (image.IsLoaded && !ImageBehavior.GetIsAnimationLoaded(image))
				{
					ImageBehavior.InitAnimationOrImage(image);
				}
				return;
			}
			if (imageSource != null)
			{
				image.Loaded -= ImageBehavior.ImageControlLoaded;
				image.Unloaded -= ImageBehavior.ImageControlUnloaded;
				image.IsVisibleChanged -= ImageBehavior.VisibilityChanged;
				AnimationCache.DecrementReferenceCount(imageSource, ImageBehavior.GetRepeatBehavior(image));
				ImageAnimationController animationController = ImageBehavior.GetAnimationController(image);
				if (animationController != null)
				{
					animationController.Dispose();
				}
				image.Source = null;
			}
			if (imageSource2 != null)
			{
				image.Loaded += ImageBehavior.ImageControlLoaded;
				image.Unloaded += ImageBehavior.ImageControlUnloaded;
				image.IsVisibleChanged += ImageBehavior.VisibilityChanged;
				if (image.IsLoaded)
				{
					ImageBehavior.InitAnimationOrImage(image);
				}
			}
		}

		// Token: 0x06000030 RID: 48 RVA: 0x00002840 File Offset: 0x00000A40
		private static void VisibilityChanged(object sender, DependencyPropertyChangedEventArgs e)
		{
			Image image;
			if ((image = sender as Image) != null && image.IsLoaded)
			{
				ImageAnimationController animationController = ImageBehavior.GetAnimationController(image);
				if (animationController != null)
				{
					if ((bool)e.NewValue)
					{
						animationController.GotoFrame(0);
						animationController.Play();
						return;
					}
					animationController.Pause();
				}
			}
		}

		// Token: 0x06000031 RID: 49 RVA: 0x0000288C File Offset: 0x00000A8C
		private static void ImageControlLoaded(object sender, RoutedEventArgs e)
		{
			Image image = sender as Image;
			if (image == null)
			{
				return;
			}
			ImageBehavior.InitAnimationOrImage(image);
		}

		// Token: 0x06000032 RID: 50 RVA: 0x000028AC File Offset: 0x00000AAC
		private static void ImageControlUnloaded(object sender, RoutedEventArgs e)
		{
			Image image = sender as Image;
			if (image == null)
			{
				return;
			}
			ImageSource animatedSource = ImageBehavior.GetAnimatedSource(image);
			if (animatedSource != null)
			{
				AnimationCache.DecrementReferenceCount(animatedSource, ImageBehavior.GetRepeatBehavior(image));
			}
			ImageAnimationController animationController = ImageBehavior.GetAnimationController(image);
			if (animationController != null)
			{
				animationController.Dispose();
			}
		}

		// Token: 0x06000033 RID: 51 RVA: 0x000028EC File Offset: 0x00000AEC
		private static void RepeatBehaviorChanged(DependencyObject o, DependencyPropertyChangedEventArgs e)
		{
			Image image = o as Image;
			if (image == null)
			{
				return;
			}
			ImageSource animatedSource = ImageBehavior.GetAnimatedSource(image);
			if (animatedSource != null)
			{
				if (!object.Equals(e.OldValue, e.NewValue))
				{
					AnimationCache.DecrementReferenceCount(animatedSource, (RepeatBehavior)e.OldValue);
				}
				if (image.IsLoaded)
				{
					ImageBehavior.InitAnimationOrImage(image);
				}
			}
		}

		// Token: 0x06000034 RID: 52 RVA: 0x00002944 File Offset: 0x00000B44
		private static void AnimateInDesignModeChanged(DependencyObject o, DependencyPropertyChangedEventArgs e)
		{
			Image image = o as Image;
			if (image == null)
			{
				return;
			}
			bool flag = (bool)e.NewValue;
			if (ImageBehavior.GetAnimatedSource(image) != null && image.IsLoaded)
			{
				if (flag)
				{
					ImageBehavior.InitAnimationOrImage(image);
					return;
				}
				image.BeginAnimation(Image.SourceProperty, null);
			}
		}

		// Token: 0x06000035 RID: 53 RVA: 0x00002990 File Offset: 0x00000B90
		private static void InitAnimationOrImage(Image imageControl)
		{
			ImageAnimationController imageAnimationController = ImageBehavior.GetAnimationController(imageControl);
			if (imageAnimationController != null)
			{
				imageAnimationController.Dispose();
			}
			ImageBehavior.SetAnimationController(imageControl, null);
			ImageBehavior.SetIsAnimationLoaded(imageControl, false);
			BitmapSource source = ImageBehavior.GetAnimatedSource(imageControl) as BitmapSource;
			int isInDesignMode = (DesignerProperties.GetIsInDesignMode(imageControl) ? 1 : 0);
			bool animateInDesignMode = ImageBehavior.GetAnimateInDesignMode(imageControl);
			bool flag = isInDesignMode == 0 || animateInDesignMode;
			bool flag2 = ImageBehavior.IsLoadingDeferred(source, imageControl);
			if (source != null && flag && !flag2)
			{
				if (source.IsDownloading)
				{
					EventHandler handler = null;
					handler = delegate(object sender, EventArgs args)
					{
						source.DownloadCompleted -= handler;
						ImageBehavior.InitAnimationOrImage(imageControl);
					};
					source.DownloadCompleted += handler;
					imageControl.Source = source;
					return;
				}
				ObjectAnimationUsingKeyFrames animation = ImageBehavior.GetAnimation(imageControl, source);
				if (animation != null)
				{
					if (animation.KeyFrames.Count > 0)
					{
						ImageBehavior.TryTwice(delegate
						{
							imageControl.Source = (ImageSource)animation.KeyFrames[0].Value;
						});
					}
					else
					{
						imageControl.Source = source;
					}
					imageAnimationController = new ImageAnimationController(imageControl, animation, ImageBehavior.GetAutoStart(imageControl));
					ImageBehavior.SetAnimationController(imageControl, imageAnimationController);
					ImageBehavior.SetIsAnimationLoaded(imageControl, true);
					imageControl.RaiseEvent(new RoutedEventArgs(ImageBehavior.AnimationLoadedEvent, imageControl));
					return;
				}
			}
			imageControl.Source = source;
			if (source != null)
			{
				ImageBehavior.SetIsAnimationLoaded(imageControl, true);
				imageControl.RaiseEvent(new RoutedEventArgs(ImageBehavior.AnimationLoadedEvent, imageControl));
			}
		}

		// Token: 0x06000036 RID: 54 RVA: 0x00002BF4 File Offset: 0x00000DF4
		private static ObjectAnimationUsingKeyFrames GetAnimation(Image imageControl, BitmapSource source)
		{
			ObjectAnimationUsingKeyFrames objectAnimationUsingKeyFrames = AnimationCache.GetAnimation(source, ImageBehavior.GetRepeatBehavior(imageControl));
			if (objectAnimationUsingKeyFrames != null)
			{
				return objectAnimationUsingKeyFrames;
			}
			GifFile gifFile;
			GifBitmapDecoder gifBitmapDecoder = ImageBehavior.GetDecoder(source, imageControl, out gifFile) as GifBitmapDecoder;
			if (gifBitmapDecoder != null && gifBitmapDecoder.Frames.Count > 1)
			{
				ImageBehavior.Int32Size fullSize = ImageBehavior.GetFullSize(gifBitmapDecoder, gifFile);
				int num = 0;
				objectAnimationUsingKeyFrames = new ObjectAnimationUsingKeyFrames();
				TimeSpan timeSpan = TimeSpan.Zero;
				BitmapSource bitmapSource = null;
				foreach (BitmapFrame bitmapFrame in gifBitmapDecoder.Frames)
				{
					ImageBehavior.FrameMetadata frameMetadata = ImageBehavior.GetFrameMetadata(gifBitmapDecoder, gifFile, num);
					BitmapSource bitmapSource2 = ImageBehavior.MakeFrame(fullSize, bitmapFrame, frameMetadata, bitmapSource);
					DiscreteObjectKeyFrame discreteObjectKeyFrame = new DiscreteObjectKeyFrame(bitmapSource2, timeSpan);
					objectAnimationUsingKeyFrames.KeyFrames.Add(discreteObjectKeyFrame);
					timeSpan += frameMetadata.Delay;
					switch (frameMetadata.DisposalMethod)
					{
					case ImageBehavior.FrameDisposalMethod.None:
					case ImageBehavior.FrameDisposalMethod.DoNotDispose:
						bitmapSource = bitmapSource2;
						break;
					case ImageBehavior.FrameDisposalMethod.RestoreBackground:
						if (ImageBehavior.IsFullFrame(frameMetadata, fullSize))
						{
							bitmapSource = null;
						}
						else
						{
							bitmapSource = ImageBehavior.ClearArea(bitmapSource2, frameMetadata);
						}
						break;
					}
					num++;
				}
				objectAnimationUsingKeyFrames.Duration = timeSpan;
				objectAnimationUsingKeyFrames.RepeatBehavior = ImageBehavior.GetActualRepeatBehavior(imageControl, gifBitmapDecoder, gifFile);
				AnimationCache.AddAnimation(source, ImageBehavior.GetRepeatBehavior(imageControl), objectAnimationUsingKeyFrames);
				AnimationCache.IncrementReferenceCount(source, ImageBehavior.GetRepeatBehavior(imageControl));
				return objectAnimationUsingKeyFrames;
			}
			return null;
		}

		// Token: 0x06000037 RID: 55 RVA: 0x00002D60 File Offset: 0x00000F60
		private static BitmapSource ClearArea(BitmapSource frame, ImageBehavior.FrameMetadata metadata)
		{
			DrawingVisual drawingVisual = new DrawingVisual();
			using (DrawingContext drawingContext = drawingVisual.RenderOpen())
			{
				Rect rect = new Rect(0.0, 0.0, (double)frame.PixelWidth, (double)frame.PixelHeight);
				Rect rect2 = new Rect((double)metadata.Left, (double)metadata.Top, (double)metadata.Width, (double)metadata.Height);
				PathGeometry pathGeometry = Geometry.Combine(new RectangleGeometry(rect), new RectangleGeometry(rect2), GeometryCombineMode.Exclude, null);
				drawingContext.PushClip(pathGeometry);
				drawingContext.DrawImage(frame, rect);
			}
			RenderTargetBitmap renderTargetBitmap = new RenderTargetBitmap(frame.PixelWidth, frame.PixelHeight, frame.DpiX, frame.DpiY, PixelFormats.Pbgra32);
			renderTargetBitmap.Render(drawingVisual);
			WriteableBitmap writeableBitmap = new WriteableBitmap(renderTargetBitmap);
			if (writeableBitmap.CanFreeze && !writeableBitmap.IsFrozen)
			{
				writeableBitmap.Freeze();
			}
			return writeableBitmap;
		}

		// Token: 0x06000038 RID: 56 RVA: 0x00002E4C File Offset: 0x0000104C
		private static void TryTwice(Action action)
		{
			try
			{
				action();
			}
			catch (Exception)
			{
				action();
			}
		}

		// Token: 0x06000039 RID: 57 RVA: 0x00002E7C File Offset: 0x0000107C
		private static bool IsLoadingDeferred(BitmapSource source, Image imageControl)
		{
			BitmapImage bitmapImage = source as BitmapImage;
			return bitmapImage != null && (bitmapImage.UriSource != null && !bitmapImage.UriSource.IsAbsoluteUri) && bitmapImage.BaseUri == null && ((imageControl != null) ? ((IUriContext)imageControl).BaseUri : null) == null;
		}

		// Token: 0x0600003A RID: 58 RVA: 0x00002ED8 File Offset: 0x000010D8
		private static BitmapDecoder GetDecoder(BitmapSource image, Image imageControl, out GifFile gifFile)
		{
			gifFile = null;
			BitmapDecoder bitmapDecoder = null;
			Stream stream = null;
			Uri uri = null;
			BitmapCreateOptions bitmapCreateOptions = BitmapCreateOptions.None;
			BitmapImage bitmapImage = image as BitmapImage;
			if (bitmapImage != null)
			{
				bitmapCreateOptions = bitmapImage.CreateOptions;
				if (bitmapImage.StreamSource != null)
				{
					stream = bitmapImage.StreamSource;
				}
				else if (bitmapImage.UriSource != null)
				{
					uri = bitmapImage.UriSource;
					if (!uri.IsAbsoluteUri)
					{
						Uri uri2 = bitmapImage.BaseUri ?? ((imageControl != null) ? ((IUriContext)imageControl).BaseUri : null);
						if (uri2 != null)
						{
							uri = new Uri(uri2, uri);
						}
					}
				}
			}
			else
			{
				BitmapFrame bitmapFrame = image as BitmapFrame;
				if (bitmapFrame != null)
				{
					bitmapDecoder = bitmapFrame.Decoder;
					Uri.TryCreate(bitmapFrame.BaseUri, bitmapFrame.ToString(), out uri);
				}
			}
			if (bitmapDecoder == null)
			{
				if (stream != null)
				{
					stream.Position = 0L;
					bitmapDecoder = BitmapDecoder.Create(stream, bitmapCreateOptions, BitmapCacheOption.OnLoad);
				}
				else if (uri != null && uri.IsAbsoluteUri)
				{
					bitmapDecoder = BitmapDecoder.Create(uri, bitmapCreateOptions, BitmapCacheOption.OnLoad);
				}
			}
			if (bitmapDecoder is GifBitmapDecoder && !ImageBehavior.CanReadNativeMetadata(bitmapDecoder))
			{
				if (stream != null)
				{
					stream.Position = 0L;
					gifFile = GifFile.ReadGifFile(stream, true);
				}
				else
				{
					if (!(uri != null))
					{
						throw new InvalidOperationException("Can't get URI or Stream from the source. AnimatedSource should be either a BitmapImage, or a BitmapFrame constructed from a URI.");
					}
					gifFile = ImageBehavior.DecodeGifFile(uri);
				}
			}
			if (bitmapDecoder == null)
			{
				throw new InvalidOperationException("Can't get a decoder from the source. AnimatedSource should be either a BitmapImage or a BitmapFrame.");
			}
			return bitmapDecoder;
		}

		// Token: 0x0600003B RID: 59 RVA: 0x00003018 File Offset: 0x00001218
		private static bool CanReadNativeMetadata(BitmapDecoder decoder)
		{
			bool flag;
			try
			{
				flag = decoder.Metadata != null;
			}
			catch
			{
				flag = false;
			}
			return flag;
		}

		// Token: 0x0600003C RID: 60 RVA: 0x00003048 File Offset: 0x00001248
		private static GifFile DecodeGifFile(Uri uri)
		{
			Stream stream = null;
			if (uri.Scheme == PackUriHelper.UriSchemePack)
			{
				StreamResourceInfo streamResourceInfo;
				if (uri.Authority == "siteoforigin:,,,")
				{
					streamResourceInfo = Application.GetRemoteStream(uri);
				}
				else
				{
					streamResourceInfo = Application.GetResourceStream(uri);
				}
				if (streamResourceInfo != null)
				{
					stream = streamResourceInfo.Stream;
				}
			}
			else
			{
				stream = new WebClient().OpenRead(uri);
			}
			if (stream != null)
			{
				using (stream)
				{
					return GifFile.ReadGifFile(stream, true);
				}
			}
			return null;
		}

		// Token: 0x0600003D RID: 61 RVA: 0x000030D0 File Offset: 0x000012D0
		private static bool IsFullFrame(ImageBehavior.FrameMetadata metadata, ImageBehavior.Int32Size fullSize)
		{
			return metadata.Left == 0 && metadata.Top == 0 && metadata.Width == fullSize.Width && metadata.Height == fullSize.Height;
		}

		// Token: 0x0600003E RID: 62 RVA: 0x00003104 File Offset: 0x00001304
		private static BitmapSource MakeFrame(ImageBehavior.Int32Size fullSize, BitmapSource rawFrame, ImageBehavior.FrameMetadata metadata, BitmapSource baseFrame)
		{
			if (baseFrame == null && ImageBehavior.IsFullFrame(metadata, fullSize))
			{
				return rawFrame;
			}
			DrawingVisual drawingVisual = new DrawingVisual();
			using (DrawingContext drawingContext = drawingVisual.RenderOpen())
			{
				if (baseFrame != null)
				{
					Rect rect = new Rect(0.0, 0.0, (double)fullSize.Width, (double)fullSize.Height);
					drawingContext.DrawImage(baseFrame, rect);
				}
				Rect rect2 = new Rect((double)metadata.Left, (double)metadata.Top, (double)metadata.Width, (double)metadata.Height);
				drawingContext.DrawImage(rawFrame, rect2);
			}
			RenderTargetBitmap renderTargetBitmap = new RenderTargetBitmap(fullSize.Width, fullSize.Height, 96.0, 96.0, PixelFormats.Pbgra32);
			renderTargetBitmap.Render(drawingVisual);
			WriteableBitmap writeableBitmap = new WriteableBitmap(renderTargetBitmap);
			if (writeableBitmap.CanFreeze && !writeableBitmap.IsFrozen)
			{
				writeableBitmap.Freeze();
			}
			return writeableBitmap;
		}

		// Token: 0x0600003F RID: 63 RVA: 0x000031F8 File Offset: 0x000013F8
		private static RepeatBehavior GetActualRepeatBehavior(Image imageControl, BitmapDecoder decoder, GifFile gifMetadata)
		{
			RepeatBehavior repeatBehavior = ImageBehavior.GetRepeatBehavior(imageControl);
			if (repeatBehavior != default(RepeatBehavior))
			{
				return repeatBehavior;
			}
			int num;
			if (gifMetadata != null)
			{
				num = (int)gifMetadata.RepeatCount;
			}
			else
			{
				num = ImageBehavior.GetRepeatCount(decoder);
			}
			if (num == 0)
			{
				return RepeatBehavior.Forever;
			}
			return new RepeatBehavior((double)num);
		}

		// Token: 0x06000040 RID: 64 RVA: 0x00003244 File Offset: 0x00001444
		private static int GetRepeatCount(BitmapDecoder decoder)
	{
		BitmapMetadata applicationExtension = GetApplicationExtension(decoder, "NETSCAPE2.0");
		if (applicationExtension != null)
		{
			byte[] queryOrNull = applicationExtension.GetQueryOrNull<byte[]>("/Data");
			if (queryOrNull != null && queryOrNull.Length >= 4)
			{
				return BitConverter.ToUInt16(queryOrNull, 2);
			}
		}
		return 1;
	}

		// Token: 0x06000041 RID: 65 RVA: 0x00003280 File Offset: 0x00001480
		private static BitmapMetadata GetApplicationExtension(BitmapDecoder decoder, string application)
	{
		int num = 0;
		string query = "/appext";
		for (BitmapMetadata queryOrNull = decoder.Metadata.GetQueryOrNull<BitmapMetadata>(query); queryOrNull != null; queryOrNull = decoder.Metadata.GetQueryOrNull<BitmapMetadata>(query))
		{
			byte[] queryOrNull2 = queryOrNull.GetQueryOrNull<byte[]>("/Application");
			if (queryOrNull2 != null && Encoding.ASCII.GetString(queryOrNull2) == application)
			{
				return queryOrNull;
			}
			query = $"/[{++num}]appext";
		}
		return null;
	}

		// Token: 0x06000042 RID: 66 RVA: 0x000032EE File Offset: 0x000014EE
		private static ImageBehavior.FrameMetadata GetFrameMetadata(BitmapDecoder decoder, GifFile gifMetadata, int frameIndex)
		{
			if (gifMetadata != null && gifMetadata.Frames.Count > frameIndex)
			{
				return ImageBehavior.GetFrameMetadata(gifMetadata.Frames[frameIndex]);
			}
			return ImageBehavior.GetFrameMetadata(decoder.Frames[frameIndex]);
		}

		// Token: 0x06000043 RID: 67 RVA: 0x00003324 File Offset: 0x00001524
		private static ImageBehavior.FrameMetadata GetFrameMetadata(BitmapFrame frame)
		{
			BitmapMetadata bitmapMetadata = (BitmapMetadata)frame.Metadata;
			TimeSpan timeSpan = TimeSpan.FromMilliseconds(100.0);
			int queryOrDefault = bitmapMetadata.GetQueryOrDefault("/grctlext/Delay", 10);
			if (queryOrDefault != 0)
			{
				timeSpan = TimeSpan.FromMilliseconds((double)(queryOrDefault * 10));
			}
			ImageBehavior.FrameDisposalMethod queryOrDefault2 = (ImageBehavior.FrameDisposalMethod)bitmapMetadata.GetQueryOrDefault("/grctlext/Disposal", 0);
			return new ImageBehavior.FrameMetadata
			{
				Left = bitmapMetadata.GetQueryOrDefault("/imgdesc/Left", 0),
				Top = bitmapMetadata.GetQueryOrDefault("/imgdesc/Top", 0),
				Width = bitmapMetadata.GetQueryOrDefault("/imgdesc/Width", frame.PixelWidth),
				Height = bitmapMetadata.GetQueryOrDefault("/imgdesc/Height", frame.PixelHeight),
				Delay = timeSpan,
				DisposalMethod = queryOrDefault2
			};
		}

		// Token: 0x06000044 RID: 68 RVA: 0x000033DC File Offset: 0x000015DC
		private static ImageBehavior.FrameMetadata GetFrameMetadata(GifFrame gifMetadata)
		{
			GifImageDescriptor descriptor = gifMetadata.Descriptor;
			ImageBehavior.FrameMetadata frameMetadata = new ImageBehavior.FrameMetadata
			{
				Left = descriptor.Left,
				Top = descriptor.Top,
				Width = descriptor.Width,
				Height = descriptor.Height,
				Delay = TimeSpan.FromMilliseconds(100.0),
				DisposalMethod = ImageBehavior.FrameDisposalMethod.None
			};
			GifGraphicControlExtension gifGraphicControlExtension = gifMetadata.Extensions.OfType<GifGraphicControlExtension>().FirstOrDefault<GifGraphicControlExtension>();
			if (gifGraphicControlExtension != null)
			{
				if (gifGraphicControlExtension.Delay != 0)
				{
					frameMetadata.Delay = TimeSpan.FromMilliseconds((double)gifGraphicControlExtension.Delay);
				}
				frameMetadata.DisposalMethod = (ImageBehavior.FrameDisposalMethod)gifGraphicControlExtension.DisposalMethod;
			}
			return frameMetadata;
		}

		// Token: 0x06000045 RID: 69 RVA: 0x0000347C File Offset: 0x0000167C
		private static ImageBehavior.Int32Size GetFullSize(BitmapDecoder decoder, GifFile gifMetadata)
		{
			if (gifMetadata != null)
			{
				GifLogicalScreenDescriptor logicalScreenDescriptor = gifMetadata.Header.LogicalScreenDescriptor;
				return new ImageBehavior.Int32Size(logicalScreenDescriptor.Width, logicalScreenDescriptor.Height);
			}
			int queryOrDefault = decoder.Metadata.GetQueryOrDefault("/logscrdesc/Width", 0);
			int queryOrDefault2 = decoder.Metadata.GetQueryOrDefault("/logscrdesc/Height", 0);
			return new ImageBehavior.Int32Size(queryOrDefault, queryOrDefault2);
		}

		// Token: 0x06000046 RID: 70 RVA: 0x000034D3 File Offset: 0x000016D3
		private static T GetQueryOrDefault<T>(this BitmapMetadata metadata, string query, T defaultValue)
		{
			if (metadata.ContainsQuery(query))
			{
				return (T)((object)Convert.ChangeType(metadata.GetQuery(query), typeof(T)));
			}
			return defaultValue;
		}

		// Token: 0x06000047 RID: 71 RVA: 0x000034FC File Offset: 0x000016FC
		private static T GetQueryOrNull<T>(this BitmapMetadata metadata, string query) where T : class
		{
			if (metadata.ContainsQuery(query))
			{
				return metadata.GetQuery(query) as T;
			}
			return default(T);
		}

		// Token: 0x0400000B RID: 11
		public static readonly DependencyProperty AnimatedSourceProperty = DependencyProperty.RegisterAttached("AnimatedSource", typeof(ImageSource), typeof(ImageBehavior), new UIPropertyMetadata(null, new PropertyChangedCallback(ImageBehavior.AnimatedSourceChanged)));

		// Token: 0x0400000C RID: 12
		public static readonly DependencyProperty RepeatBehaviorProperty = DependencyProperty.RegisterAttached("RepeatBehavior", typeof(RepeatBehavior), typeof(ImageBehavior), new UIPropertyMetadata(default(RepeatBehavior), new PropertyChangedCallback(ImageBehavior.RepeatBehaviorChanged)));

		// Token: 0x0400000D RID: 13
		public static readonly DependencyProperty AnimateInDesignModeProperty = DependencyProperty.RegisterAttached("AnimateInDesignMode", typeof(bool), typeof(ImageBehavior), new FrameworkPropertyMetadata(false, FrameworkPropertyMetadataOptions.Inherits, new PropertyChangedCallback(ImageBehavior.AnimateInDesignModeChanged)));

		// Token: 0x0400000E RID: 14
		public static readonly DependencyProperty AutoStartProperty = DependencyProperty.RegisterAttached("AutoStart", typeof(bool), typeof(ImageBehavior), new PropertyMetadata(true));

		// Token: 0x0400000F RID: 15
		private static readonly DependencyPropertyKey AnimationControllerPropertyKey = DependencyProperty.RegisterAttachedReadOnly("AnimationController", typeof(ImageAnimationController), typeof(ImageBehavior), new PropertyMetadata(null));

		// Token: 0x04000010 RID: 16
		private static readonly DependencyPropertyKey IsAnimationLoadedPropertyKey = DependencyProperty.RegisterAttachedReadOnly("IsAnimationLoaded", typeof(bool), typeof(ImageBehavior), new PropertyMetadata(false));

		// Token: 0x04000011 RID: 17
		public static readonly DependencyProperty IsAnimationLoadedProperty = ImageBehavior.IsAnimationLoadedPropertyKey.DependencyProperty;

		// Token: 0x04000012 RID: 18
		public static readonly RoutedEvent AnimationLoadedEvent = EventManager.RegisterRoutedEvent("AnimationLoaded", RoutingStrategy.Bubble, typeof(RoutedEventHandler), typeof(ImageBehavior));

		// Token: 0x04000013 RID: 19
		public static readonly RoutedEvent AnimationCompletedEvent = EventManager.RegisterRoutedEvent("AnimationCompleted", RoutingStrategy.Bubble, typeof(RoutedEventHandler), typeof(ImageBehavior));

		// Token: 0x0200001B RID: 27
		private struct Int32Size
		{
			// Token: 0x06000100 RID: 256 RVA: 0x000045BD File Offset: 0x000027BD
			public Int32Size(int width, int height)
			{
				this = default(ImageBehavior.Int32Size);
				this.Width = width;
				this.Height = height;
			}

			// Token: 0x17000047 RID: 71
			// (get) Token: 0x06000101 RID: 257 RVA: 0x000045D4 File Offset: 0x000027D4
			// (set) Token: 0x06000102 RID: 258 RVA: 0x000045DC File Offset: 0x000027DC
			public int Width { get; private set; }

			// Token: 0x17000048 RID: 72
			// (get) Token: 0x06000103 RID: 259 RVA: 0x000045E5 File Offset: 0x000027E5
			// (set) Token: 0x06000104 RID: 260 RVA: 0x000045ED File Offset: 0x000027ED
			public int Height { get; private set; }
		}

		// Token: 0x0200001C RID: 28
		private class FrameMetadata
		{
			// Token: 0x17000049 RID: 73
			// (get) Token: 0x06000105 RID: 261 RVA: 0x000045F6 File Offset: 0x000027F6
			// (set) Token: 0x06000106 RID: 262 RVA: 0x000045FE File Offset: 0x000027FE
			public int Left { get; set; }

			// Token: 0x1700004A RID: 74
			// (get) Token: 0x06000107 RID: 263 RVA: 0x00004607 File Offset: 0x00002807
			// (set) Token: 0x06000108 RID: 264 RVA: 0x0000460F File Offset: 0x0000280F
			public int Top { get; set; }

			// Token: 0x1700004B RID: 75
			// (get) Token: 0x06000109 RID: 265 RVA: 0x00004618 File Offset: 0x00002818
			// (set) Token: 0x0600010A RID: 266 RVA: 0x00004620 File Offset: 0x00002820
			public int Width { get; set; }

			// Token: 0x1700004C RID: 76
			// (get) Token: 0x0600010B RID: 267 RVA: 0x00004629 File Offset: 0x00002829
			// (set) Token: 0x0600010C RID: 268 RVA: 0x00004631 File Offset: 0x00002831
			public int Height { get; set; }

			// Token: 0x1700004D RID: 77
			// (get) Token: 0x0600010D RID: 269 RVA: 0x0000463A File Offset: 0x0000283A
			// (set) Token: 0x0600010E RID: 270 RVA: 0x00004642 File Offset: 0x00002842
			public TimeSpan Delay { get; set; }

			// Token: 0x1700004E RID: 78
			// (get) Token: 0x0600010F RID: 271 RVA: 0x0000464B File Offset: 0x0000284B
			// (set) Token: 0x06000110 RID: 272 RVA: 0x00004653 File Offset: 0x00002853
			public ImageBehavior.FrameDisposalMethod DisposalMethod { get; set; }
		}

		// Token: 0x0200001D RID: 29
		private enum FrameDisposalMethod
		{
			// Token: 0x04000066 RID: 102
			None,
			// Token: 0x04000067 RID: 103
			DoNotDispose,
			// Token: 0x04000068 RID: 104
			RestoreBackground,
			// Token: 0x04000069 RID: 105
			RestorePrevious
		}
	}
}
