#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AdSetQDMTouchGestureState : NSObject
- (void)resetDownX:(CGFloat)x y:(CGFloat)y;
- (BOOL)isHandled;
- (void)markHandled;
- (CGFloat)downX;
- (CGFloat)downY;
- (CGFloat)touchSlop;
- (BOOL)isValidTapWithUpX:(CGFloat)upX upY:(CGFloat)upY;
@end

NS_ASSUME_NONNULL_END
