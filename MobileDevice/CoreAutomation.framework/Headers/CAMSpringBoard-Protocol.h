//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CAMReturnBool, CAMReturnDictionary, CAMReturnString, NSNumber, NSString;

@protocol CAMSpringBoard

@optional
- (CAMReturnString *)getAppState:(NSString *)arg1;
- (CAMReturnDictionary *)getAvailableApps;
- (CAMReturnString *)getForegroundAppName;
- (CAMReturnBool *)isAppRunningBackground:(NSString *)arg1;
- (CAMReturnBool *)isAppRunningForeground:(NSString *)arg1;
- (CAMReturnBool *)isAppSuspended:(NSString *)arg1;
- (CAMReturnBool *)isResponsive;
- (CAMReturnBool *)launchApp:(NSString *)arg1 suspended:(NSNumber *)arg2;
- (CAMReturnBool *)launchAppWithBundleID:(NSString *)arg1;
- (CAMReturnBool *)terminateApp:(NSString *)arg1;
- (CAMReturnBool *)terminateAppWithBundleID:(NSString *)arg1;
- (CAMReturnBool *)waitUntilResponsiveWithTimeout:(NSNumber *)arg1;
@end

