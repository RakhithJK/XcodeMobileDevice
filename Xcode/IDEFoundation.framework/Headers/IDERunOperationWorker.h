//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IDEExecutionRunnableTracker, IDELaunchSession, IDERunOperationWorkerGroup, NSString;

@interface IDERunOperationWorker : NSObject <DVTInvalidation>
{
    NSString *_extensionIdentifier;
    IDELaunchSession *_launchSession;
    IDERunOperationWorkerGroup *_workerGroup;
    BOOL _isLongTerm;
    IDEExecutionRunnableTracker *_runnableTracker;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) NSString *extensionIdentifier; // @synthesize extensionIdentifier=_extensionIdentifier;
- (void)finishedWithError:(id)arg1;
- (id)init;
- (id)initWithExtensionIdentifier:(id)arg1 launchSession:(id)arg2;
@property BOOL isLongTerm; // @synthesize isLongTerm=_isLongTerm;
@property(readonly) IDELaunchSession *launchSession; // @synthesize launchSession=_launchSession;
- (id)notFinishedReasonWithDepth:(unsigned long long)arg1;
- (void)primitiveInvalidate;
@property(retain, nonatomic) IDEExecutionRunnableTracker *runnableTracker; // @synthesize runnableTracker=_runnableTracker;
- (void)setWorkerGroup:(id)arg1;
- (void)start;
- (void)startNextWorkerFromCompletedWorker:(id)arg1 error:(id)arg2;
- (void)terminate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
