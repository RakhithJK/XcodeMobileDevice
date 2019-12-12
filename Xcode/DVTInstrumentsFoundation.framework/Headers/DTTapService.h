//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DTXConnectionServices/DTXService.h>

#import <DVTInstrumentsFoundation/DTTapAuthorizedAPI-Protocol.h>
#import <DVTInstrumentsFoundation/DTTapBulkDataReceiver-Protocol.h>

@class DTTapConfig, DTTapLocal, DTTapServiceMessageSender, NSObject, NSString;
@protocol DTTapServiceDelegate, OS_dispatch_queue;

@interface DTTapService : DTXService <DTTapAuthorizedAPI, DTTapBulkDataReceiver>
{
    unsigned int _tapServiceID;
    BOOL _tapIsRunning;
    id <DTTapServiceDelegate> _delegate;
    DTTapConfig *_config;
    DTTapLocal *_tap;
    BOOL _useExpiredPidCache;
    NSObject<OS_dispatch_queue> *_serialQueue;
    DTTapServiceMessageSender *_messageSender;
}

+ (void)initialize;
+ (id)playbackServiceName;
+ (void)registerCapabilities:(id)arg1 forDelegateClass:(Class)arg2 forConnection:(id)arg3;
- (void).cxx_destruct;
- (void)fetchDataNow;
- (void)handleBulkData:(const void *)arg1 size:(unsigned long long)arg2 destructor:(CDUnknownBlockType)arg3;
- (id)initWithChannel:(id)arg1;
- (void)messageReceived:(id)arg1;
- (void)pause;
- (void)sendFrameMessage:(id)arg1;
- (void)sendHeartbeatTime:(unsigned long long)arg1;
- (void)setConfig:(id)arg1;
- (void)start;
- (void)stop;
- (void)unpause;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

