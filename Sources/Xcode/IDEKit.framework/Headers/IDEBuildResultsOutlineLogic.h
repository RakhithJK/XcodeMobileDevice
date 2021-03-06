//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IDEActivityLogSection, IDEConfigurableDataSource, NSMapTable, NSMutableDictionary, NSString, XCBuildResultAdapter, XCBuildResultsOutlineView;
@protocol DVTCancellable, IDEBuildResultsOutlineDelegate;

@interface IDEBuildResultsOutlineLogic : NSObject <DVTInvalidation>
{
    id <IDEBuildResultsOutlineDelegate> _buildResultsOutlineDelegate;
    IDEActivityLogSection *_activityLog;
    id <DVTCancellable> _activityLogObserver;
    XCBuildResultsOutlineView *_outline;
    XCBuildResultsOutlineView *_outlineIssues;
    XCBuildResultsOutlineView *_activeOutline;
    IDEConfigurableDataSource *_dataSource;
    IDEConfigurableDataSource *_dataSourceIssues;
    BOOL _showSteps;
    BOOL _showWarnings;
    BOOL _showErrors;
    BOOL _showTestFailures;
    BOOL _showAnalyzerResults;
    BOOL _showAllResults;
    BOOL _startNotificationWasReceived;
    BOOL _stopNotificationWasReceived;
    BOOL _expandingWhileBuilding;
    BOOL _performScrollToEnd;
    XCBuildResultAdapter *_genericLogItemAdapter;
    XCBuildResultAdapter *_sectionAdapter;
    XCBuildResultAdapter *_targetHeadingAdapter;
    XCBuildResultAdapter *_invocationAdapter;
    XCBuildResultAdapter *_errorAdapter;
    XCBuildResultAdapter *_testFailureAdapter;
    XCBuildResultAdapter *_warningAdapter;
    XCBuildResultAdapter *_analyzerWarningAdapter;
    XCBuildResultAdapter *_analyzerResultAdapter;
    XCBuildResultAdapter *_analyzerStepAdapter;
    XCBuildResultAdapter *_analyzerControlFlowStepAdapter;
    XCBuildResultAdapter *_analyzerEventStepAdapter;
    XCBuildResultAdapter *_unitTestAdapter;
    XCBuildResultAdapter *_headerInclusionAdapter;
    XCBuildResultAdapter *_noticeAdapter;
    XCBuildResultAdapter *_summaryItemAdapter;
    XCBuildResultAdapter *_issueCategoryAdapter;
    XCBuildResultAdapter *_issueOccurrenceAdapter;
    XCBuildResultAdapter *_issueOccurrenceSubStepAdapter;
    NSMapTable *_textLayoutsGenerationA;
    NSMapTable *_textLayoutsGenerationB;
    NSMutableDictionary *_issueCategoryNodes;
    NSString *_searchFieldValue;
}

+ (id)_commandInvocationStringForLogSection:(id)arg1;
+ (id)analyzerControlFlowStepIconImage;
+ (id)analyzerEventStepIconImage;
+ (id)analyzerResultIconImage;
+ (id)analyzerStepIconImage;
+ (id)analyzerWarningIconImage;
+ (id)attributedTranscriptForLogSection:(id)arg1 commandDetailLengthPtr:(unsigned long long *)arg2;
+ (id)attributesForTranscript;
+ (id)boldAttributesForTranscript;
+ (id)buildFileAnalyzerResultsIconImage;
+ (id)buildFileErrorsIconImage;
+ (id)buildFileInProgressIconImage;
+ (id)buildFileSuccessIconImage;
+ (id)buildFileWarningsIconImage;
+ (id)buildFileWithIssuesIconImage;
+ (id)condensedDownImage;
+ (id)condensedOverImage;
+ (id)condensedUpImage;
+ (id)errorIconImage;
+ (id)expandedDownImage;
+ (id)expandedOverImage;
+ (id)expandedUpImage;
+ (id)fixItErrorIconImage;
+ (id)fixItWarningIconImage;
+ (id)formattedLogStringForLogMessage:(id)arg1;
+ (id)formattedLogStringForSection:(id)arg1;
+ (id)formattedLogTranscript:(id)arg1;
+ (id)imageNamed:(id)arg1;
+ (void)initialize;
+ (BOOL)isAnalyzerControlFlowStepMessage:(id)arg1;
+ (BOOL)isAnalyzerEventStepMessage:(id)arg1;
+ (BOOL)isAnalyzerResultMessage:(id)arg1;
+ (BOOL)isAnalyzerStepMessage:(id)arg1;
+ (BOOL)isAnalyzerWarningMessage:(id)arg1;
+ (BOOL)isCommandInvocationSection:(id)arg1;
+ (BOOL)isContextInfoMessage:(id)arg1;
+ (BOOL)isErrorMessage:(id)arg1;
+ (BOOL)isHeaderInclusionMessage:(id)arg1;
+ (BOOL)isMainGroupSection:(id)arg1;
+ (BOOL)isNoticeMessage:(id)arg1;
+ (BOOL)isTestFailureMessage:(id)arg1;
+ (BOOL)isUnitTestSection:(id)arg1;
+ (BOOL)isWarningMessage:(id)arg1;
+ (id)lessImage;
+ (id)lessUnderlinedImage;
+ (id)lessUnderlinedWhiteImage;
+ (id)lessWhiteImage;
+ (id)markerForOtherCategory;
+ (id)moreImage;
+ (id)moreUnderlinedImage;
+ (id)moreUnderlinedWhiteImage;
+ (id)moreWhiteImage;
+ (id)newImageWithTitle:(id)arg1 selected:(BOOL)arg2 underlined:(BOOL)arg3;
+ (id)noticeIconImage;
+ (id)sharedTextLayout;
+ (id)standardMonoSpaceFont;
+ (id)testFailureIconImage;
+ (id)testSuccessIconImage;
+ (id)tooltipForLogMessage:(id)arg1;
+ (id)warningIconImage;
- (void).cxx_destruct;
- (id)_allLogItemRootsWithFiltering:(BOOL)arg1;
- (void)_configure;
- (id)_configureOutline:(id)arg1;
- (void)_delayedHighLightMessage:(id)arg1;
- (void)_expandSubcommandNodesForNode:(id)arg1;
- (void)_rebuildOutline;
- (void)_recursiveReplaceAdapter:(id)arg1 with:(id)arg2 inDataNode:(id)arg3;
- (void)_recursiveSetTextExpanded:(BOOL)arg1 inDataNode:(id)arg2;
- (void)_recursivelyExpandUnitTestNodesWithImportantMessagesForNode:(id)arg1;
- (void)_restoreConfigurationForCurrentOutlineView;
- (void)_saveConfigurationForCurrentOutlineView;
- (void)_scrollToEnd:(id)arg1;
- (void)_updateCounts;
- (void)_updateIssuesForMessage:(id)arg1 nodesToExpand:(id)arg2;
- (void)_updateIssuesForSection:(id)arg1 nodesToExpand:(id)arg2;
- (void)_updateRoots;
- (void)_updateRootsByIssues;
- (id)activityLog;
- (BOOL)alwaysShowTargetInfo;
- (id)analyzerControlFlowStepAdapter;
- (id)analyzerEventStepAdapter;
- (id)analyzerResultAdapter;
- (id)analyzerStepAdapter;
- (id)analyzerWarningAdapter;
- (id)attributedLogStringForItems:(id)arg1 inOutlineView:(id)arg2;
- (void)buildOperationDidUpdateBuildLogItems:(id)arg1;
- (void)buildOperationDidUpdateBuildLogItems_addingChildrenInsteadOfReloading:(id)arg1;
- (void)buildOperationDidUpdateBuildLogItems_addingChildrenInsteadOfReloading_Radar6707952:(id)arg1;
@property(readonly, nonatomic) id <IDEBuildResultsOutlineDelegate> buildResultsOutlineDelegate; // @synthesize buildResultsOutlineDelegate=_buildResultsOutlineDelegate;
- (id)categoryForItem:(id)arg1;
- (void)collapseAllTranscripts:(id)arg1;
- (void)completeActivityLog;
- (void)copyShownTranscripts:(id)arg1;
- (void)copyTranscriptToNewTextFile:(id)arg1;
- (id)dataSource:(id)arg1 contextMenuForSelectedNodes:(id)arg2;
- (BOOL)dataSource:(id)arg1 filterDisplayedRootNode:(id)arg2;
- (void)dealloc;
- (void)displayActivityLog:(id)arg1;
- (id)errorAdapter;
- (void)expandAllTranscripts:(id)arg1;
- (void)expandSelectedTranscripts:(BOOL)arg1;
- (void)expandTranscripts:(BOOL)arg1 nodes:(id)arg2;
- (BOOL)expandingWhileBuilding;
- (BOOL)filterLogItem:(id)arg1;
- (BOOL)filterLogMessage:(id)arg1;
- (BOOL)filterLogMessageSansSubitems:(id)arg1;
- (BOOL)filterLogSection:(id)arg1;
- (id)genericLogItemAdapter;
- (id)headerInclusionAdapter;
- (id)indexPathsForNodes:(id)arg1;
- (id)initWithDelegate:(id)arg1 outlineView:(id)arg2 outlineIssuesView:(id)arg3;
- (id)invocationAdapter;
- (id)issueCategoryAdapter;
- (id)issueOccurrenceAdapter;
- (id)issueOccurrenceSubStepAdapter;
- (BOOL)iterateCountingOverSection:(id)arg1 errorCountPtr:(unsigned long long *)arg2 testFailureCountPtr:(unsigned long long *)arg3 warningCountPtr:(unsigned long long *)arg4 analyzerCountPtr:(unsigned long long *)arg5 stopOnError:(BOOL)arg6 stopOnTestFailure:(BOOL)arg7 stopOnWarning:(BOOL)arg8 stopOnAnalyzer:(BOOL)arg9;
- (void)jumpToSelection:(id)arg1;
- (id)localizedStringFor:(id)arg1 explanation:(id)arg2;
- (BOOL)logMessageHasFilteredSubItems:(id)arg1;
- (BOOL)logSectionHasFilteredSubItems:(id)arg1;
- (id)mentuItemTitleForCopyShownTranscripts;
- (id)nodeForIssueItem:(id)arg1;
- (id)nodeForLogItem:(id)arg1;
- (void)noteActiveViewDidChangeTo:(id)arg1;
- (id)noticeAdapter;
- (void)outlineIssuesSelectionChanged;
- (void)outlineSelectionChanged;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (void)primitiveInvalidate;
- (void)scrollToEndOfOutline;
- (void)scrollToEndOfOutlineView:(id)arg1;
@property(copy, nonatomic) NSString *searchFieldValue; // @synthesize searchFieldValue=_searchFieldValue;
- (id)sectionAdapter;
- (void)selectMessage:(id)arg1 withinDataNode:(id)arg2;
- (void)selectMessageOrSection:(id)arg1;
- (void)selectMessageOrSection:(id)arg1 usingTranscript:(BOOL)arg2;
- (void)selectSection:(id)arg1 withTranscriptTextRange:(struct _NSRange)arg2;
- (BOOL)selectionContainsTranscripts;
- (void)setExpandingWhileBuilding:(BOOL)arg1;
- (void)setShowAllResults:(BOOL)arg1;
- (void)setShowSteps:(BOOL)arg1 showWarnings:(BOOL)arg2 showErrors:(BOOL)arg3 showTestFailures:(BOOL)arg4 showAnalyzerResults:(BOOL)arg5;
- (BOOL)shouldDisplaySummary;
- (BOOL)shouldScrollToEndOfOutline;
- (BOOL)shouldScrollToEndOfOutlineView:(id)arg1;
@property(readonly, nonatomic) BOOL showAllResults; // @synthesize showAllResults=_showAllResults;
@property(readonly, nonatomic) BOOL showAnalyzerResults; // @synthesize showAnalyzerResults=_showAnalyzerResults;
@property(readonly, nonatomic) BOOL showErrors; // @synthesize showErrors=_showErrors;
- (void)showFindIndicatorInSection:(id)arg1 withTranscriptTextRange:(struct _NSRange)arg2;
@property(readonly, nonatomic) BOOL showSteps; // @synthesize showSteps=_showSteps;
@property(readonly, nonatomic) BOOL showTestFailures; // @synthesize showTestFailures=_showTestFailures;
@property(readonly, nonatomic) BOOL showWarnings; // @synthesize showWarnings=_showWarnings;
- (BOOL)startingWithTextView:(id)arg1 findText:(id)arg2 ignoreCase:(BOOL)arg3 matchStyle:(long long)arg4 backwards:(BOOL)arg5 wrap:(BOOL)arg6;
- (id)summaryItemAdapter;
- (id)targetHeadingAdapter;
- (void)testComputeCounts;
- (id)testFailureAdapter;
- (id)textLayoutForDataNode:(id)arg1;
- (id)transcriptAsAttributedString;
- (id)transcriptAttributedStringForDataNode:(id)arg1;
- (id)unitTestAdapter;
- (void)updateByIssueView:(id)arg1;
- (void)updateByStepView:(id)arg1;
- (void)updateSearchFieldValue:(id)arg1;
- (id)warningAdapter;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

