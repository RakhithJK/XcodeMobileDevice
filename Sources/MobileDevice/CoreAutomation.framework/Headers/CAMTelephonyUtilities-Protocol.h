//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CAMReturnBool, CAMReturnInteger, CAMReturnVoid, NSNumber, NSString;

@protocol CAMTelephonyUtilities

@optional
- (CAMReturnBool *)answerFaceTimeAudioCallFrom:(NSString *)arg1 waitForActive:(NSNumber *)arg2 withTimeout:(NSNumber *)arg3;
- (CAMReturnBool *)answerFaceTimeCallFrom:(NSString *)arg1 waitForActive:(NSNumber *)arg2 withTimeout:(NSNumber *)arg3;
- (CAMReturnBool *)answerPhoneContinuityCallFrom:(NSString *)arg1 waitForActive:(NSNumber *)arg2 withTimeout:(NSNumber *)arg3;
- (CAMReturnBool *)answerTelephonyCallFrom:(NSString *)arg1 waitForActive:(NSNumber *)arg2 withTimeout:(NSNumber *)arg3;
- (CAMReturnBool *)answerWifiCallFrom:(NSString *)arg1 waitForActive:(NSNumber *)arg2 withTimeout:(NSNumber *)arg3;
- (CAMReturnBool *)disconnectFaceTimeAudioCallWaitForDisconnect:(NSNumber *)arg1 withTimeout:(NSNumber *)arg2;
- (CAMReturnBool *)disconnectFaceTimeCallWaitForDisconnect:(NSNumber *)arg1 withTimeout:(NSNumber *)arg2;
- (CAMReturnBool *)disconnectPhoneContinuityCallWaitForDisconnect:(NSNumber *)arg1 withTimeout:(NSNumber *)arg2;
- (CAMReturnBool *)disconnectTelephonyCallWaitForDisconnect:(NSNumber *)arg1 withTimeout:(NSNumber *)arg2;
- (CAMReturnBool *)disconnectWifiCallWaitForDisconnect:(NSNumber *)arg1 withTimeout:(NSNumber *)arg2;
- (CAMReturnBool *)endActiveAndAnswerCall;
- (CAMReturnBool *)endHoldAndAnswerCall;
- (CAMReturnInteger *)getActiveCallType;
- (CAMReturnInteger *)getCurrentCallState;
- (CAMReturnBool *)holdAndAnswerFaceTimeAudioCallFrom:(NSString *)arg1 waitForActive:(NSNumber *)arg2 withTimeout:(NSNumber *)arg3;
- (CAMReturnBool *)holdAndAnswerPhoneContinuityCallFrom:(NSString *)arg1 waitForActive:(NSNumber *)arg2 withTimeout:(NSNumber *)arg3;
- (CAMReturnBool *)holdAndAnswerTelephonyCallFrom:(NSString *)arg1 waitForActive:(NSNumber *)arg2 withTimeout:(NSNumber *)arg3;
- (CAMReturnBool *)holdAndAnswerWifiCallFrom:(NSString *)arg1 waitForActive:(NSNumber *)arg2 withTimeout:(NSNumber *)arg3;
- (CAMReturnBool *)initiateFaceTimeAudioCallWith:(NSString *)arg1 waitForActive:(NSNumber *)arg2 withTimeout:(NSNumber *)arg3;
- (CAMReturnBool *)initiateFaceTimeCallWith:(NSString *)arg1 waitForActive:(NSNumber *)arg2 withTimeout:(NSNumber *)arg3;
- (CAMReturnBool *)initiatePhoneContinuityCallWith:(NSString *)arg1 waitForActive:(NSNumber *)arg2 withTimeout:(NSNumber *)arg3;
- (CAMReturnBool *)initiateTelephonyCallWith:(NSString *)arg1 waitForActive:(NSNumber *)arg2 withTimeout:(NSNumber *)arg3;
- (CAMReturnBool *)initiateWifiCallWith:(NSString *)arg1 waitForActive:(NSNumber *)arg2 withTimeout:(NSNumber *)arg3;
- (CAMReturnBool *)mergeCalls;
- (CAMReturnVoid *)suppressRingtone;
- (CAMReturnBool *)swapCalls;
- (CAMReturnBool *)toggleHold;
- (CAMReturnBool *)toggleMute;
@end

