//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CAMReturnArray, CAMReturnBool, CAMReturnDictionary, CAMReturnInteger, CAMReturnVoid, NSNumber, NSString;

@protocol CAMNetworking

@optional
- (CAMReturnDictionary *)DNSSettings;
- (CAMReturnBool *)authenticateInternetTethering;
- (CAMReturnVoid *)connectService:(NSString *)arg1 withServiceType:(NSString *)arg2 withinTimeout:(NSNumber *)arg3;
- (CAMReturnArray *)discoverServices:(NSString *)arg1 withinTimeout:(NSNumber *)arg2;
- (CAMReturnBool *)hasWiFi;
- (CAMReturnBool *)hasWiFiDriver;
- (CAMReturnBool *)internetTetheringAuthenticated;
- (CAMReturnBool *)isAirplaneModeEnabled;
- (CAMReturnDictionary *)networkInterfaceSettings:(NSString *)arg1;
- (CAMReturnDictionary *)networkSettings;
- (CAMReturnVoid *)registerService:(NSString *)arg1 withServiceType:(NSString *)arg2 withinTimeout:(NSNumber *)arg3;
- (CAMReturnVoid *)setAirplaneModeEnabled:(NSNumber *)arg1;
- (CAMReturnVoid *)setInternetTetheringEnabled:(NSNumber *)arg1;
- (CAMReturnInteger *)tetheredHostCount;
- (CAMReturnDictionary *)tetheringStatus;
- (CAMReturnVoid *)unregisterService;
@end
