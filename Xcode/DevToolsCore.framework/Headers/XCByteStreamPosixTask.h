//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/XCPosixTask.h>

#import <DevToolsCore/PBXTSByteStreamConsuming-Protocol.h>
#import <DevToolsCore/PBXTSCharacterStreamConsuming-Protocol.h>
#import <DevToolsCore/PBXTSLineStreamConsuming-Protocol.h>

@class NSLock, NSString, PBXTSByteStream, PBXTSStream;
@protocol PBXTSStreamConsuming;

@interface XCByteStreamPosixTask : XCPosixTask <PBXTSByteStreamConsuming, PBXTSCharacterStreamConsuming, PBXTSLineStreamConsuming>
{
    PBXTSByteStream *_byteStream;
    PBXTSStream *_streamTail;
    id <PBXTSStreamConsuming> _finalConsumer;
    long long _consumerType;
    NSLock *_streamLock;
}

- (void)_attachConsumerOnBackground;
- (void)_detachConsumerFromBackground;
- (void)_sendBytesInBackground:(id)arg1;
- (void)dealloc;
- (id)initWithLaunchInfo:(id)arg1;
- (void)outputComplete;
- (void)receivedStderrObject:(id)arg1;
- (void)receivedStderrObjectInBackground:(id)arg1;
- (void)receivedStdoutObject:(id)arg1;
- (void)receivedStdoutObjectInBackground:(id)arg1;
- (void)stream:(id)arg1 processBytes:(id)arg2;
- (void)stream:(id)arg1 processCharacters:(id)arg2;
- (void)stream:(id)arg1 processLine:(id)arg2;
- (void)streamDidEnd:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

