//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFilePath, IDESchemeActionCodeCoverage, NSArray, NSMapTable, NSMutableArray, NSString;
@protocol IDESchemeActionsInvocationRecordUpdateDelegate;

@interface IDESchemeActionsInvocationRecord : NSObject
{
    NSMutableArray *_actions;
    NSMutableArray *_warningSummaries;
    NSMutableArray *_errorSummaries;
    NSMutableArray *_analyzerWarningSummaries;
    NSMutableArray *_testFailureSummaries;
    NSMutableArray *_testableSummaries;
    NSMapTable *_strongActionRecordsToStatusObservers;
    IDESchemeActionCodeCoverage *_coverageReport;
    BOOL _running;
    BOOL _archiveFetchable;
    BOOL _productFetchable;
    BOOL _shouldClearExistingFileOnSave;
    BOOL _remoteTestSummaryNeedsFetch;
    BOOL _remoteCodeCoverageNeedsFetch;
    DVTFilePath *_archivePath;
    NSString *_archiveName;
    unsigned long long _archiveSize;
    DVTFilePath *_productPath;
    NSString *_productName;
    unsigned long long _productSize;
    unsigned long long _warningCount;
    unsigned long long _errorCount;
    unsigned long long _analyzerWarningCount;
    unsigned long long _testsCount;
    unsigned long long _testsFailedCount;
    DVTFilePath *_creatingWorkspaceFilePath;
    id _remoteTestSummaryIdentifier;
    id _remoteCodeCoverageIdentifier;
    NSString *_archiveGUID;
    NSString *_productGUID;
    DVTFilePath *_filePath;
    id <IDESchemeActionsInvocationRecordUpdateDelegate> _updateDelegate;
}

+ (BOOL)automaticallyNotifiesObserversOfActions;
+ (void)invocationRecordWithLocalActionResultFilePath:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (id)keyPathsForValuesAffectingSimpleOperationStatus;
+ (id)keyPathsForValuesAffectingStatus;
+ (BOOL)updateSummariesFromDictionaryRepresentations:(id)arg1 withSummaryOwner:(id)arg2 summaryPropertyName:(id)arg3 summaryiVarArrayRef:(id *)arg4 summariesAreTestFailures:(BOOL)arg5;
- (void).cxx_destruct;
- (id)_init;
- (void)_updateSummaries;
- (void)_updateTestableSummaries;
@property(retain, nonatomic) NSMutableArray *actions; // @synthesize actions=_actions;
@property(readonly, nonatomic) IDESchemeActionCodeCoverage *aggregateCoverageReport;
@property(nonatomic) unsigned long long analyzerWarningCount; // @synthesize analyzerWarningCount=_analyzerWarningCount;
@property(retain, nonatomic) NSMutableArray *analyzerWarningSummaries; // @synthesize analyzerWarningSummaries=_analyzerWarningSummaries;
@property(retain, nonatomic) NSString *archiveGUID; // @synthesize archiveGUID=_archiveGUID;
@property(retain, nonatomic) NSString *archiveName; // @synthesize archiveName=_archiveName;
@property(retain, nonatomic) DVTFilePath *archivePath; // @synthesize archivePath=_archivePath;
@property(nonatomic) unsigned long long archiveSize; // @synthesize archiveSize=_archiveSize;
- (void)close;
@property(retain, nonatomic) DVTFilePath *creatingWorkspaceFilePath; // @synthesize creatingWorkspaceFilePath=_creatingWorkspaceFilePath;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
@property(nonatomic) unsigned long long errorCount; // @synthesize errorCount=_errorCount;
@property(retain, nonatomic) NSMutableArray *errorSummaries; // @synthesize errorSummaries=_errorSummaries;
- (void)fetchCodeCoverageAndUpdateRecordWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)fetchLogsAndUpdateRecordWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)fetchTestSummariesAndUpdateRecordWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) DVTFilePath *filePath; // @synthesize filePath=_filePath;
- (id)filePathForSchemeActionRecordDirectoryWithSchemeCommand:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)init;
- (id)initLocalRecordWithWorkspace:(id)arg1;
- (id)initWithFilePath:(id)arg1 updateDelegate:(id)arg2 error:(id *)arg3;
@property(nonatomic, getter=isArchiveFetchable) BOOL archiveFetchable; // @synthesize archiveFetchable=_archiveFetchable;
@property(nonatomic, getter=isProductFetchable) BOOL productFetchable; // @synthesize productFetchable=_productFetchable;
@property(nonatomic, getter=isRunning) BOOL running; // @synthesize running=_running;
- (id)localTestSummaryFilePath;
- (id)makeActionRecordWithSchemeCommand:(id)arg1 schemeTask:(int)arg2 runDestination:(id)arg3;
@property(retain, nonatomic) NSString *productGUID; // @synthesize productGUID=_productGUID;
@property(retain, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(retain, nonatomic) DVTFilePath *productPath; // @synthesize productPath=_productPath;
@property(nonatomic) unsigned long long productSize; // @synthesize productSize=_productSize;
@property(copy, nonatomic) id remoteCodeCoverageIdentifier; // @synthesize remoteCodeCoverageIdentifier=_remoteCodeCoverageIdentifier;
@property(nonatomic) BOOL remoteCodeCoverageNeedsFetch; // @synthesize remoteCodeCoverageNeedsFetch=_remoteCodeCoverageNeedsFetch;
@property(copy, nonatomic) id remoteTestSummaryIdentifier; // @synthesize remoteTestSummaryIdentifier=_remoteTestSummaryIdentifier;
@property(nonatomic) BOOL remoteTestSummaryNeedsFetch; // @synthesize remoteTestSummaryNeedsFetch=_remoteTestSummaryNeedsFetch;
- (BOOL)saveTestSummariesWithError:(id *)arg1;
- (void)saveWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) BOOL shouldClearExistingFileOnSave; // @synthesize shouldClearExistingFileOnSave=_shouldClearExistingFileOnSave;
@property(retain, nonatomic) NSMutableArray *testFailureSummaries; // @synthesize testFailureSummaries=_testFailureSummaries;
@property(retain, nonatomic) NSArray *testableSummaries; // @synthesize testableSummaries=_testableSummaries;
@property(nonatomic) unsigned long long testsCount; // @synthesize testsCount=_testsCount;
@property(nonatomic) unsigned long long testsFailedCount; // @synthesize testsFailedCount=_testsFailedCount;
- (void)setUpObserversForSchemeActionRecord:(id)arg1;
@property(nonatomic) unsigned long long warningCount; // @synthesize warningCount=_warningCount;
@property(retain, nonatomic) NSMutableArray *warningSummaries; // @synthesize warningSummaries=_warningSummaries;
@property(readonly, nonatomic) int simpleOperationStatus;
@property(readonly, nonatomic) int status;
- (void)tearDownObserversForSchemeActionRecord:(id)arg1;
- (id)testSummaryFormatVersionString;
- (void)updateAllSchemeActionRecordDirectoryFilePaths;
@property(readonly, nonatomic) id <IDESchemeActionsInvocationRecordUpdateDelegate> updateDelegate; // @synthesize updateDelegate=_updateDelegate;
- (BOOL)updateLocalTestSummaryWithRemoteTestSummary:(id)arg1 error:(id *)arg2;
- (void)updateRecordWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)updateWithArchiveData:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (BOOL)updateWithDictionaryRepresentation:(id)arg1;
- (void)updateWithProductData:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;

@end
