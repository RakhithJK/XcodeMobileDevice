//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEExecutionTrackerReporting-Protocol.h>

@class DVTFilePath, IDELaunchSession, NSArray, NSError, NSMutableArray, NSString;

@interface IDEExecutionTracker : NSObject <IDEExecutionTrackerReporting>
{
    NSMutableArray *_subtrackers;
    NSError *_error;
    BOOL _isFinished;
    BOOL _wantsHold;
    BOOL _isCanceling;
    int _serviceTier;
    int _cancellationReason;
    NSString *_statusDisplayName;
    DVTFilePath *_statusImageFilePath;
    IDELaunchSession *_launchSession;
    IDEExecutionTracker *_cancelingTracker;
    NSString *_debugName;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)_updateIsFinished;
- (void)_updateWantsHold;
- (void)addSubtracker:(id)arg1;
- (void)cancel;
- (void)cancelWithReason:(int)arg1;
@property(retain) IDEExecutionTracker *cancelingTracker; // @synthesize cancelingTracker=_cancelingTracker;
@property int cancellationReason; // @synthesize cancellationReason=_cancellationReason;
@property(copy) NSString *debugName; // @synthesize debugName=_debugName;
@property(readonly, copy) NSString *description;
@property(retain) NSError *error;
- (id)init;
@property(readonly) BOOL isCanceling; // @synthesize isCanceling=_isCanceling;
@property BOOL isFinished; // @synthesize isFinished=_isFinished;
@property(retain) IDELaunchSession *launchSession; // @synthesize launchSession=_launchSession;
- (id)notFinishedReasonWithDepth:(unsigned long long)arg1;
@property int serviceTier; // @synthesize serviceTier=_serviceTier;
@property(copy) NSString *statusDisplayName; // @synthesize statusDisplayName=_statusDisplayName;
- (void)setStatusDisplayName:(id)arg1 statusImageFilePath:(id)arg2;
@property(retain) DVTFilePath *statusImageFilePath; // @synthesize statusImageFilePath=_statusImageFilePath;
@property BOOL wantsHold; // @synthesize wantsHold=_wantsHold;
@property(readonly) BOOL statusChanged;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(copy) NSMutableArray *mutableSubtrackers; // @dynamic mutableSubtrackers;
@property(readonly, copy) NSArray *subtrackers; // @dynamic subtrackers;
@property(readonly) Class superclass;

@end

