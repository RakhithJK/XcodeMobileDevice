//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreAutomation/NSObject-Protocol.h>

@class CAMReturnArray, CAMReturnBool, CAMReturnDictionary, CAMReturnString, CAMReturnVoid, NSString;

@protocol CAMMultipeerConnectivity <NSObject>

@optional
- (CAMReturnBool *)createAdvertiserWithServiceType:(NSString *)arg1;
- (CAMReturnBool *)createBrowserWithServiceType:(NSString *)arg1;
- (CAMReturnBool *)createPeerID:(NSString *)arg1;
- (CAMReturnBool *)end;
- (CAMReturnArray *)getConnectedPeers;
- (CAMReturnDictionary *)getConnectionStates;
- (CAMReturnArray *)getHistory;
- (CAMReturnArray *)getMessages;
- (CAMReturnString *)getPeerID;
- (CAMReturnArray *)getResourcesLocation;
- (CAMReturnVoid *)resetTestData;
- (CAMReturnBool *)sendMessage:(NSString *)arg1;
- (CAMReturnVoid *)sendResource:(NSString *)arg1;
- (CAMReturnBool *)startAdvertising;
- (CAMReturnBool *)startBrowsing;
- (CAMReturnBool *)startSession;
- (CAMReturnBool *)stopAdvertising;
- (CAMReturnBool *)stopBrowsing;
@end

