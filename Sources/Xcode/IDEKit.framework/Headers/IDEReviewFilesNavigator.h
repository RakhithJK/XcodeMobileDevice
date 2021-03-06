//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDENavigator.h>

@class DVTBorderedView, DVTChooserView, DVTDocumentLocation, DVTScopeBarView, IDENavigatorFilterControlBar, IDENavigatorOutlineView, NSArray, NSIndexSet, NSMenu, NSMutableArray, NSMutableIndexSet, NSMutableSet, NSString, NSTabView, NSTableColumn;
@protocol IDEReviewFilesDataSource;

@interface IDEReviewFilesNavigator : IDENavigator
{
    DVTChooserView *_chooserView;
    DVTScopeBarView *_scopeBarView;
    NSTabView *_tabView;
    NSTabView *_hierarchyTabView;
    IDENavigatorOutlineView *_fileSystemOutlineView;
    IDENavigatorOutlineView *_flatOutlineView;
    IDENavigatorOutlineView *_workspaceOutlineView;
    IDENavigatorOutlineView *_issuesOutlineView;
    NSTableColumn *_fileSystemOutlineCheckboxColumn;
    NSTableColumn *_flatOutlineCheckboxColumn;
    NSTableColumn *_workspaceOutlineCheckboxColumn;
    DVTBorderedView *_outerBorderedView;
    NSMutableArray *_checkedFilePaths;
    NSMutableArray *_completedFilePaths;
    NSMutableSet *_mixedStateFilePaths;
    NSMutableArray *_disabledFilePaths;
    NSArray *_viewChoices;
    NSIndexSet *_selectedViewIndexes;
    unsigned long long _selectedNavigator;
    NSString *_userDefaultKeyForSelectedState;
    NSArray *_selectedFilePaths;
    DVTDocumentLocation *_selectedDocumentLocation;
    id <IDEReviewFilesDataSource> _workspaceDataSource;
    id <IDEReviewFilesDataSource> _fileSystemDataSource;
    id <IDEReviewFilesDataSource> _flatDataSource;
    id <IDEReviewFilesDataSource> _issueDataSource;
    int _activity;
    NSMutableIndexSet *_lastSelectedIndexes;
    IDENavigatorFilterControlBar *_filterControlBar;
    NSString *_filterString;
    BOOL _showFilter;
    BOOL _showCheckboxes;
    BOOL _showHierarchy;
    unsigned long long _supportedNavigators;
    unsigned long long _supportedStatusBadges;
}

+ (void)initialize;
+ (id)keyPathsForValuesAffectingCheckedFilePaths;
+ (id)keyPathsForValuesAffectingSelectedNavigator;
- (void).cxx_destruct;
- (void)_checkBoxAction:(id)arg1;
- (id)_outlineView:(id)arg1 checkboxTableCellViewForDefaultNavItem:(id)arg2;
- (id)_outlineView:(id)arg1 imageTableCellViewForDefaultNavItem:(id)arg2;
- (id)_outlineView:(id)arg1 tableCellViewForDefaultNavItem:(id)arg2;
- (void)_outlineView:(id)arg1 updateSCMConflictStatusViewBindings:(id)arg2;
- (void)_outlineView:(id)arg1 updateSCMStatusViewBindings:(id)arg2;
- (void)_outlineView:(id)arg1 updateScmStatusTextFieldBindingsForExistingItemInOutlineView:(id)arg2;
- (void)_reloadCheckboxes;
@property int activity; // @synthesize activity=_activity;
- (void)addFilePathToMixedState:(id)arg1;
- (void)checkItemsAtFilePaths:(id)arg1;
@property(retain) NSArray *checkedFilePaths; // @synthesize checkedFilePaths=_checkedFilePaths;
@property(retain) NSMutableArray *completedFilePaths; // @synthesize completedFilePaths=_completedFilePaths;
@property(retain) NSMenu *contextMenu;
- (id)contextMenuSelection;
@property(readonly) IDENavigatorOutlineView *currentOutlineView;
@property(retain) NSMutableArray *disabledFilePaths; // @synthesize disabledFilePaths=_disabledFilePaths;
- (id)domainIdentifier;
@property(retain) id <IDEReviewFilesDataSource> fileSystemDataSource; // @synthesize fileSystemDataSource=_fileSystemDataSource;
@property(readonly) IDENavigatorOutlineView *fileSystemOutlineView;
- (id)filterDefinitionIdentifier;
@property(copy) NSString *filterString; // @synthesize filterString=_filterString;
@property(retain) id <IDEReviewFilesDataSource> flatDataSource; // @synthesize flatDataSource=_flatDataSource;
@property(readonly) IDENavigatorOutlineView *flatOutlineView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(retain) id <IDEReviewFilesDataSource> issueDataSource; // @synthesize issueDataSource=_issueDataSource;
@property(readonly) IDENavigatorOutlineView *issuesOutlineView;
- (void)loadView;
@property(retain) NSMutableSet *mixedStateFilePaths; // @synthesize mixedStateFilePaths=_mixedStateFilePaths;
- (id)navigableChildItemOfItem:(id)arg1 matchingFilePath:(id)arg2;
- (id)navigableItemsInOutlineView:(id)arg1 forFilePaths:(id)arg2;
- (id)outlineView:(id)arg1 childItemsForItem:(id)arg2;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupHeaderItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 rowIndexesForItems:(id)arg2;
- (id)outlineView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)primitiveInvalidate;
- (void)refreshItemsAtFilePaths:(id)arg1;
- (void)reloadAvailableNavigators;
- (void)reloadCheckboxesForFilePaths:(id)arg1;
- (void)reloadData;
- (void)removeFilePathFromMixedState:(id)arg1;
@property(readonly) DVTDocumentLocation *selectedDocumentLocation; // @synthesize selectedDocumentLocation=_selectedDocumentLocation;
@property(retain) NSMutableArray *selectedFilePaths;
- (id)selectedFilePathsOfOutlineView:(id)arg1;
- (id)selectedNavigableItemsOfOutlineView:(id)arg1;
@property unsigned long long selectedNavigator;
@property(copy) NSIndexSet *selectedViewIndexes; // @synthesize selectedViewIndexes=_selectedViewIndexes;
- (void)setSelectedFilePaths:(id)arg1 forOutlineView:(id)arg2;
- (void)setSelectedNavigableItems:(id)arg1 forOutlineView:(id)arg2;
@property BOOL showCheckboxes; // @synthesize showCheckboxes=_showCheckboxes;
@property BOOL showFilter; // @synthesize showFilter=_showFilter;
@property(nonatomic) BOOL showHierarchy; // @synthesize showHierarchy=_showHierarchy;
@property unsigned long long supportedNavigators; // @synthesize supportedNavigators=_supportedNavigators;
@property unsigned long long supportedStatusBadges; // @synthesize supportedStatusBadges=_supportedStatusBadges;
@property(copy) NSString *userDefaultKeyForSelectedState; // @synthesize userDefaultKeyForSelectedState=_userDefaultKeyForSelectedState;
@property(retain) id <IDEReviewFilesDataSource> workspaceDataSource; // @synthesize workspaceDataSource=_workspaceDataSource;
- (void)setupViewChoices;
- (id)successImage;
- (BOOL)supportsFileNavigator;
- (BOOL)supportsFlatNavigator;
- (BOOL)supportsIssueNavigator;
- (BOOL)supportsRepositoryNavigator;
- (BOOL)supportsWorkspaceNavigator;
- (void)uncheckItemsAtFilePaths:(id)arg1;
- (void)updateSelectedDocumentLocation;
@property(readonly) NSArray *viewChoices; // @synthesize viewChoices=_viewChoices;
- (void)viewDidInstall;
- (void)viewWillUninstall;
@property(readonly) IDENavigatorOutlineView *workspaceOutlineView;

@end

