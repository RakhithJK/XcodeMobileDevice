//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CAMReturnArray, CAMReturnBool, CAMReturnDictionary, CAMReturnDouble, CAMReturnInteger, CAMReturnVoid, NSData, NSDictionary, NSNumber, NSString;

@protocol CAMSettings

@optional
- (CAMReturnInteger *)activeAVCategory;
- (CAMReturnBool *)appleWirelessDiagnosticsEnabled;
- (CAMReturnBool *)bypassSetupAssistant;
- (CAMReturnBool *)changePasscodeFrom:(NSString *)arg1 toPasscode:(NSString *)arg2;
- (CAMReturnVoid *)changeVolumeBy:(NSNumber *)arg1 forCategory:(NSNumber *)arg2;
- (CAMReturnVoid *)deletePreferencesKey:(NSString *)arg1 inDomain:(NSString *)arg2;
- (CAMReturnVoid *)eraseAllContentsAndSettings;
- (CAMReturnInteger *)getAudioSourceType;
- (CAMReturnInteger *)getAutoLockInterval;
- (CAMReturnInteger *)getVoiceMute;
- (CAMReturnDouble *)getVolume:(NSNumber *)arg1;
- (CAMReturnDictionary *)installProfileFromURL:(NSString *)arg1 promptAnswers:(NSDictionary *)arg2;
- (CAMReturnDictionary *)installProfileWithData:(NSData *)arg1 promptAnswers:(NSDictionary *)arg2;
- (CAMReturnArray *)installedProfiles;
- (CAMReturnBool *)isPasscodeSet;
- (CAMReturnBool *)isScreenLocked;
- (CAMReturnBool *)lockScreen;
- (CAMReturnVoid *)postDarwinNotification:(NSString *)arg1;
- (CAMReturnBool *)removePasscode:(NSString *)arg1;
- (CAMReturnVoid *)resetNetworkSettings;
- (CAMReturnVoid *)setAppleWirelessDiagnosticsEnabled:(NSNumber *)arg1;
- (CAMReturnVoid *)setAudioSourceType:(NSNumber *)arg1;
- (CAMReturnVoid *)setAutoLockInterval:(NSNumber *)arg1;
- (CAMReturnBool *)setPasscode:(NSString *)arg1;
- (CAMReturnVoid *)setPowerlogEnabled:(NSNumber *)arg1;
- (CAMReturnVoid *)setSiriLoggingEnabled:(NSNumber *)arg1;
- (CAMReturnVoid *)setStreamCaptureForTelephonyAndFaceTime:(NSNumber *)arg1;
- (CAMReturnVoid *)setValue:(id)arg1 forPreferencesKey:(NSString *)arg2 inDomain:(NSString *)arg3;
- (CAMReturnVoid *)setVoiceMute:(NSNumber *)arg1;
- (CAMReturnVoid *)setVoicecallAudioInjection:(NSNumber *)arg1 withWaveFile:(NSDictionary *)arg2;
- (CAMReturnVoid *)setVolume:(NSNumber *)arg1 forCategory:(NSNumber *)arg2;
- (CAMReturnBool *)siriLoggingEnabled;
- (CAMReturnVoid *)uninstallProfileWithIdentifier:(NSString *)arg1;
- (CAMReturnBool *)verifyPasscode:(NSString *)arg1;
@end

