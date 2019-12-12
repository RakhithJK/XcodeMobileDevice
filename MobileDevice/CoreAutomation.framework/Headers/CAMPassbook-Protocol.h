//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CAMReturnBool, CAMReturnDictionary, CAMReturnVoid, NSNumber, NSString;

@protocol CAMPassbook

@optional
- (CAMReturnBool *)addPKPassFromFile:(NSString *)arg1;
- (CAMReturnDictionary *)provisionCardWithCardholderName:(NSString *)arg1 primaryAccountNumber:(NSString *)arg2 expirationDate:(NSString *)arg3 securityCode:(NSString *)arg4;
- (CAMReturnDictionary *)provisionCardWithCardholderName:(NSString *)arg1 primaryAccountNumber:(NSString *)arg2 expirationDate:(NSString *)arg3 securityCode:(NSString *)arg4 onWatch:(NSNumber *)arg5;
- (CAMReturnBool *)registerDevice;
- (CAMReturnVoid *)removeAllPKPasses;
- (CAMReturnBool *)removePassWithPassTypeIdentifier:(NSString *)arg1 serialNumber:(NSString *)arg2;
- (CAMReturnBool *)requestVerificationCodeForPassWithPassTypeIdentifier:(NSString *)arg1 serialNumber:(NSString *)arg2 preferredChannel:(NSString *)arg3;
- (CAMReturnVoid *)simulatePaymentPush;
- (CAMReturnBool *)submitVerificationCode:(NSString *)arg1 forPassWithPassTypeIdentifier:(NSString *)arg2 serialNumber:(NSString *)arg3;
@end

