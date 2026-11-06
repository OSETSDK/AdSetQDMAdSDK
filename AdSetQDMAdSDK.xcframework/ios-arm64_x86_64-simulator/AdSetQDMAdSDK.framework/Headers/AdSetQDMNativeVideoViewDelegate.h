#import <Foundation/Foundation.h>

@protocol AdSetQDMNativeVideoViewDelegate <NSObject>

- (void)onVideoLoading;
- (void)onVideoReady;
- (void)onVideoStart;
- (void)onVideoProgress:(double)progress;
- (void)onVideoPause;
- (void)onVideoResume;
- (void)onVideoCompleted;
- (void)onVideoStop;
- (void)onVideoError:(NSInteger)errorType;

@end
