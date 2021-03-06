//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXProjectModule.h>

#import <DevToolsInterface/PBXImageGestureObserver-Protocol.h>
#import <DevToolsInterface/PBXSelectionTarget-Protocol.h>
#import <DevToolsInterface/XCSelectionSource-Protocol.h>

@class NSArray, NSBox, NSButton, NSImage, NSMutableArray, NSObject, NSPopUpButtonCell, NSString, PBXBookmark, PBXFileEditor, PBXHeaderBox, PBXImageGestureView, PBXLineBrowser, PBXNavigatorGroup, PBXTitleBannerView, XCBorderView, XCBuildAnalyzerResultsNavigator, XCClassNavigator, XCDebuggerControlView, XCIncrementalFinder, _PBXFileNavigatorProgressView;
@protocol PBXFileNavigatorHistoryDelegateProtocol;

@interface PBXFileNavigator : PBXProjectModule <PBXImageGestureObserver, PBXSelectionTarget, XCSelectionSource>
{
    NSBox *_navigationBar;
    NSButton *_gutterCap;
    NSButton *_prevButton;
    NSButton *_nextButton;
    XCBorderView *_editorViewBox;
    NSButton *_endCap;
    NSButton *_counterpartSwitchButton;
    NSButton *_classNavigatorButton;
    NSButton *_includedHeadersButton;
    NSButton *_bookmarksButton;
    NSButton *_breakpointsButton;
    NSButton *_cornerView;
    PBXLineBrowser *_lineBrowser;
    PBXImageGestureView *_scrollbarToggleSplitButton;
    NSMutableArray *_historyBookmarks;
    long long _historyCapacity;
    PBXBookmark *_bookmark;
    PBXFileEditor *_fileEditor;
    NSMutableArray *_previousBookmarksStack;
    NSMutableArray *_nextBookmarksStack;
    struct {
        unsigned int settingBookmark:1;
        unsigned int barHidden:1;
        unsigned int invalidated:1;
        unsigned int hasCounterpart:2;
        unsigned int hasCounterpartSymbolLabel:1;
        unsigned int hasExplicitProjectDocument:1;
        unsigned int selectedFilePopUpIndexIsInvalid:1;
        unsigned int reverseSymbolSortPref:1;
        unsigned int showAllOpenFiles:1;
        unsigned int hasBookmarks:1;
        unsigned int hasBreakpoints:1;
        unsigned int previousNavigationMenuIsInvalid:1;
        unsigned int nextNavigationMenuIsInvalid:1;
        unsigned int restoreSelectionForPendingBookmark:1;
        unsigned int windowHasUpdated:1;
        unsigned int showsNavigationButtons:1;
        unsigned int showsFilesPopUp:1;
        unsigned int showsTopLevelSymbolsPopUp:1;
        unsigned int showsBookmarksButton:1;
        unsigned int showsBreakpointsButton:1;
        unsigned int showsCounterpartButton:1;
        unsigned int showsClassNavigatorButton:1;
        unsigned int showsIncludedHeadersButton:1;
        unsigned int showsCornerView:1;
        unsigned int _reserved:7;
    } _navFlags;
    PBXNavigatorGroup *_navigatorGroup;
    NSMutableArray *_temporaryFileDocList;
    long long _selectedFilePopUpIndex;
    long long _selectedTopLevelSymbolsPopUpIndex;
    NSArray *_importedFiles;
    NSArray *_dependentFiles;
    long long _importsPopUpSelectedIndex;
    long long _classNavigatorPopUpSelectedIndex;
    Class _classNavigatorClass;
    XCClassNavigator *_classNavigator;
    NSString *_currentSymbolForClassNavigator;
    NSPopUpButtonCell *_symbolPopUpCell;
    PBXBookmark *_pendingBookmark;
    PBXTitleBannerView *_debugInfoTitleBanner;
    PBXHeaderBox *_headerSplitControl;
    BOOL _isHeaderSplitControlVisible;
    PBXHeaderBox *_navControlSplitBar;
    NSImage *_cachedSymbolImage;
    long long _cachedSymbolImageRow;
    _PBXFileNavigatorProgressView *_progress;
    XCDebuggerControlView *_debuggerControlBar;
    BOOL _isDebuggerControlBarVisible;
    XCIncrementalFinder *_incrementalFinder;
    BOOL _isIncrementalFinderBarVisible;
    XCBuildAnalyzerResultsNavigator *_buildAnalyzerResultsNavigator;
    BOOL _buildAnalyzerResultsNavigatorBarVisible;
    NSObject<PBXFileNavigatorHistoryDelegateProtocol> *_historyDelegate;
}

+ (id)_counterpartExtensionsForFile:(id)arg1;
+ (id)_findProperlyCasedFile:(id)arg1 inDirectory:(id)arg2;
+ (void)_indexWasRemoved:(id)arg1;
+ (void)_indexingDidReloadPersistentIndex:(id)arg1;
+ (void)_indexingDidUpdateFiles:(id)arg1;
+ (void)_keyBindingsChanged:(id)arg1;
+ (void)_methodsListChanged:(id)arg1;
+ (void)_reloadUIForNavs:(id)arg1 inProject:(id)arg2;
+ (void)_showHelpFile:(id)arg1 inFileNavigator:(id)arg2 temp:(BOOL)arg3;
+ (id)allNavigators;
+ (id)allNavigatorsEditingFileDocument:(id)arg1;
+ (id)allNavigatorsWithFileDocument:(id)arg1;
+ (BOOL)alwaysLoadCounterpartsInSameNavigator;
+ (id)appropriateFileNavigatorWithBookmark:(id)arg1;
+ (id)appropriateFileNavigatorWithBookmark:(id)arg1 projectDocument:(id)arg2 knownHelp:(BOOL)arg3;
+ (id)appropriateFileNavigatorWithFileDocument:(id)arg1;
+ (id)appropriateFileNavigatorWithFileDocument:(id)arg1 projectDocument:(id)arg2 knownHelp:(BOOL)arg3;
+ (id)fileNavigator;
+ (id)fileNavigatorWithBookmark:(id)arg1;
+ (id)fileNavigatorWithFileDocument:(id)arg1;
+ (void)initialize;
+ (BOOL)navBarIsHidden;
+ (void)setAlwaysLoadCounterpartsInSameNavigator:(BOOL)arg1;
+ (void)setNavBarIsHidden:(BOOL)arg1;
+ (void)setShowColumnPositionInLineBrowser:(BOOL)arg1;
+ (void)setSortMethodsPopup:(BOOL)arg1;
+ (BOOL)showColumnPositionInLineBrowser;
+ (void)showHelpFile:(id)arg1;
+ (BOOL)showUndoPastSaveWarning;
+ (BOOL)sortMethodsPopup;
+ (id)toolbarLineBrowserIdentifier;
+ (BOOL)useFontFacesInMethodsPopup;
+ (BOOL)useIconsInMethodsPopup;
+ (BOOL)useOldGoBackBehavior;
- (id)_acceptableDragTypes;
- (void)_addBookmarkSheetDidEndWithReturnCode:(long long)arg1 string:(id)arg2 contextInfo:(void *)arg3;
- (void)_addBookmarksFromArray:(id)arg1 toConfigurationDictionary:(id)arg2 forKey:(id)arg3;
- (void)_addHistoryBookmark:(id)arg1;
- (id)_bestBookmarkForSimpleBookmark:(id)arg1;
- (id)_bookmarkForCounterpartOfCurrentSymbol;
- (void)_cleanUpDragIndication;
- (void)_clearBookmarksLater:(id)arg1;
- (void)_confirmUndoSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (id)_containerSymbolForCursorLocation;
- (id)_containerSymbolForCursorLocationPreferringClassNameMatchingCurrentFilename:(BOOL)arg1;
- (id)_containerSymbolForSymbol:(id)arg1;
- (id)_containerSymbolPrefixedNameForSymbol:(id)arg1;
- (void)_documentDidChangeAttributes:(id)arg1;
- (void)_documentDidChangeDirtyState:(id)arg1;
- (void)_documentDidClose:(id)arg1;
- (void)_documentDidOpen:(id)arg1;
- (void)_documentDidSave:(id)arg1;
- (BOOL)_documentIsManipulatable;
- (void)_documentWillClose:(id)arg1;
- (void)_fileDocument:(id)arg1 shouldClose:(BOOL)arg2 contextInfo:(void *)arg3;
- (long long)_filesPopUpColumn;
- (void)_findSymbolsForString:(id)arg1 screenPointForPopUpWindow:(struct CGPoint)arg2 preferDeclarations:(BOOL)arg3 forDocumentation:(BOOL)arg4;
- (void)_gotoDocumentationForSymbol:(id)arg1;
- (void)_gotoSymbol:(id)arg1;
- (id)_historyBookmarks;
- (BOOL)_historyDelegateClearBookmarks;
- (unsigned long long)_indexOfCounterpartForSymbol:(id)arg1 inArray:(id)arg2;
- (long long)_indexOfSelectedSymbolInClassNavigator;
- (unsigned long long)_indexOfSymbol:(id)arg1 inArray:(id)arg2;
- (void)_invalidateSelectedFilePopUpIndex;
- (void)_itemsChangedInProject:(id)arg1;
- (id)_methodsList;
- (BOOL)_modifiersMeanNavigateByFile;
- (void)_navigateBookmarkStack:(id)arg1 intoStack:(id)arg2 index:(long long)arg3;
- (id)_pendingBookmark;
- (void)_populateBookmarkArray:(id)arg1 withGUIDStringArray:(id)arg2;
- (void)_presentSymbolArray:(id)arg1 atScreenPoint:(struct CGPoint)arg2 batchFinder:(id)arg3;
- (BOOL)_purgeBookmarksEqualToBookmark:(id)arg1;
- (void)_rebuildClassNavigatorData;
- (void)_reconfigureSplitControls:(id)arg1;
- (void)_reloadBookmarksUI;
- (void)_reloadBreakpointsUI;
- (void)_reloadIndexingUI;
- (void)_reloadIndexingUIIfProject:(BOOL)arg1;
- (void)_reloadIndexingUIIfProject:(BOOL)arg1 project:(id)arg2;
- (void)_reloadMethodsList;
- (void)_reloadNavigationMenus;
- (void)_removeBuildAnalyzerResultsNavigatorBar;
- (void)_removeCurrentEditor;
- (void)_removeDebuggerBar;
- (void)_removeIncrementalFindBar;
- (void)_replaceBookmark:(id)arg1;
- (void)_replaceBookmark:(id)arg1 restoreSelection:(BOOL)arg2 updatePrevStack:(BOOL)arg3;
- (void)_resetClassNavigatorSelection;
- (void)_saveEditedDocumentIfNeeded;
- (void)_selectTopLevelSymbolAtIndex:(long long)arg1;
- (long long)_selectedFilePopUpIndex;
- (void)_setHistoryCapacity:(id)arg1;
- (BOOL)_shouldCloseDocIfReceiverCloses:(id)arg1 groupIsClosing:(BOOL)arg2;
- (void)_showColumnPositionInLineBrowserDidChange:(id)arg1;
- (id)_symbolForCursorLocation;
- (id)_symbolForCursorLocationPreferringClassNameMatchingFilename:(id)arg1;
- (void)_symbolPopUpAction:(id)arg1;
- (void)_textViewGainedFirstResponder:(id)arg1;
- (void)_tileNavBarContents;
- (long long)_topLevelSymbolsPopUpColumn;
- (void)_trimHistory;
- (void)_updateEditorWithCurrentBookmark;
- (void)_validateBar;
- (void)_validateClassNavigatorButton;
- (void)_validateIncludedHeadersButton;
- (void)_viewFrameDidChange:(id)arg1;
- (void)_windowUpdated:(id)arg1;
- (void)addBreakpointTemplate:(id)arg1;
- (void)addCurrentFileToProject:(id)arg1;
- (void)addNotificationObservers;
- (void)addToBookmarks:(id)arg1;
- (void)becomeActive;
- (id)bookmark;
- (void)bookmarksPopUpAction:(id)arg1;
- (void)breakpointsPopUpAction:(id)arg1;
@property(readonly, nonatomic) XCBuildAnalyzerResultsNavigator *buildAnalyzerResultsNavigator;
- (id)classNavigator;
- (id)classNavigatorButton;
- (void)classNavigatorPopUpAction:(id)arg1;
- (void)clearBookmarks:(id)arg1;
- (void)closeCurrentFile:(id)arg1;
- (void)closeCurrentNavigator:(id)arg1;
- (void)closeModule;
- (void)compileCurrentFile:(id)arg1;
- (void)connectWithToolbarLineBrowser;
- (id)contentConfigurationDictionary;
- (void)dealloc;
- (void)debuggerBarVisibilityChanged:(id)arg1;
- (BOOL)debuggerControlBarVisible;
- (void)debuggerStarted:(id)arg1;
- (void)debuggerStopped:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)disassembleCurrentFile:(id)arg1;
- (void)editorSelectionDidChange;
- (BOOL)enableClassNavigatorPopUp;
- (void)eventSent:(id)arg1 toView:(id)arg2;
- (id)fileEditor;
- (id)fileReference;
- (void)findDeclarationsForString:(id)arg1 screenPointForPopUpWindow:(struct CGPoint)arg2;
- (void)findDefinitionsForString:(id)arg1 screenPointForPopUpWindow:(struct CGPoint)arg2;
- (void)findDocumentationForString:(id)arg1 screenPointForPopUpWindow:(struct CGPoint)arg2;
- (void)flagsChanged:(id)arg1;
- (id)geometryConfigurationDictionary;
- (void)handleMagnifyWithDeltaZ:(double)arg1 magnification:(double)arg2;
- (void)handleSwipeWithDeltaX:(double)arg1 deltaY:(double)arg2;
- (BOOL)hasShownFileDocument:(id)arg1;
- (void)hideIncrementalFindBar:(id)arg1;
- (id)historyBookmarks;
- (long long)historyCapacity;
- (id)historyDelegate;
- (void)importsPopUpAction:(id)arg1;
- (id)incrementalFinder;
- (unsigned long long)indexOfDifferentFileInStack:(id)arg1;
- (id)init;
- (id)initWithBookmark:(id)arg1;
- (void)invalidateFileNavigator;
- (void)invalidateNextPreviousAndHistoryBookmarkCaches;
@property(nonatomic, getter=isBuildAnalyzerResultsNavigatorBarVisible) BOOL buildAnalyzerResultsNavigatorBarVisible; // @synthesize buildAnalyzerResultsNavigatorBarVisible=_buildAnalyzerResultsNavigatorBarVisible;
- (BOOL)isDebugInfoBarVisible;
- (BOOL)isHeaderSplitControlVisible;
- (BOOL)isIncrementalFinderBarVisible;
- (BOOL)isNavigationBarVisible;
- (void)jumpToSelectionDefinition:(id)arg1;
- (id)keyTabView;
- (id)lineBrowser:(id)arg1 attributedTitleAtRow:(long long)arg2 inColumn:(long long)arg3 forMenu:(BOOL)arg4;
- (void)lineBrowser:(id)arg1 didDismissMenuForColumn:(long long)arg2;
- (id)lineBrowser:(id)arg1 imageAtRow:(long long)arg2 inColumn:(long long)arg3 forMenu:(BOOL)arg4;
- (long long)lineBrowser:(id)arg1 indexOfSelectedRowInColumn:(long long)arg2;
- (void)lineBrowser:(id)arg1 itemWasSelectedAtRow:(long long)arg2 inColumn:(long long)arg3;
- (long long)lineBrowser:(id)arg1 numberOfRowsInColumn:(long long)arg2;
- (id)lineBrowser:(id)arg1 titleAtRow:(long long)arg2 inColumn:(long long)arg3 forMenu:(BOOL)arg4;
- (id)lineBrowser:(id)arg1 toolTipForColumn:(long long)arg2;
- (void)lineBrowser:(id)arg1 willPopMenuForColumn:(long long)arg2;
- (void)lineBrowser:(id)arg1 willUseMenu:(id)arg2 forColumn:(long long)arg3;
- (id)localModuleActions;
- (void)magnifyWithEvent:(id)arg1;
- (id)mainEditor;
- (void)makeEditorActive;
- (void)menuNeedsUpdate:(id)arg1;
- (id)moduleToolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (void)moduleWasDisplayed;
- (id)navigatorGroup;
- (void)nextBookmark:(id)arg1;
- (void)nextBookmarkButtonAction:(id)arg1;
- (id)nextBookmarksContent;
- (void)nextFile:(id)arg1;
- (void)nextPopUpAction:(id)arg1;
- (void)openInSeparateNavigator:(id)arg1;
- (id)performAction:(id)arg1 withSelection:(id)arg2;
- (void)popBookmarksPopUp:(id)arg1;
- (void)popBreakpointsPopUp:(id)arg1;
- (void)popIncludedHeadersPopUp:(id)arg1;
- (void)popLoadedFilesPopUp:(id)arg1;
- (void)popNavigatorPopUp:(id)arg1;
- (void)popSymbolsPopUp:(id)arg1;
- (void)preprocessCurrentFile:(id)arg1;
- (void)prevPopUpAction:(id)arg1;
- (void)previousBookmark:(id)arg1;
- (void)previousBookmarkButtonAction:(id)arg1;
- (id)previousBookmarksContent;
- (void)previousFile:(id)arg1;
- (void)printDocument:(id)arg1;
- (id)projectDocument;
- (void)pushCurrentBookmark;
- (unsigned long long)rIndexOfBestBookmarkOfDifferentFileInStack:(id)arg1;
- (void)rebuildBookmarksPopup;
- (void)redo:(id)arg1;
- (id)referenceForCounterpartOfCurrentFile;
- (void)rememberCurrentSelectionBookmark;
- (void)removeNotificationObservers;
- (void)replaceBookmark:(id)arg1;
- (void)replaceBookmark:(id)arg1 becomeActive:(BOOL)arg2;
- (void)replaceBookmark:(id)arg1 restoreSelection:(BOOL)arg2;
- (void)replaceFileDocument:(id)arg1;
- (void)replaceFileDocument:(id)arg1 becomeActive:(BOOL)arg2;
- (void)revealCurrentFileInGroupTree:(id)arg1;
- (void)revealInClassBrowser:(id)arg1;
- (void)revealItems:(id)arg1 select:(BOOL)arg2;
- (BOOL)revealReferencesInGroupTree:(id)arg1;
- (void)revertDocumentToSaved:(id)arg1;
- (void)runPageLayout:(id)arg1;
- (void)saveDocument:(id)arg1;
- (void)saveDocumentAs:(id)arg1;
- (void)saveDocumentTo:(id)arg1;
- (void)saveUserDefaultConfiguration;
- (void)selectMethod:(id)arg1;
- (id)selectedProjectItems;
- (void)setClassNavigatorClass:(Class)arg1;
- (void)setDebuggerControlBarVisible:(BOOL)arg1;
- (void)setDocumentEdited:(BOOL)arg1;
- (void)setHeaderSplitControlVisible:(BOOL)arg1;
- (void)setHistoryDelegate:(id)arg1;
- (void)setIncrementalFinderBarVisible:(BOOL)arg1 withReplace:(BOOL)arg2;
- (void)setNavigationBarVisible:(BOOL)arg1;
- (void)setNavigatorGroup:(id)arg1;
- (void)setProgressIndicatorVisible:(BOOL)arg1;
- (void)setProgressPercent:(double)arg1;
- (void)setProjectDocument:(id)arg1;
- (void)setShowsBookmarksButton:(BOOL)arg1;
- (void)setShowsBreakpointsButton:(BOOL)arg1;
- (void)setShowsClassNavigatorButton:(BOOL)arg1;
- (void)setShowsCornerView:(BOOL)arg1;
- (void)setShowsCounterpartButton:(BOOL)arg1;
- (void)setShowsFilesPopUp:(BOOL)arg1;
- (void)setShowsIncludedHeadersButton:(BOOL)arg1;
- (void)setShowsNavigationButtons:(BOOL)arg1;
- (void)setShowsTopLevelSymbolsPopUp:(BOOL)arg1;
- (void)setSupermodule:(id)arg1;
- (BOOL)shouldEnableNextBookmarkButton;
- (BOOL)shouldEnableNextFileButton;
- (BOOL)shouldEnablePreviousBookmarkButton;
- (BOOL)shouldEnablePreviousFileButton;
- (void)showHistoryForDocBookmark:(id)arg1;
- (void)showIncrementalFindAndReplaceBar:(id)arg1;
- (void)showIncrementalFindBar:(id)arg1;
- (BOOL)showsBookmarksButton;
- (BOOL)showsBreakpointsButton;
- (BOOL)showsClassNavigatorButton;
- (BOOL)showsCornerView;
- (BOOL)showsCounterpartButton;
- (BOOL)showsFilesPopUp;
- (BOOL)showsIncludedHeadersButton;
- (BOOL)showsNavigationButtons;
- (BOOL)showsTopLevelSymbolsPopUp;
- (id)slideOutTabIconImage;
- (void)splitCurrentNavigator:(id)arg1;
- (void)splitCurrentNavigatorHorizontally:(id)arg1;
- (void)swipeWithEvent:(id)arg1;
- (void)switchToCounterpartOfCurrentFile:(id)arg1;
- (void)switchToFileOrSymbolicCounterpartOfCurrentFile:(id)arg1;
- (void)switchToSymbolicCounterpartOfCurrentFile:(id)arg1;
- (void)syntaxCheckCurrentFile:(id)arg1;
- (void)takeContentConfigurationFromDictionary:(id)arg1;
- (void)takeCurrentBookmarkFrom:(id)arg1;
- (void)takeGeometryConfigurationFromDictionary:(id)arg1;
- (void)tile;
- (void)toggleAddToBreakpoints:(id)arg1;
- (void)toggleBuildAnalyzerResultsNavigatorBarVisible:(BOOL)arg1;
- (void)toggleEnableBreakpoint:(id)arg1;
- (void)toggleFileLock:(id)arg1;
- (void)toggleNavigationBarVisible:(id)arg1;
- (id)toolbarCombinableItemIdentifiers:(id)arg1;
- (id)toolbarLineBrowser;
- (void)undo:(id)arg1;
- (void)update;
- (void)updateClassNavigatorForProject:(id)arg1;
- (void)updateDebugInfoTitleBanner;
- (void)updateHeader;
- (BOOL)validateLocalMenuItem:(id)arg1;
- (BOOL)validateToolbarItem:(id)arg1;
- (void)view:(id)arg1 concludeDragOperation:(id)arg2;
- (unsigned long long)view:(id)arg1 draggingEntered:(id)arg2;
- (void)view:(id)arg1 draggingExited:(id)arg2;
- (BOOL)view:(id)arg1 performDragOperation:(id)arg2;
- (void)viewDidLoad;
- (BOOL)wantsToRetainFocusDuringSelection;
- (id)windowOfSelection;
- (id)xcSelection;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

