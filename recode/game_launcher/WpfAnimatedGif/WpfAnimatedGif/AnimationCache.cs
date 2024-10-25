using System;
using System.Collections.Generic;
using System.Windows.Media;
using System.Windows.Media.Animation;
using System.Windows.Media.Imaging;

namespace WpfAnimatedGif
{
	// Token: 0x02000003 RID: 3
	internal static class AnimationCache
	{
		// Token: 0x06000007 RID: 7 RVA: 0x00002188 File Offset: 0x00000388
		public static void IncrementReferenceCount(ImageSource source, RepeatBehavior repeatBehavior)
		{
			AnimationCache.CacheKey cacheKey = new AnimationCache.CacheKey(source, repeatBehavior);
			int num;
			AnimationCache._referenceCount.TryGetValue(cacheKey, out num);
			num++;
			AnimationCache._referenceCount[cacheKey] = num;
		}

		// Token: 0x06000008 RID: 8 RVA: 0x000021BC File Offset: 0x000003BC
		public static void DecrementReferenceCount(ImageSource source, RepeatBehavior repeatBehavior)
		{
			AnimationCache.CacheKey cacheKey = new AnimationCache.CacheKey(source, repeatBehavior);
			int num;
			AnimationCache._referenceCount.TryGetValue(cacheKey, out num);
			if (num > 0)
			{
				num--;
				AnimationCache._referenceCount[cacheKey] = num;
			}
			if (num == 0)
			{
				AnimationCache._animationCache.Remove(cacheKey);
				AnimationCache._referenceCount.Remove(cacheKey);
			}
		}

		// Token: 0x06000009 RID: 9 RVA: 0x00002210 File Offset: 0x00000410
		public static void AddAnimation(ImageSource source, RepeatBehavior repeatBehavior, ObjectAnimationUsingKeyFrames animation)
		{
			AnimationCache.CacheKey cacheKey = new AnimationCache.CacheKey(source, repeatBehavior);
			AnimationCache._animationCache[cacheKey] = animation;
		}

		// Token: 0x0600000A RID: 10 RVA: 0x00002234 File Offset: 0x00000434
		public static void RemoveAnimation(ImageSource source, RepeatBehavior repeatBehavior, ObjectAnimationUsingKeyFrames animation)
		{
			AnimationCache.CacheKey cacheKey = new AnimationCache.CacheKey(source, repeatBehavior);
			AnimationCache._animationCache.Remove(cacheKey);
		}

		// Token: 0x0600000B RID: 11 RVA: 0x00002258 File Offset: 0x00000458
		public static ObjectAnimationUsingKeyFrames GetAnimation(ImageSource source, RepeatBehavior repeatBehavior)
		{
			AnimationCache.CacheKey cacheKey = new AnimationCache.CacheKey(source, repeatBehavior);
			ObjectAnimationUsingKeyFrames objectAnimationUsingKeyFrames;
			AnimationCache._animationCache.TryGetValue(cacheKey, out objectAnimationUsingKeyFrames);
			return objectAnimationUsingKeyFrames;
		}

		// Token: 0x04000003 RID: 3
		private static readonly Dictionary<AnimationCache.CacheKey, ObjectAnimationUsingKeyFrames> _animationCache = new Dictionary<AnimationCache.CacheKey, ObjectAnimationUsingKeyFrames>();

		// Token: 0x04000004 RID: 4
		private static readonly Dictionary<AnimationCache.CacheKey, int> _referenceCount = new Dictionary<AnimationCache.CacheKey, int>();

		// Token: 0x02000018 RID: 24
		private class CacheKey
		{
			// Token: 0x060000F4 RID: 244 RVA: 0x0000438B File Offset: 0x0000258B
			public CacheKey(ImageSource source, RepeatBehavior repeatBehavior)
			{
				this._source = source;
				this._repeatBehavior = repeatBehavior;
			}

			// Token: 0x060000F5 RID: 245 RVA: 0x000043A1 File Offset: 0x000025A1
			private bool Equals(AnimationCache.CacheKey other)
			{
				return AnimationCache.CacheKey.ImageEquals(this._source, other._source) && object.Equals(this._repeatBehavior, other._repeatBehavior);
			}

			// Token: 0x060000F6 RID: 246 RVA: 0x000043D3 File Offset: 0x000025D3
			public override bool Equals(object obj)
			{
				return obj != null && (this == obj || (obj.GetType() == base.GetType() && this.Equals((AnimationCache.CacheKey)obj)));
			}

			// Token: 0x060000F7 RID: 247 RVA: 0x000043FC File Offset: 0x000025FC
			public override int GetHashCode()
			{
				return (AnimationCache.CacheKey.ImageGetHashCode(this._source) * 397) ^ this._repeatBehavior.GetHashCode();
			}

			// Token: 0x060000F8 RID: 248 RVA: 0x00004430 File Offset: 0x00002630
			private static int ImageGetHashCode(ImageSource image)
			{
				if (image != null)
				{
					Uri uri = AnimationCache.CacheKey.GetUri(image);
					if (uri != null)
					{
						return uri.GetHashCode();
					}
				}
				return 0;
			}

			// Token: 0x060000F9 RID: 249 RVA: 0x00004458 File Offset: 0x00002658
			private static bool ImageEquals(ImageSource x, ImageSource y)
			{
				if (object.Equals(x, y))
				{
					return true;
				}
				if (x == null != (y == null))
				{
					return false;
				}
				if (x.GetType() != y.GetType())
				{
					return false;
				}
				Uri uri = AnimationCache.CacheKey.GetUri(x);
				Uri uri2 = AnimationCache.CacheKey.GetUri(y);
				return uri != null && uri == uri2;
			}

			// Token: 0x060000FA RID: 250 RVA: 0x000044AC File Offset: 0x000026AC
			private static Uri GetUri(ImageSource image)
			{
				BitmapImage bitmapImage = image as BitmapImage;
				if (bitmapImage != null && bitmapImage.UriSource != null)
				{
					if (bitmapImage.UriSource.IsAbsoluteUri)
					{
						return bitmapImage.UriSource;
					}
					if (bitmapImage.BaseUri != null)
					{
						return new Uri(bitmapImage.BaseUri, bitmapImage.UriSource);
					}
				}
				BitmapFrame bitmapFrame = image as BitmapFrame;
				if (bitmapFrame != null)
				{
					string text = bitmapFrame.ToString();
					Uri uri;
					if (text != bitmapFrame.GetType().FullName && Uri.TryCreate(text, UriKind.RelativeOrAbsolute, out uri))
					{
						if (uri.IsAbsoluteUri)
						{
							return uri;
						}
						if (bitmapFrame.BaseUri != null)
						{
							return new Uri(bitmapFrame.BaseUri, uri);
						}
					}
				}
				return null;
			}

			// Token: 0x04000058 RID: 88
			private readonly ImageSource _source;

			// Token: 0x04000059 RID: 89
			private readonly RepeatBehavior _repeatBehavior;
		}
	}
}
