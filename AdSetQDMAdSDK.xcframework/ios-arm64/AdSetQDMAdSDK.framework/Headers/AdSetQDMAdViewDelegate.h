NS_ASSUME_NONNULL_BEGIN

@protocol AdSetQDMAdViewDelegate <NSObject>
@optional
- (void)onClicked;
- (void)onTouchDown:(NSInteger)x y:(NSInteger)y;
- (void)onTouchUp:(NSInteger)x y:(NSInteger)y;
- (void)onSensorChange;
- (void)onSkipClicked;
- (void)onTimeClosed;
- (void)onResourceReady;
- (void)onVerifyReward;
- (void)onVideoPlayFinished;
- (void)onAdViewAttachedToWindow;
- (BOOL)shouldTriggerTouchMisClick;
- (void)onAdViewTouchDown;
- (void)onUserClickFromTouch;
@end

NS_ASSUME_NONNULL_END
