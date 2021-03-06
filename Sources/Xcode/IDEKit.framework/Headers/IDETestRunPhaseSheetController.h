//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/IDEFilePickerViewDelegate-Protocol.h>
#import <IDEKit/IDETestsInTestableObserver-Protocol.h>

@class DVTBorderedView, DVTChoice, DVTGradientImageButton, DVTNotificationToken, DVTObservingToken, DVTOutlineViewWithCustomGridDrawing, DVTSearchField, DVTTabChooserView, IDEArgumentsCapsuleSheetController, IDECapsuleListView, IDEDebuggerSpecifier, IDEEnvironmentVariablesCapsuleSheetController, IDEScheme, IDESimulateLocationMenuController, IDETestSchemeAction, IDEWorkspace, NSArray, NSButton, NSButtonCell, NSLayoutConstraint, NSMatrix, NSPopUpButton, NSString, NSTabView, NSTableColumn, NSTextField, NSView;

@interface IDETestRunPhaseSheetController : IDEViewController <IDEFilePickerViewDelegate, IDETestsInTestableObserver>
{
    NSButton *_debugExecutableCheckbox;
    NSButton *_codeCoverageCheckbox;
    NSMatrix *_debugProcessAsMatrix;
    NSButtonCell *_debugProcessAsMeButtonCell;
    DVTOutlineViewWithCustomGridDrawing *_outlineView;
    DVTGradientImageButton *_addButton;
    DVTGradientImageButton *_deleteButton;
    DVTBorderedView *_topBorderedView;
    DVTSearchField *_searchField;
    DVTTabChooserView *_tabChooser;
    DVTBorderedView *_useRunActionOptionsBorderedView;
    IDECapsuleListView *_capsuleListView;
    DVTBorderedView *_optionsBorderedView;
    NSPopUpButton *_macroExpansionRunnableBuildablesPopUp;
    NSTextField *_macroExpansionDescription;
    NSTabView *_tabView;
    NSTableColumn *_deviceAppDataPackagesColumn;
    NSTableColumn *_locationColumn;
    NSView *_buttonBar;
    NSButton *_enableASanButton;
    NSButton *_enableTSanButton;
    NSPopUpButton *_mallocStackTypePopup;
    DVTChoice *_infoChoice;
    DVTChoice *_conditionsChoice;
    DVTChoice *_diagnosticsChoice;
    IDEArgumentsCapsuleSheetController *_argumentsViewController;
    IDEEnvironmentVariablesCapsuleSheetController *_environmentVariablesViewController;
    IDEWorkspace *_workspace;
    NSArray *_debuggerSpecifiers;
    NSString *_filterString;
    DVTObservingToken *_testableReferenceObserver;
    DVTObservingToken *_launchActionArgsEnvLinkObservingToken;
    DVTObservingToken *_macroExpansionReferenceObservingToken;
    DVTObservingToken *_runContextObservingToken;
    DVTNotificationToken *_buildablesToken;
    IDESimulateLocationMenuController *_simulateLocationMenuController;
    BOOL _supportsDebugAsDifferentUser;
    IDEScheme *_runContext;
    IDETestSchemeAction *_runPhase;
    NSLayoutConstraint *_tabSwitcherBarHeightConstraint;
    NSLayoutConstraint *_infoTabSearchFieldHeightConstraint;
}

+ (id)_keyPathsForValuesAffectingSanitizers:(id)arg1;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingAllowEnablingAddressSanitizer;
+ (id)keyPathsForValuesAffectingAllowEnablingMallocStackType;
+ (id)keyPathsForValuesAffectingAllowEnablingThreadSanitizer;
+ (id)keyPathsForValuesAffectingDebuggerHasBeenSelected;
- (void).cxx_destruct;
- (BOOL)_allowEnableSanitizersByOtherMemoryOptions;
- (void)_explainAutoDisablingOfSanitizer:(id)arg1;
- (BOOL)_getItemsToDelete:(id *)arg1;
- (id)_iconForBuildable:(id)arg1;
- (void)_macroExpansionRunnableBuildableSelected:(id)arg1;
- (void)_runDestinationChanged;
- (void)_selectDeviceAppDataPackage:(id)arg1;
- (void)_selectMenuItemForDeviceApplicationPackageForCell:(id)arg1 forItem:(id)arg2;
- (void)_selectMenuItemForLocationForCell:(id)arg1 forItem:(id)arg2;
- (void)_selectedSchemeChanged:(id)arg1;
- (void)_setLauncherBasedOnSelectedDebugger;
- (void)_setupDebugOptions;
- (void)_setupDeviceAppDataUI;
- (void)_setupLocationUI;
- (void)_updateDebugCheckboxes;
- (void)_updateDebugOptionsEnablement;
- (void)_updateDebuggerFromOldDebugger:(id)arg1;
- (void)_updateDeleteButton;
- (void)_updateMacroExpansionDescriptionForSelectedItem;
- (void)_updateMacroExpansionRunnablePopUp;
- (void)_updateMacroExpansionRunnablePopUpSelection;
- (void)addBlueprintsAction:(id)arg1;
- (void)allTestablesChanged;
- (BOOL)allowEnablingAddressSanitizer;
- (BOOL)allowEnablingMallocStackType;
- (BOOL)allowEnablingThreadSanitizer;
- (BOOL)canExpandTestableReference:(id)arg1;
- (id)capsuleListView:(id)arg1 viewControllerForRow:(long long)arg2;
- (void)chooseDebugProcessAs:(id)arg1;
- (void)clearHighlightsInCapsuleView;
- (id)currentToggleItemsAndEnable:(char *)arg1;
- (BOOL)debuggerHasBeenSelected;
@property(retain, nonatomic) NSArray *debuggerSpecifiers; // @synthesize debuggerSpecifiers=_debuggerSpecifiers;
- (id)debuggerSpecifiersForCurrentPlatform;
- (void)deleteBlueprintsAction:(id)arg1;
- (BOOL)doesFilterStringIncludeName:(id)arg1;
- (BOOL)doesFilterStringIncludeTest:(id)arg1;
- (BOOL)doesFilterStringIncludeTestable:(id)arg1;
- (id)dvtExtraBindings;
@property(copy, nonatomic) NSString *filterString; // @synthesize filterString=_filterString;
- (id)filteredTestableReferences;
- (id)filteredTests:(id)arg1;
@property __weak NSLayoutConstraint *infoTabSearchFieldHeightConstraint; // @synthesize infoTabSearchFieldHeightConstraint=_infoTabSearchFieldHeightConstraint;
- (BOOL)isTestActive:(id)arg1;
- (BOOL)isTestEditable:(id)arg1;
- (void)loadView;
- (long long)numberOfObjectsInCapsuleListView:(id)arg1;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldTrackCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)primitiveInvalidate;
@property(retain) IDEScheme *runContext; // @synthesize runContext=_runContext;
@property(retain) IDETestSchemeAction *runPhase; // @synthesize runPhase=_runPhase;
- (void)selectDebugExecutable:(id)arg1;
@property(retain) IDEDebuggerSpecifier *selectedDebuggerSpecifier;
- (void)setItem:(id)arg1 enabled:(BOOL)arg2 recursively:(BOOL)arg3;
@property BOOL supportsDebugAsDifferentUser; // @synthesize supportsDebugAsDifferentUser=_supportsDebugAsDifferentUser;
@property(retain) DVTTabChooserView *tabChooser; // @synthesize tabChooser=_tabChooser;
@property __weak NSLayoutConstraint *tabSwitcherBarHeightConstraint; // @synthesize tabSwitcherBarHeightConstraint=_tabSwitcherBarHeightConstraint;
@property(retain) IDEWorkspace *workspace;
- (id)testableReferenceForTest:(id)arg1;
- (void)testablesChanged:(id)arg1;
- (void)testsChanged:(id)arg1;
- (void)toggleTests:(id)arg1;
- (void)updateBoundContent;
- (void)updateBoundIDERunContextBinding;
- (void)updateBoundIDEWorkspaceBinding;
- (BOOL)validateMenuItem:(id)arg1;
- (void)viewDidInstall;
- (void)viewWillUninstall;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

