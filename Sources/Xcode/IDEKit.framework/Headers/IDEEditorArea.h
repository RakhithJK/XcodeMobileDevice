//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/IDEDebuggerBarEditorInfoProvider-Protocol.h>

@class DVTBorderedView, DVTLayoutView_ML, DVTObservingToken, DVTReplacementView, DVTSplitView, DVTSplitViewItem, DVTStateToken, IDEDebugArea, IDEDebugBar, IDEEditorContext, IDEEditorDocument, IDEEditorModeViewController, IDENavigableItemArchivableRepresentation, IDEWorkspaceTabControllerLayoutTree, NSMutableDictionary, NSString, NSView;
@protocol DVTCancellable;

@interface IDEEditorArea : IDEViewController <IDEDebuggerBarEditorInfoProvider>
{
    NSView *_editorModeHostView;
    IDEEditorModeViewController *_editorModeViewController;
    int _editorMode;
    int _versionEditorSubmode;
    DVTObservingToken *_workspaceActivityObserver;
    IDEEditorContext *_lastActiveEditorContext;
    IDEDebugBar *_activeDebuggerBar;
    IDEDebugArea *_activeDebuggerArea;
    NSMutableDictionary *_defaultPersistentRepresentations;
    NSString *_currentDefaultDebugAreaExtensionID;
    DVTLayoutView_ML *_editorAreaAutoLayoutView;
    DVTLayoutView_ML *_debuggerAreaAutoLayoutView;
    DVTBorderedView *_debuggerBarBorderedView;
    DVTBorderedView *_debuggerAreaBorderedView;
    DVTReplacementView *_debuggerBarReplacementView;
    DVTReplacementView *_debuggerAreaReplacementView;
    DVTSplitView *_debuggerSplitView;
    DVTSplitViewItem *_debugAreaSplitViewItem;
    double _heightToReturnToDebuggerArea;
    id _launchSessionObserver;
    IDEWorkspaceTabControllerLayoutTree *_layoutTreeForNavigationHUD;
    IDEWorkspaceTabControllerLayoutTree *_oldLayoutTreeFromStateSaving;
    BOOL _didInstall;
    BOOL _needsToRefreshContexts;
    BOOL _didRestoreState;
    BOOL _userWantsEditorVisible;
    BOOL _showDebuggerArea;
    id <DVTCancellable> _setEditorModeAfterDelayToken;
    id <DVTCancellable> _invokeCompletionBlockAfterDelayToken;
    IDEEditorContext *_navigationTargetedEditorContext;
}

+ (BOOL)automaticallyNotifiesObserversOfLastActiveEditorContext;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (int)defaultEditorMode;
+ (int)defaultVersionEditorSubmode;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingNavigationTargetedEditorDocument;
+ (id)keyPathsForValuesAffectingPrimaryEditorContext;
+ (id)keyPathsForValuesAffectingPrimaryEditorDocument;
+ (id)keyPathsForValuesAffectingSelectedNavigableItemArchivedRepresentation;
+ (id)keyPathsForValuesAffectingShowEditor;
+ (long long)version;
- (void).cxx_destruct;
- (void)_addAssistantEditor;
- (void)_addDebuggerBarToDebuggerArea;
- (void)_addDebuggerBarToEditorArea;
- (id)_addNewAssistantEditor;
- (void)_cacheDefaultPersistentRepresentation:(id)arg1 forDocumentExtensionIdentifier:(id)arg2 documentURL:(id)arg3;
- (BOOL)_canAddAssistantEditor;
- (BOOL)_canAddNewAssistantEditor;
- (BOOL)_canChangeAssistantEditorsLayout;
- (BOOL)_canRemoveAssistantEditor;
- (BOOL)_canResetEditor;
- (void)_clearDefaultPersistentRepresentationForDocumentExtensionIdentifier:(id)arg1 documentURL:(id)arg2;
- (void)_clearLayoutTreeForNavigationHUD;
- (id)_defaultPersistentRepresentationForDocumentExtensionIdentifier:(id)arg1 documentURL:(id)arg2;
- (id)_editorContexts;
- (id)_generateLayoutTreeForNavigationHUD;
- (void)_hideDebuggerBarAndResetSplitViewFrames;
- (void)_installDebugAreaWithExtensionID:(id)arg1 revertDebugAreaState:(BOOL)arg2;
- (void)_installDefaultDebugAreaAndRevertDebugAreaState:(BOOL)arg1;
- (void)_moveDebuggerBarToDebuggerArea;
- (void)_moveDebuggerBarToEditorArea;
- (void)_openEditorHistoryItem:(id)arg1 editorContext:(id)arg2 takeFocus:(BOOL)arg3;
- (void)_openEditorOpenSpecifier:(id)arg1 editorContext:(id)arg2 takeFocus:(BOOL)arg3;
- (void)_refreshEditorContextsAndPreserveCurrentEditorHistoryStack:(BOOL)arg1;
- (void)_removeAssistantEditor;
- (void)_resetEditor;
- (void)_resetSplitViewFrames;
- (void)_resizeSubviewsForHeightDecrease:(double)arg1;
- (void)_resizeSubviewsForHeightIncrease:(double)arg1;
- (void)_setAssistantEditorsLayout:(int)arg1;
- (void)_setEditorMode:(int)arg1;
- (void)_setEditorModeViewControllerWithPrimaryEditorContext:(id)arg1;
- (void)_setShowDebuggerArea:(BOOL)arg1 animate:(BOOL)arg2;
- (void)_updateDebugAreaAfterDocumentOpened;
- (void)_updateDebugBarAfterDocumentOpened;
- (void)_updateDebuggerBarVisibility;
- (void)_updateStateSavingRegistrations;
- (void)activateConsole:(id)arg1;
@property(retain) IDEDebugArea *activeDebuggerArea; // @synthesize activeDebuggerArea=_activeDebuggerArea;
@property(retain) IDEDebugBar *activeDebuggerBar; // @synthesize activeDebuggerBar=_activeDebuggerBar;
- (BOOL)commitEditingForAction:(int)arg1 errors:(id)arg2;
- (void)commitStateToDictionary:(id)arg1;
- (void)compareRevisionChange:(id)arg1;
@property(readonly) DVTReplacementView *debuggerAreaReplacementView; // @synthesize debuggerAreaReplacementView=_debuggerAreaReplacementView;
- (void)discardEditing;
- (void)editorContextDidBecomeLastActiveEditor:(id)arg1;
- (void)editorContextWasRemoved:(id)arg1;
@property(nonatomic) int editorMode; // @synthesize editorMode=_editorMode;
@property(retain) IDEEditorModeViewController *editorModeViewController; // @synthesize editorModeViewController=_editorModeViewController;
- (void)installDebugAreaWithExtensionID:(id)arg1;
- (void)installDefaultDebugArea;
- (void)installNewDefaultDebugAreaWithExtensionID:(id)arg1;
@property(retain, nonatomic) IDEEditorContext *lastActiveEditorContext; // @synthesize lastActiveEditorContext=_lastActiveEditorContext;
@property(readonly) IDEWorkspaceTabControllerLayoutTree *layoutTreeForNavigationHUD;
- (void)loadView;
@property(retain) IDEEditorContext *navigationTargetedEditorContext; // @synthesize navigationTargetedEditorContext=_navigationTargetedEditorContext;
@property(readonly) IDEEditorDocument *navigationTargetedEditorDocument;
@property(readonly) IDEEditorContext *primaryEditorContext;
@property(readonly) IDEEditorDocument *primaryEditorDocument;
- (void)primitiveInvalidate;
- (void)revertState;
- (void)revertStateWithDictionary:(id)arg1;
@property(readonly) IDENavigableItemArchivableRepresentation *selectedNavigableItemArchivedRepresentation;
- (void)setLayoutTreeForNavigationHUD:(id)arg1;
@property BOOL showDebuggerArea;
@property BOOL showEditor;
- (void)setStateSavingDefaultPersistentRepresentations:(id)arg1;
@property(retain) DVTStateToken *stateToken; // @dynamic stateToken;
@property(nonatomic) BOOL userWantsEditorVisible; // @synthesize userWantsEditorVisible=_userWantsEditorVisible;
@property(nonatomic) int versionEditorSubmode; // @synthesize versionEditorSubmode=_versionEditorSubmode;
- (void)showBlame;
- (void)showDebuggerArea:(id)arg1;
@property(readonly) BOOL showDebuggerBar;
- (id)splitView:(id)arg1 additionalEffectiveRectsOfDividerAtIndex:(long long)arg2;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (id)stateSavingDefaultPersistentRepresentations;
- (void)toggleDebuggerVisibility:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)viewDidInstall;
- (void)viewWillUninstall;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

