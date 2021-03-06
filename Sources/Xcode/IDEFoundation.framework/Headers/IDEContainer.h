//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTModelObject.h>

#import <IDEFoundation/DVTDirectoryBasedCustomDataStoreDelegate-Protocol.h>
#import <IDEFoundation/DVTInvalidation-Protocol.h>
#import <IDEFoundation/IDEIntegrityLogDataSource-Protocol.h>
#import <IDEFoundation/IDEReadOnlyItem-Protocol.h>
#import <IDEFoundation/IDEUpgradeableItem-Protocol.h>

@class DVTExtension, DVTFilePath, DVTOperation, DVTStackBacktrace, DVTTimeSlicedMainThreadWorkQueue, IDEActivityLogSection, IDEGroup, IDEWorkspace, NSDictionary, NSMapTable, NSMutableDictionary, NSString, NSTimer, NSURL;
@protocol IDEContainerCore, IDEContainerDelegate;

@interface IDEContainer : DVTModelObject <DVTInvalidation, IDEIntegrityLogDataSource, IDEReadOnlyItem, DVTDirectoryBasedCustomDataStoreDelegate, IDEUpgradeableItem>
{
    id <IDEContainerCore> _containerCore;
    IDEWorkspace *_workspace;
    DVTFilePath *_filePath;
    IDEGroup *_rootGroup;
    DVTFilePath *_itemBaseFilePath;
    DVTExtension *_extension;
    DVTOperation *_willReadOperation;
    DVTOperation *_readOperation;
    DVTOperation *_didReadOperation;
    DVTTimeSlicedMainThreadWorkQueue *_mainThreadTimeSlicedQueue;
    DVTTimeSlicedMainThreadWorkQueue *_pendingFileReferenceResolvingQueue;
    int _activity;
    int _transitionActivity;
    NSMutableDictionary *_sessionIdentifiersToFilePaths;
    NSMutableDictionary *_containerLoadingTokens;
    NSDictionary *_containerDataFilePaths;
    int _autosaveBehavior;
    int _saveIssue;
    NSTimer *_pendingSaveTimer;
    NSString *_sessionIdentifier;
    NSMutableDictionary *_filePathToReadOnlyItemMap;
    NSMapTable *_readOnlyItemToStatusObserverMap;
    id <IDEContainerDelegate> _containerDelegate;
    NSMapTable *_pendingFilePathChangeDictionary;
    int _readOnlyStatus;
    BOOL _hasTransitionedToIdle;
    BOOL _containerEdited;
    BOOL _validForSchemeBuildableReferences;
    BOOL _transitioningToNewFilePath;
}

+ (void)_addContainerWithPendingChanges:(id)arg1;
+ (BOOL)_closeContainerIfNeeded:(id)arg1;
+ (id)_containerForSessionIdentifier:(id)arg1;
+ (id)_containerOpenInAnotherWorkspaceErrorForPath:(id)arg1;
+ (id)_containersPendingRelease;
+ (id)_containersWithPendingFilePathChanges;
+ (unsigned long long)_countForContainer:(id)arg1;
+ (void)_decreaseCountForContainer:(id)arg1;
+ (double)_defaltAutosaveDelay;
+ (double)_defaltSlowAutosaveDelay;
+ (id)_errorSavingContainer:(id)arg1 code:(int)arg2;
+ (void)_increaseCountForContainer:(id)arg1;
+ (void)_invalidateContainer:(id)arg1;
+ (id)_noContainerClassForFileTypeError:(id)arg1;
+ (BOOL)_observeContainerDataFilePathsForChanges;
+ (id)_openContainers;
+ (id)_refcountTableForContainer:(id)arg1;
+ (void)_releaseContainer:(id)arg1;
+ (void)_removeOpenContainer:(id)arg1;
+ (void)_retainContainer:(id)arg1;
+ (id)_retainedContainerAtFilePath:(id)arg1 fileDataType:(id)arg2 workspace:(id)arg3 options:(id)arg4 error:(id *)arg5;
+ (BOOL)_shouldTrackReadOnlyStatus;
+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (BOOL)automaticallyNotifiesObserversOfActivity;
+ (BOOL)automaticallyNotifiesObserversOfContainerEdited;
+ (BOOL)automaticallyNotifiesObserversOfFilePath;
+ (id)containerDataFilePathsForFilePath:(id)arg1;
+ (id)containerExtensionForFileDataType:(id)arg1;
+ (id)containerFileDataType;
+ (id)containerLoadingModelObjectGraph;
+ (id)containerTypeDisplayName;
+ (id)containersForFilePath:(id)arg1;
+ (id)errorPresenter;
+ (void)initialize;
+ (BOOL)isContainerOpenForFilePath:(id)arg1;
+ (BOOL)isOnlyUsedForUserInteraction;
+ (id)reloadingDelegate;
+ (void)resumeFilePathChangeNotifications;
+ (id)retainedContainerAtFilePath:(id)arg1 fileDataType:(id)arg2 workspace:(id)arg3 error:(id *)arg4;
+ (id)retainedContainerForFilePath:(id)arg1 workspace:(id)arg2;
+ (id)retainedWrappedWorkspaceForContainerAtFilePath:(id)arg1 fileDataType:(id)arg2 error:(id *)arg3;
+ (void)setErrorPresenter:(id)arg1;
+ (void)setReloadingDelegate:(id)arg1;
+ (void)setUnlockingDelegate:(id)arg1;
+ (BOOL)supportsFilePersistence;
+ (BOOL)supportsMultipleInstancesPerFilePath;
+ (void)suspendFilePathChangeNotifications;
+ (id)unlockingDelegate;
- (void).cxx_destruct;
- (void)_addPendingFileReference:(id)arg1;
- (void)_addReadOnlyItemPath:(id)arg1;
- (void)_addSubcontainer:(id)arg1;
- (BOOL)_canClosePreflightOrError:(id *)arg1;
- (BOOL)_canClosePreflightWithCheckedContainers:(id)arg1 error:(id *)arg2;
- (void)_changeContainerFilePath:(id)arg1 inContext:(id)arg2;
- (void)_clearContainerDataFilePathsToModDateMap;
- (void)_clearPendingFileReferencesAndContainerLoadingTokens;
- (id)_containerDataFilePaths;
- (void)_containerDidLoad;
- (void)_containerEditedDidChange;
- (id)_containerInstanceDescription;
- (void)_createContainerDataFilePathsToModDateMap;
- (id)_didReadOperationWithFilePath:(id)arg1;
- (void)_didTransitionToActivity:(int)arg1;
- (void)_didUpdateActivity;
- (void)_enqueueWorkItem:(CDUnknownBlockType)arg1;
- (void)_filePathDidChangeWithPendingChangeDictionary;
- (void)_handleContainerResolutionFailureForFileReference:(id)arg1;
- (void)_initRootGroup;
- (void)_invalidateContainerToDiscardInMemoryRepresentation:(BOOL)arg1;
- (id)_itemBaseFilePathForFilePath:(id)arg1;
- (id)_lastKnownModDateForContainerDataFile:(id)arg1;
- (void)_locateFileReferencesRecursively;
- (void)_locateFileReferencesRecursivelyInGroup:(id)arg1;
- (void)_makeAbsoluteFileReferencesInGroup:(id)arg1 relativeToFolderFilePath:(id)arg2 withPathString:(id)arg3;
- (void)_makeRelativeFileReferencesInGroup:(id)arg1 relativeToNewBasePath:(id)arg2 oldBaseFilePath:(id)arg3;
- (id)_modificationDateForFilePath:(id)arg1;
- (BOOL)_readAsyncIfPossibleFromFilePath:(id)arg1 error:(id *)arg2;
- (id)_readOnlyItemsToUnlock;
- (id)_readOperationWithFilePath:(id)arg1;
- (void)_registerForChangesToContainerDataFilePath:(id)arg1;
- (void)_removeAllReadOnlyItemPaths;
- (void)_removeContainerLoadingTokenForContainer:(id)arg1;
- (void)_removePendingFileReference:(id)arg1;
- (void)_removeReadOnlyItemPath:(id)arg1;
- (void)_removeSubcontainer:(id)arg1;
- (void)_resolveFileReference:(id)arg1;
- (void)_respondToFileChangeOnDiskWithFilePath:(id)arg1;
- (BOOL)_saveContainerForAction:(int)arg1 error:(id *)arg2;
- (void)_saveContainerIfNeeded;
- (void)_saveContainerPeriodically;
- (void)_scheduleAutosaveTimer;
- (id)_sessionIdentifier;
- (void)_setContainerEdited;
- (BOOL)_setContainerFilePath:(id)arg1 strict:(BOOL)arg2 error:(id *)arg3;
- (void)_setContainerLoadingTokenForContainer:(id)arg1;
- (void)_setExtension:(id)arg1;
- (void)_setFilePath:(id)arg1;
- (void)_setFilePath:(id)arg1 strict:(BOOL)arg2 createContainerDataFilePathsToModDateMap:(BOOL)arg3;
- (void)_setTransitioningToNewFilePath:(BOOL)arg1;
- (BOOL)_shouldRespondToFileChangeOnDisk;
- (void)_unlockReadOnlyItems:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_unregisterForChangesToContainerDataFilePath:(id)arg1;
- (void)_updateContainerDataFilePathsToModDateMap;
- (void)_updateSharedReadOnlyItemStatus;
- (void)_willInvalidateContainerToDiscardInMemoryRepresentation;
- (id)_willReadOperationWithFilePath:(id)arg1;
- (void)_willUpdateActivity;
@property int activity;
- (void)analyzeModelIntegrity;
- (BOOL)canSaveContainer;
- (void)collectMessageTracerStatisticsIntoDictionary:(id)arg1;
@property(readonly) id <IDEContainerCore> containerCore; // @synthesize containerCore=_containerCore;
@property(retain) id <IDEContainerDelegate> containerDelegate; // @synthesize containerDelegate=_containerDelegate;
@property BOOL containerEdited;
- (id)createRootGroup;
- (void)customDataStore:(id)arg1 makeFilePathsWritable:(id)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)customDataStore:(id)arg1 moveItemAtFilePath:(id)arg2 toFilePath:(id)arg3 completionQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)customDataStore:(id)arg1 removeItemAtFilePath:(id)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)debugPrintInnerStructure;
- (void)debugPrintStructure;
@property(readonly, copy) NSString *description;
- (BOOL)didReadFromFilePath:(id)arg1 error:(id *)arg2;
@property(readonly) NSString *displayName;
- (void)enumerateUpgradeTasksWithBlock:(CDUnknownBlockType)arg1;
@property(readonly) DVTExtension *extension; // @synthesize extension=_extension;
@property(readonly) DVTFilePath *filePath; // @synthesize filePath=_filePath;
- (void)holdOnDiskFilesForICloudDriveIfNecessary;
- (BOOL)ignoreLocalChanges;
- (id)init;
- (id)initWithFilePath:(id)arg1 extension:(id)arg2 workspace:(id)arg3 options:(id)arg4 error:(id *)arg5;
@property(readonly) IDEActivityLogSection *integrityLog;
- (void)invalidate;
@property(readonly, getter=isEditable) BOOL editable;
@property(readonly, getter=isFolderLike) BOOL folderLike;
@property(readonly, getter=isMajorGroup) BOOL majorGroup;
@property(getter=isTransitioningToNewFilePath) BOOL transitioningToNewFilePath; // @synthesize transitioningToNewFilePath=_transitioningToNewFilePath;
@property(readonly, nonatomic, getter=isValidForSchemeBuildableReferences) BOOL validForSchemeBuildableReferences; // @synthesize validForSchemeBuildableReferences=_validForSchemeBuildableReferences;
@property(copy, nonatomic) DVTFilePath *itemBaseFilePath; // @synthesize itemBaseFilePath=_itemBaseFilePath;
- (BOOL)makeWritableWithError:(id *)arg1;
- (void)primitiveInvalidate;
- (BOOL)readFromFilePath:(id)arg1 error:(id *)arg2;
@property(readonly) NSURL *readOnlyItemURL;
@property int readOnlyStatus; // @synthesize readOnlyStatus=_readOnlyStatus;
- (void)releaseContainer;
- (void)retainContainer;
@property(readonly) IDEGroup *rootGroup; // @synthesize rootGroup=_rootGroup;
- (BOOL)setContainerFilePath:(id)arg1 error:(id *)arg2;
@property(readonly) BOOL supportsOnDemandResources;
- (BOOL)willReadFromFilePath:(id)arg1 error:(id *)arg2;
@property(readonly) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property(readonly, copy) NSString *workspaceParentRelativePath;
- (BOOL)writeToFilePath:(id)arg1 forceWrite:(BOOL)arg2 error:(id *)arg3;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

