#import <Foundation/Foundation.h>
#import "NetworkConstant.h"

NS_ASSUME_NONNULL_BEGIN


@interface AdSetQDMCrashHandler : NSObject

+ (void)installCrashHandler;

+ (void)uninstallCrashHandler;

+ (BOOL)isCrashHandlerInstalled;

#if ADVISTA_ENV_DEBUG
/// ⚠️ QA 崩溃触发方法：仅测试环境（ADVISTA_ENV_DEBUG=1）编译，详细说明见 AdSetQDMCrashHandler.m
/// 崩溃点在 SDK 代码内，用于验证「捕获 → 落盘 → 重启补传」链路
+ (void)triggerTestUncaughtCrashForQa;   // @throw NSException
+ (void)triggerAbortCrashForQa;          // abort() → SIGABRT
+ (void)triggerWildPointerCrashForQa;    // use-after-free → EXC_BAD_ACCESS
+ (void)triggerNilDerefCrashForQa;       // NULL 解引用 → EXC_BAD_ACCESS
+ (void)triggerSignalFPECrashForQa;      // raise(SIGFPE)
#endif

@end

NS_ASSUME_NONNULL_END
