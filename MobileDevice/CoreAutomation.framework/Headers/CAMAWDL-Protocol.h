//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CAMReturnArray, CAMReturnBool, CAMReturnDictionary, CAMReturnDouble, CAMReturnString, CAMReturnVoid, NSArray, NSNumber, NSString;

@protocol CAMAWDL

@optional
- (CAMReturnArray *)browse:(NSNumber *)arg1;
- (CAMReturnDouble *)browseForPeer:(NSString *)arg1 withTimeout:(NSNumber *)arg2;
- (CAMReturnString *)getAirDropMode;
- (CAMReturnVoid *)receiveFiles:(NSString *)arg1 withTimeout:(NSNumber *)arg2;
- (CAMReturnDictionary *)sendFilesWithICloud:(NSArray *)arg1 toHost:(NSString *)arg2 withTrials:(NSNumber *)arg3 withTimeout:(NSNumber *)arg4;
- (CAMReturnVoid *)setAirDropMode:(NSString *)arg1;
- (CAMReturnVoid *)setVerbosity:(NSNumber *)arg1;
- (CAMReturnBool *)supportsAWDL;
@end

