//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEBatchFindQuery.h>

@class DVTDispatchLock, DVTOperation, IDEBatchFindTextualFindCriteria, NSMutableArray;

@interface IDEBatchFindTextQuery : IDEBatchFindQuery
{
    DVTDispatchLock *_statusLock;
    DVTDispatchLock *_resultLock;
    NSMutableArray *_queuedOperations;
    NSMutableArray *_queuedResults;
    unsigned long long _totalFilesSearched;
    unsigned long long _totalFilesCompleted;
    unsigned long long _filesRequiringMainThread;
    DVTOperation *_findFilesOperation;
}

- (void).cxx_destruct;
- (void)_buildAndQueueFindableOnMainThreadForFileRef:(id)arg1;
- (void)_checkForEndStateOnMainThread;
- (void)_findOperationOnFindableComplete:(id)arg1 failure:(BOOL)arg2;
- (void)_startFileFinderOperation;
- (id)initWithSearchCriteria:(id)arg1 forWorkspace:(id)arg2 inController:(id)arg3;
- (void)primitiveInvalidate;
@property(readonly) DVTDispatchLock *resultLock; // @synthesize resultLock=_resultLock;
- (void)setState:(int)arg1;
@property unsigned long long totalFilesSearched; // @synthesize totalFilesSearched=_totalFilesSearched;
- (void)start;

// Remaining properties
@property(readonly) IDEBatchFindTextualFindCriteria *criteria; // @dynamic criteria;

@end

