//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/DVTEditor-Protocol.h>
#import <IDEKit/DVTReplacementViewDelegate-Protocol.h>
#import <IDEKit/DVTStatefulObject-Protocol.h>
#import <IDEKit/DVTTabbedWindowTabContentControlling-Protocol.h>
#import <IDEKit/IDEEditorAreaContainer-Protocol.h>
#import <IDEKit/IDEProvisioningManagerDelegate-Protocol.h>
#import <IDEKit/IDEStructureEditingWorkspaceTabContext-Protocol.h>
#import <IDEKit/IDEWorkspaceDocumentProvider-Protocol.h>
#import <IDEKit/NSTextViewDelegate-Protocol.h>

@class DVTFilePath, DVTMutableOrderedSet, DVTObservingToken, DVTReplacementView, DVTSplitView, DVTSplitViewItem, DVTTextDocumentLocation, IDEARCConversionAssistantContext, IDEAppChooserWindowController, IDEBuildAlertMonitor, IDEEditorArea, IDEExecutionHoldAlertHelper, IDELaunchSession, IDENavigatorArea, IDEObjCModernizationAssistantContext, IDERunAlertMonitor, IDESwiftMigrationAssistantContext, IDEWorkspace, IDEWorkspaceDocument, IDEWorkspaceWindowController, NSAlert, NSDocument, NSMapTable, NSMutableArray, NSString;
@protocol DVTTabbedWindowCreation;

@interface IDEWorkspaceTabController : IDEViewController <NSTextViewDelegate, DVTTabbedWindowTabContentControlling, DVTStatefulObject, DVTReplacementViewDelegate, IDEEditorAreaContainer, IDEStructureEditingWorkspaceTabContext, IDEWorkspaceDocumentProvider, DVTEditor, IDEProvisioningManagerDelegate>
{
    DVTSplitView *_designAreaSplitView;
    DVTReplacementView *_navReplacementView;
    DVTSplitView *_utilityAreaSplitView;
    DVTSplitViewItem *_navigatorAreaSplitViewItem;
    DVTSplitViewItem *_utilitiesAreaSplitViewItem;
    DVTReplacementView *_inspectorReplacementView;
    DVTReplacementView *_libraryReplacementView;
    DVTMutableOrderedSet *_cursorRectInterceptors;
    NSMapTable *_additionControllersForLaunchSessionTable;
    NSMutableArray *_debuggingUIControllerLifeCycleObservers;
    NSString *_userDefinedTabLabel;
    NSString *_lastValidUserDefinedName;
    NSMapTable *_notificationTokenForLaunchSessionTable;
    NSMapTable *_observerTokenForLaunchSessionsDebuggingAdditionsTable;
    NSMutableArray *_uiControllerObserverEntries;
    DVTObservingToken *_mainCurrentLaunchSessionObserverToken;
    DVTObservingToken *_currentLaunchSessionStateObserverToken;
    DVTObservingToken *_launchSessionAlertErrorObservingToken;
    DVTObservingToken *_debugSessionObserverToken;
    DVTObservingToken *_debugSessionCoalescedStateObservingToken;
    DVTObservingToken *_currentStackFrameDisassemblyObservingToken;
    DVTObservingToken *_firstTimeSnapshotObserverToken;
    NSAlert *_stoppingExecutionAlert;
    id _pendingExecutionNotificationToken;
    CDUnknownBlockType _pendingEnqueuingCompletionBlock;
    IDEBuildAlertMonitor *_buildAlertMonitor;
    IDERunAlertMonitor *_runAlertMonitor;
    IDEARCConversionAssistantContext *_conversionAssistantContext;
    IDEObjCModernizationAssistantContext *_objcModernizationAssistantContext;
    IDESwiftMigrationAssistantContext *_swiftMigrationAssistantContext;
    BOOL _userWantsUtilitiesVisible;
    BOOL _userWantsNavigatorVisible;
    BOOL _isAnimatingUtilities;
    BOOL _stateRestoreCompleted;
    BOOL _tabLoadingCompleted;
    int _assistantEditorsLayout;
    IDEWorkspaceDocument *_workspaceDocument;
    NSString *_name;
    IDELaunchSession *_currentLaunchSession;
    DVTTextDocumentLocation *_issueInstructionPointerLocation;
    DVTTextDocumentLocation *_issueInstructionPointerLocationForDisassembly;
    DVTReplacementView *_editorReplacementView;
    DVTObservingToken *_documentLoadingObservationToken;
    DVTObservingToken *_firstIssueObservationToken;
    DVTObservingToken *_buildCompleteObservationToken;
    NSString *_savedTabLabel;
    DVTFilePath *_savedTabFilePath;
    IDEAppChooserWindowController *_appChooserWindowController;
    IDEExecutionHoldAlertHelper *_executionHoldAlertHelper;
}

+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
+ (BOOL)automaticallyNotifiesObserversOfSavedTabFilePath;
+ (BOOL)automaticallyNotifiesObserversOfSavedTabLabel;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (int)defaultAssistantEditorsLayout;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingEditorArea;
+ (id)keyPathsForValuesAffectingNavigatorArea;
+ (id)keyPathsForValuesAffectingShowNavigator;
+ (id)keyPathsForValuesAffectingShowUtilities;
+ (id)keyPathsForValuesAffectingTabLabel;
+ (id)keyPathsForValuesAffectingWindowController;
+ (id)keyPathsForValuesAffectingWorkspace;
+ (void)setDefaultAssistantEditorsLayout:(int)arg1;
+ (long long)version;
- (void).cxx_destruct;
- (void)_acceptStoppingExecutionAlert:(id)arg1;
- (void)_actuallyPerformTaskOnScheme:(id)arg1 forSchemeOperationParameters:(id)arg2 useLegacyCompletionBehavior:(BOOL)arg3 enqueuingErrorBlock:(CDUnknownBlockType)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)_addCursorRectInterceptor:(id)arg1;
- (void)_adjustDesignAreaSplitViewWithOldSize:(struct CGSize)arg1;
- (void)_adjustUtilityAreaSplitViewWithOldSize:(struct CGSize)arg1;
- (void)_alertNonExistentWorkingDirectoryBeforeProfileForContext:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)_alertNonExistentWorkingDirectoryBeforeRunForContext:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)_alertNonExistentWorkingDirectoryBeforeRunOrProfileForContext:(id)arg1 workingDirectory:(id)arg2 title:(id)arg3 defaultButton:(id)arg4 usingBlock:(CDUnknownBlockType)arg5 errorBlock:(CDUnknownBlockType)arg6;
- (void)_askShouldBuildBeforeRunOrProfileForContext:(id)arg1 title:(id)arg2 defaultButton:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)_buildForRunActiveRunContextFromScripting:(BOOL)arg1 withInvocationRecord:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_changeToAssistantLayoutForActionSelector:(SEL)arg1;
- (void)_changeToEditorMode:(int)arg1;
- (void)_changeToIssuesNavigatorForBuildIssues;
- (void)_changeToVersionEditorSubmode:(int)arg1;
- (void)_checkNeedToStopExistingExecutionForScheme:(id)arg1 runDestination:(id)arg2 task:(int)arg3 command:(id)arg4 trackersToStop:(id)arg5 needToStopCurrentBuild:(char *)arg6 needToStopCurrentTest:(char *)arg7 needToStopCurrentExecution:(char *)arg8;
- (id)_choiceWithKeyEquivalent:(id)arg1 modifierFlags:(unsigned long long)arg2 inUtilityArea:(id)arg3;
- (BOOL)_cleanBuildFolderWithExecutionContext:(id)arg1 commandName:(id)arg2 error:(id *)arg3;
- (void)_cleanForRunActiveRunContextFromScripting:(BOOL)arg1 withInvocationRecord:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_cleanupAfterStoppingExecutionAlert;
- (BOOL)_contentSizeCanBeZeroSize;
- (void)_createBreakpointOfClass:(Class)arg1 sender:(id)arg2;
- (id)_createDebuggingAdditionUIControllersForDebuggingAddition:(id)arg1;
- (void)_createDebuggingAdditionUIControllersForLaunchSession:(id)arg1;
- (id)_currentFirstResponderArea;
- (void)_debugSessionCoalescedStateChanged:(id)arg1 forDebugSession:(id)arg2;
- (void)_doCommandForEditAndSchemeCommand:(id)arg1;
- (void)_doCommandForEditAndSchemeCommand:(id)arg1 schemeTask:(int)arg2;
- (id)_errorForNoActiveSchemeForCommandName:(id)arg1;
- (id)_extensionRunnableForBundleIdentifier:(id)arg1 BuildableProduct:(id)arg2 Scheme:(id)arg3 extensionRunMode:(int)arg4;
- (id)_framesForDesignAreaWithNavigatorState:(int)arg1 editorAreaState:(int)arg2 utilityAreaState:(int)arg3 forSize:(struct CGSize)arg4;
- (id)_generateErrorForScheme:(id)arg1;
- (BOOL)_interceptAddCursorRect:(struct CGRect)arg1 cursor:(id)arg2 forView:(id)arg3 inWindow:(id)arg4;
- (BOOL)_interceptSetCursorForMouseLocation:(struct CGPoint)arg1 inWindow:(id)arg2;
- (void)_interceptWillInvalidateCursorRectsForView:(id)arg1;
- (void)_interceptWillInvalidateCursorRectsForViewsWithNoTrackingAreas;
- (id)_keyboardFocusAreas:(BOOL)arg1;
- (BOOL)_launchingOrProfiling:(int)arg1 withNonExistentWorkingDirectory:(id)arg2;
- (CDUnknownBlockType)_legacyEnqueuingErrorBlock;
- (void)_moveKeyboardFocusToNextAreaForward:(BOOL)arg1 editorOnly:(BOOL)arg2;
- (void)_navigateEditorToDisassemblyForStackFrame:(id)arg1 inOptionalEditor:(BOOL)arg2;
- (void)_navigateEditorToStackFramesSourceFile:(id)arg1 inOptionalEditor:(BOOL)arg2;
- (void)_navigateToPossiblyNonExistentURL:(id)arg1 withStackFrame:(id)arg2 withEventType:(unsigned long long)arg3 inOptionalEditor:(BOOL)arg4;
- (void)_navigateToURL:(id)arg1 withStackFrame:(id)arg2 withEventType:(unsigned long long)arg3 inOptionalEditor:(BOOL)arg4;
- (BOOL)_needToSwitchSchemeActionToLLDB:(id)arg1;
- (void)_newWindow:(id)arg1;
- (CDUnknownBlockType)_nextIndex;
- (void)_notifyAndRemoveObserversForCreatedUIController:(id)arg1 inLaunchSession:(id)arg2;
- (void)_objCModernizationFoundErrorsAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_performContextTask:(int)arg1 command:(id)arg2 commandName:(id)arg3 buildCommand:(int)arg4 filePath:(id)arg5 invocationRecord:(id)arg6 useLegacyCompletionBehavior:(BOOL)arg7 completionBlock:(CDUnknownBlockType)arg8;
- (void)_performDebuggableTaskOnScheme:(id)arg1 forSchemeOperationParameters:(id)arg2 invokedViaScripting:(BOOL)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_performExtraViewDidInstallWork;
- (void)_performTaskOnScheme:(id)arg1 forSchemeOperationParameters:(id)arg2 useLegacyCompletionBehavior:(BOOL)arg3 invokedViaScripting:(BOOL)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (CDUnknownBlockType)_prevIndex;
- (void)_primitiveSetAssistantEditorsLayout:(int)arg1;
- (void)_pushDefaultPrimaryEditorFrameSize;
- (void)_rejectStoppingExecutionAlert:(id)arg1;
- (void)_removeCursorRectInterceptor:(id)arg1;
- (void)_removePendingDebuggingAdditionUIControllerObserversForLaunchSession:(id)arg1;
- (void)_revertStateForNewWindowWithDictionary:(id)arg1 simpleEditorWindowLayout:(BOOL)arg2;
- (void)_runActiveRunContextFromScripting:(BOOL)arg1 withInvocationRecord:(id)arg2 additionalCommandLineArgs:(id)arg3 overridingEnvironmentVars:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)_runAnotherInstance:(id)arg1;
- (void)_runScheme:(id)arg1 runDestination:(id)arg2 invocationRecord:(id)arg3;
- (void)_runWithoutBuildingForScheme:(id)arg1 runDestination:(id)arg2 invocationRecord:(id)arg3;
- (id)_runtimeLLDBFilePath;
- (void)_selectDestination:(CDUnknownBlockType)arg1;
- (void)_selectRunContext:(CDUnknownBlockType)arg1;
- (BOOL)_shouldShowAppChooserForScheme:(id)arg1 command:(id)arg2;
- (void)_showAppChooserForCurrentSchemeIfNecessaryForCommand:(id)arg1 launch:(CDUnknownBlockType)arg2;
- (BOOL)_showDisassemblyWhenDebugging;
- (void)_showEditorForStackFrame:(id)arg1 inOptionalEdtor:(BOOL)arg2;
- (void)_showWarningForBuild:(BOOL)arg1 forTest:(BOOL)arg2 forOtherExecution:(BOOL)arg3 trackersToStop:(id)arg4 taskActionBlock:(CDUnknownBlockType)arg5;
- (void)_silentlySwitchToLLDBIfNecessary:(id)arg1;
- (void)_splitViewDidToggleClosed;
- (void)_swiftMigrationFoundErrorsAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_testActiveRunContextFromScripting:(BOOL)arg1 withInvocationRecord:(id)arg2 additionalCommandLineArgs:(id)arg3 overridingEnvironmentVars:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (BOOL)_validToolchainForSchemeAction:(id)arg1 schemeCommand:(id)arg2;
- (BOOL)_validateEditorLayoutUserInterfaceItem:(id)arg1 forActionSelector:(SEL)arg2;
- (void)_workspaceDocument:(id)arg1 shouldClose:(BOOL)arg2 contextInfo:(void *)arg3;
- (void)addAssistantEditor:(id)arg1;
- (void)analyzeActiveRunContext:(id)arg1;
- (void)analyzeFileAtPath:(id)arg1;
@property(retain) IDEAppChooserWindowController *appChooserWindowController; // @synthesize appChooserWindowController=_appChooserWindowController;
@property(nonatomic) int assistantEditorsLayout; // @synthesize assistantEditorsLayout=_assistantEditorsLayout;
- (void)attachByPIDOrName:(id)arg1;
- (void)attachToProcess:(id)arg1;
- (void)backgroundFetchEvent:(id)arg1;
- (void)buildActiveRunContext:(id)arg1;
- (void)buildAndArchiveActiveRunContext:(id)arg1;
- (void)buildAndRunToGenerateOptimizationProfileActiveRunContext:(id)arg1;
@property(retain) DVTObservingToken *buildCompleteObservationToken; // @synthesize buildCompleteObservationToken=_buildCompleteObservationToken;
- (void)buildForInstallActiveRunContext:(id)arg1;
- (void)buildForProfileActiveRunContext:(id)arg1;
- (void)buildForRunActiveRunContext:(id)arg1;
- (void)buildForTestActiveRunContext:(id)arg1;
- (void)cancelCurrentExecution:(id)arg1;
- (void)changeToAssistantLayout_BH:(id)arg1;
- (void)changeToAssistantLayout_BV:(id)arg1;
- (void)changeToAssistantLayout_LH:(id)arg1;
- (void)changeToAssistantLayout_LV:(id)arg1;
- (void)changeToAssistantLayout_RH:(id)arg1;
- (void)changeToAssistantLayout_RV:(id)arg1;
- (void)changeToAssistantLayout_TH:(id)arg1;
- (void)changeToAssistantLayout_TV:(id)arg1;
- (void)changeToBreakpointsNavigator:(id)arg1;
- (void)changeToDebuggerNavigator:(id)arg1;
- (void)changeToFindNavigator:(id)arg1;
- (void)changeToGeniusEditor:(id)arg1;
- (void)changeToIssuesNavigator:(id)arg1;
- (void)changeToIssuesNavigator:(id)arg1 showRuntime:(BOOL)arg2;
- (void)changeToLogsNavigator:(id)arg1;
- (void)changeToNavigatorWithIdentifier:(id)arg1 sender:(id)arg2;
- (void)changeToStandardEditor:(id)arg1;
- (void)changeToStructureNavigator:(id)arg1;
- (void)changeToSymbolsNavigator:(id)arg1;
- (void)changeToTestNavigator:(id)arg1;
- (void)changeToVersionEditor:(id)arg1;
- (void)changeToVersionEditorBlameView:(id)arg1;
- (void)changeToVersionEditorComparisonView:(id)arg1;
- (void)changeToVersionEditorLogView:(id)arg1;
- (void)cleanActiveRunContext:(id)arg1;
- (void)cleanBuildFolder:(id)arg1;
- (void)clearConsole:(id)arg1;
- (BOOL)commitEditingForAction:(int)arg1 errors:(id)arg2;
- (void)commitStateToDictionary:(id)arg1;
- (void)compileFileAtPath:(id)arg1 forSchemeCommand:(id)arg2;
- (void)createBot:(id)arg1;
- (void)createExceptionBreakpoint:(id)arg1;
- (void)createSwiftErrorBreakpoint:(id)arg1;
- (void)createSymbolicBreakpoint:(id)arg1;
- (void)createTestFailureBreakpoint:(id)arg1;
- (id)currentDebuggingAdditionUIControllers;
@property(retain, nonatomic) IDELaunchSession *currentLaunchSession; // @synthesize currentLaunchSession=_currentLaunchSession;
- (id)debugSessionController;
- (id)debuggingAdditionUIControllerMatchingClass:(id)arg1 forLaunchSession:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)debuggingAdditionUIControllerMatchingID:(id)arg1 forLaunchSession:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)debuggingAdditionUIControllersForLaunchSession:(id)arg1;
- (void)detach:(id)arg1;
- (void)discardEditing;
- (void)dismissExecutionHoldAlert;
@property(retain) NSDocument<DVTTabbedWindowCreation> *document;
@property(retain) DVTObservingToken *documentLoadingObservationToken; // @synthesize documentLoadingObservationToken=_documentLoadingObservationToken;
- (void)editActiveRunContext:(id)arg1;
- (void)editAndAnalyzeActiveRunContext:(id)arg1;
- (void)editAndBuildForProfilingActiveScheme:(id)arg1;
- (void)editAndBuildForRunningActiveRunContext:(id)arg1;
- (void)editAndBuildForTestingActiveRunContext:(id)arg1;
- (void)editAndProfileActiveScheme:(id)arg1;
- (void)editAndRunActiveRunContext:(id)arg1;
- (void)editAndTestActiveRunContext:(id)arg1;
- (void)editBuildAndArchiveActiveRunContext:(id)arg1;
- (void)editWorkspaceUserSettings:(id)arg1;
@property(readonly) IDEEditorArea *editorArea;
@property(retain) DVTReplacementView *editorReplacementView; // @synthesize editorReplacementView=_editorReplacementView;
@property(retain) IDEExecutionHoldAlertHelper *executionHoldAlertHelper; // @synthesize executionHoldAlertHelper=_executionHoldAlertHelper;
- (void)filterInLibrary:(id)arg1;
- (void)filterInNavigator:(id)arg1;
@property(retain) DVTObservingToken *firstIssueObservationToken; // @synthesize firstIssueObservationToken=_firstIssueObservationToken;
- (void)focusOnLibraryFilter;
- (void)generateAssemblyCodeForFilePath:(id)arg1 forSchemeCommand:(id)arg2;
- (void)generatePreprocessedFileForFilePath:(id)arg1 forSchemeCommand:(id)arg2;
- (void)hideNavigator:(id)arg1;
- (void)hideUtilitiesArea:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)inspectorArea;
- (void)installActiveRunContext:(id)arg1;
- (void)invalidateAllBuildAlertMonitors;
- (BOOL)isActiveWorkspaceTabController;
@property BOOL isAnimatingUtilities; // @synthesize isAnimatingUtilities=_isAnimatingUtilities;
- (BOOL)isNavigatorVisible;
- (BOOL)isUtilitiesAreaVisible;
@property(retain) DVTTextDocumentLocation *issueInstructionPointerLocation; // @synthesize issueInstructionPointerLocation=_issueInstructionPointerLocation;
@property(retain) DVTTextDocumentLocation *issueInstructionPointerLocationForDisassembly; // @synthesize issueInstructionPointerLocationForDisassembly=_issueInstructionPointerLocationForDisassembly;
- (id)libraryArea;
- (void)loadView;
- (void)manageRunContexts:(id)arg1;
- (struct CGSize)minimumSizeForDesignArea;
- (struct CGSize)minimumSizeForDesignAreaIfNavigatorVisible:(BOOL)arg1 editorVisisble:(BOOL)arg2 andUtilityAreaVisible:(BOOL)arg3;
- (struct CGSize)minimumSizeForView:(id)arg1;
- (void)moveKeyboardFocusToNextArea:(id)arg1;
- (void)moveKeyboardFocusToNextEditor:(id)arg1;
- (void)moveKeyboardFocusToPreviousArea:(id)arg1;
- (void)moveKeyboardFocusToPreviousEditor:(id)arg1;
@property(copy) NSString *name; // @synthesize name=_name;
@property(readonly) IDENavigatorArea *navigatorArea;
@property(retain) DVTReplacementView *navigatorReplacementView; // @synthesize navigatorReplacementView=_navReplacementView;
- (void)newRunContext:(id)arg1;
- (void)observeBuildOperationForRestoringState:(id)arg1;
- (void)pauseOrContinue:(id)arg1;
- (void)performCloseWorkspace:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)primitiveInvalidate;
- (void)profileActiveScheme:(id)arg1;
- (void)profileActiveSchemeWithoutBuilding:(id)arg1;
- (void)profileUsingActiveRunContextWithOverridingTestingSpecifiers:(id)arg1;
- (void)provisioningManager:(id)arg1 repairable:(id)arg2 shouldAuthorizeUserAction:(id)arg3 authorizationCallback:(CDUnknownBlockType)arg4;
- (void)reallyCleanBuildFolder;
- (void)reloadConsole:(id)arg1;
- (void)removeAssistantEditor:(id)arg1;
- (void)replacementView:(id)arg1 willInstallViewController:(id)arg2;
- (void)resetEditor:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)runActiveRunContext:(id)arg1;
- (void)runActiveRunContextWithoutBuilding:(id)arg1;
- (void)runWithoutBuildingForSchemeIdentifier:(id)arg1 runDestination:(id)arg2 invocationRecord:(id)arg3;
@property(retain, nonatomic) DVTFilePath *savedTabFilePath; // @synthesize savedTabFilePath=_savedTabFilePath;
@property(copy, nonatomic) NSString *savedTabLabel; // @synthesize savedTabLabel=_savedTabLabel;
- (void)selectNextDestination:(id)arg1;
- (void)selectNextRunContext:(id)arg1;
- (void)selectPreviousDestination:(id)arg1;
- (void)selectPreviousRunContext:(id)arg1;
- (void)setShowDisassemblyWhenDebugging:(id)arg1;
@property BOOL showNavigator;
@property BOOL showUtilities;
- (void)setSplitGroupAccessibility;
@property BOOL stateRestoreCompleted; // @synthesize stateRestoreCompleted=_stateRestoreCompleted;
@property(nonatomic) BOOL tabLoadingCompleted; // @synthesize tabLoadingCompleted=_tabLoadingCompleted;
@property(copy) NSString *userDefinedTabLabel; // @synthesize userDefinedTabLabel=_userDefinedTabLabel;
@property(nonatomic) BOOL userWantsNavigatorVisible; // @synthesize userWantsNavigatorVisible=_userWantsNavigatorVisible;
@property(nonatomic) BOOL userWantsUtilitiesVisible; // @synthesize userWantsUtilitiesVisible=_userWantsUtilitiesVisible;
@property(retain) IDEWorkspaceDocument *workspaceDocument; // @synthesize workspaceDocument=_workspaceDocument;
- (void)showARCConversionAssistant:(id)arg1;
- (void)showAlertModallyInWorkspaceForError:(id)arg1;
- (void)showAppChooserIfNecessaryForScheme:(id)arg1 runDestination:(id)arg2 command:(id)arg3 onCompletion:(CDUnknownBlockType)arg4;
- (void)showEditorForStackFrame:(id)arg1;
- (void)showExecutionHoldAlertWithError:(id)arg1;
- (void)showInspectorCategoryWithExtensionIdentifier:(id)arg1;
- (void)showInspectorWithChoice:(id)arg1;
- (void)showInspectorWithChoiceFromSender:(id)arg1;
- (void)showLibraryWithChoice:(id)arg1;
- (void)showLibraryWithChoiceFromSender:(id)arg1;
- (void)showModalAlertForScheme:(id)arg1;
- (void)showModernObjectiveCConversionAssistant:(id)arg1;
- (void)showNavigatorWithIdentifier:(id)arg1;
- (void)showOptionalEditorForStackFrame:(id)arg1;
- (void)showSharedLibrariesPopUp:(id)arg1;
- (void)showSwiftMigrationAssistant:(id)arg1;
- (void)showUtilitiesArea:(id)arg1;
- (id)splitView:(id)arg1 additionalEffectiveRectsOfDividerAtIndex:(long long)arg2;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (id)splitView:(id)arg1 needsRectanglesForViewsWithState:(id)arg2 forSize:(struct CGSize)arg3;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (void)stepInto:(id)arg1;
- (void)stepIntoInstruction:(id)arg1;
- (void)stepIntoThread:(id)arg1;
- (void)stepOut:(id)arg1;
- (void)stepOver:(id)arg1;
- (void)stepOverInstruction:(id)arg1;
- (void)stepOverThread:(id)arg1;
@property(readonly) IDEWorkspace *structureEditWorkspace;
@property(readonly) IDEWorkspaceTabController *structureEditWorkspaceTabController;
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;
- (void)switchNavigatorOnBuild;
@property(readonly) DVTFilePath *tabFilePath;
@property(readonly) NSString *tabLabel;
- (void)takeScreenshot:(id)arg1;
- (void)testActiveRunContext:(id)arg1;
- (void)testActiveRunContextWithoutBuilding:(id)arg1;
- (void)testUsingActiveRunContextWithOverridingTestingSpecifiers:(id)arg1;
- (void)toggleBreakpoints:(id)arg1;
- (void)toggleNavigatorsVisibility:(id)arg1;
- (void)toggleUtilitiesVisibility:(id)arg1;
- (void)toggleUtilitiesVisibilityAlternate:(id)arg1;
- (void)uiSnapshotRefresh:(id)arg1;
- (void)updateMinimumWindowSize:(BOOL)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)viewDidInstall;
- (void)viewMemory:(id)arg1;
- (void)viewWillUninstall;
@property(readonly) IDEWorkspaceWindowController *windowController;
- (id)workspace;
- (void)workspaceWindowIsClosing;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

