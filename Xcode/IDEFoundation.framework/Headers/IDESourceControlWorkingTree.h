//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDESourceControlTree.h>

@class DVTFilePath, IDESourceControlBranch, IDESourceControlRepository, IDESourceControlWorkingCopyConfiguration, NSArray, NSDate, NSMutableArray, NSObject, NSOperationQueue, NSString;
@protocol DVTSourceControlCancellable, OS_dispatch_queue;

@interface IDESourceControlWorkingTree : IDESourceControlTree
{
    IDESourceControlWorkingCopyConfiguration *_wcc;
    IDESourceControlBranch *_currentBranch;
    long long _fileReferenceStatusProcessingQueueLockCount;
    NSOperationQueue *_fileReferenceStatusProcessingQueue;
    long long _fetchFileStatusQueueLockCount;
    NSOperationQueue *_fetchFileStatusQueue;
    NSObject<OS_dispatch_queue> *_fileStatusScheduleQueue;
    unsigned long long _filesAndStatusOperationCount;
    id <DVTSourceControlCancellable> _filesAndStatusOperation;
    NSMutableArray *_itemsWithStatus;
    NSOperationQueue *_status_processing_queue;
    DVTFilePath *_filePath;
    NSString *_origin;
    BOOL _representsGitSVNBridge;
    BOOL _initialLocalStatusUpdateIsComplete;
    BOOL _initialServerStatusUpdateIsComplete;
    BOOL _needsUpgrade;
    BOOL _checkedForUpgrade;
    NSDate *_lastStatusUpdateDate;
}

- (void).cxx_destruct;
- (id)_initWithLocation:(id)arg1 sourceControlManager:(id)arg2;
- (void)_preprocessBranchProcessing:(id)arg1 error:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_processBranches:(id)arg1 error:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_setOrigin:(id)arg1;
- (void)_updateWorkingTreeOrigin;
- (void)addItemWithStatus:(id)arg1;
- (void)addNewItemsWithStatusWithResults:(id)arg1;
- (void)addUpdateFileReferenceStatueseBlock:(CDUnknownBlockType)arg1;
- (void)automaticallyConfigureSVNLocationsWithToken:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)blockFetchingFilesAndStatus;
- (void)blockUpdatingFileReferenceStatuses;
@property BOOL checkedForUpgrade; // @synthesize checkedForUpgrade=_checkedForUpgrade;
- (void)clearLocalAndServerStatus;
- (void)clearServerStatus;
- (void)clearStatusForItem:(id)arg1;
- (BOOL)containsItemAtFilePath:(id)arg1;
@property(readonly) IDESourceControlBranch *currentBranch; // @synthesize currentBranch=_currentBranch;
- (id)currentBranchWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)currentBranchWithToken:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(readonly) DVTFilePath *dataDirectory;
@property(readonly) NSDate *dataModificationDate;
- (id)description;
- (id)dictionaryRepresentation;
@property(copy) DVTFilePath *filePath; // @synthesize filePath=_filePath;
- (id)fileReferenceStatusProcessingQueue;
- (unsigned long long)hash;
- (id)ideModelObjectTypeIdentifier;
- (id)initWithDictionary:(id)arg1 repository:(id)arg2 sourceControlExtension:(id)arg3 sourceControlManager:(id)arg4;
- (id)initWithLocation:(id)arg1 sourceControlManager:(id)arg2;
@property(readonly) BOOL initialLocalStatusUpdateIsComplete; // @synthesize initialLocalStatusUpdateIsComplete=_initialLocalStatusUpdateIsComplete;
@property(readonly) BOOL initialServerStatusUpdateIsComplete; // @synthesize initialServerStatusUpdateIsComplete=_initialServerStatusUpdateIsComplete;
- (void)invalidateCurrentBranch;
- (void)invalidateLocalStatus;
- (void)invalidateServerStatus;
@property(readonly) BOOL isConfiguredForBranching;
- (BOOL)isEqual:(id)arg1;
- (id)itemForFilePath:(id)arg1;
@property(readonly) NSArray *itemsWithStatus; // @synthesize itemsWithStatus=_itemsWithStatus;
@property(retain, nonatomic) NSDate *lastStatusUpdateDate; // @synthesize lastStatusUpdateDate=_lastStatusUpdateDate;
- (void)mergeStatusOperationResults:(id)arg1 pathsWithRemoteStatus:(id)arg2 forLocalStatusOnly:(BOOL)arg3;
- (id)mutableItemsWithStatus;
@property BOOL needsUpgrade; // @synthesize needsUpgrade=_needsUpgrade;
@property(readonly) NSString *origin; // @synthesize origin=_origin;
- (void)primitiveInvalidate;
@property(readonly) IDESourceControlRepository *repository;
@property BOOL representsGitSVNBridge; // @synthesize representsGitSVNBridge=_representsGitSVNBridge;
- (void)setLocation:(id)arg1;
@property(retain) IDESourceControlWorkingCopyConfiguration *wcc; // @synthesize wcc=_wcc;
- (id)subclass_createRootNode;
- (id)switchToBranch:(id)arg1 inWorkspace:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)unblockFetchingFilesAndStatus;
- (void)updateFileReferenceStatusesAndWaitForFinish:(BOOL)arg1;
- (void)updateStatus:(BOOL)arg1 workspace:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end
