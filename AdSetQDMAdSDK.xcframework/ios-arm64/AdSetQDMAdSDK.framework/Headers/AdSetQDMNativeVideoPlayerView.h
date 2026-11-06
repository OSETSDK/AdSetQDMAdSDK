#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import "AdSetQDMNativeVideoViewDelegate.h"

@interface AdSetQDMNativeVideoPlayerView : UIView

@property (nonatomic, weak) id<AdSetQDMNativeVideoViewDelegate> listener;
@property (nonatomic, strong, readonly) NSString *videoUrl;
@property (nonatomic, assign, readonly) NSTimeInterval totalDuration;
@property (nonatomic, assign, readonly) NSTimeInterval currentPosition;
@property (nonatomic, assign, readonly) NSInteger videoProgress;
@property (nonatomic, assign, readonly) BOOL isMuted;

- (instancetype)initWithFrame:(CGRect)frame videoUrl:(NSString *)videoUrl;

- (instancetype)initWithFrame:(CGRect)frame
                     videoUrl:(NSString *)videoUrl
                coverImageUrl:(NSString *)coverImageUrl;

- (void)showInView:(UIView *)parentView withFrame:(CGRect)frame;

- (void)startVideo;
- (void)pauseVideo;
- (void)resumeVideo;
- (void)stopVideo;
- (void)destroy;
- (void)setVideoMute:(BOOL)mute;
- (NSTimeInterval)getVideoDuration;
- (NSTimeInterval)getVideoCurrentPosition;
- (NSInteger)getVideoProgress;

@end
