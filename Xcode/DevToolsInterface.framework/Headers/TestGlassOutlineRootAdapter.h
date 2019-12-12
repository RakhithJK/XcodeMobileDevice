//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsInterface/XCEDataRootAdapterP-Protocol.h>

@class NSArray, NSOutlineView, NSSearchField, NSString, NSViewController, NSWindow, XCEConfigurableDataSource;

@interface TestGlassOutlineRootAdapter : NSObject <XCEDataRootAdapterP>
{
    NSOutlineView *_outlineView;
    NSSearchField *_searchField;
    struct NSObject *_editorDisplayer;
    NSViewController *_currentEditorController;
    NSViewController *_noSelectionController;
    NSViewController *_noDataController;
    NSViewController *_noEditorMsgController;
    NSWindow *_inspectorWindow;
    NSArray *_searchResults;
    NSObject *_currentSearchResult;
    NSString *_currentSearchResultString;
    BOOL _outlineShown;
    BOOL _editorShown;
    BOOL _findPanelShown;
    BOOL _detailShown;
    XCEConfigurableDataSource *_dataSource;
    struct NSObject *_displaySelectedObjectAnchor;
}

+ (void)openTestGlassWindow:(id)arg1;
- (void)_addDisplaySelectedObjectUnitToFace:(id)arg1;
- (void)_addGlassWindowEditorToFace:(id)arg1;
- (void)_addGlassWindowOutlineViewToFace:(id)arg1 additionalNodes:(id)arg2;
- (id)_createViewForSelectedObject;
- (void)_inspectorWindowWillClose:(id)arg1;
- (void)addSearchPanelToFace:(id)arg1;
- (void)addTabBarToFace:(id)arg1;
- (id)createGlassOutlineView:(id)arg1;
- (id)currentActionMenu;
@property(copy) NSString *currentSearchResultString; // @synthesize currentSearchResultString=_currentSearchResultString;
- (BOOL)currentViewControllerCanSearch;
- (void)dealloc;
@property BOOL detailShown; // @synthesize detailShown=_detailShown;
- (BOOL)doubleClickDataNode:(id)arg1;
@property BOOL editorShown; // @synthesize editorShown=_editorShown;
- (void)finalize;
- (void)findPanel:(id)arg1;
@property BOOL findPanelShown; // @synthesize findPanelShown=_findPanelShown;
- (void)infoForEditor:(id)arg1;
- (void)moveToNewSearchResult:(BOOL)arg1;
- (void)moveToNewSearchResultAction:(id)arg1;
- (void)openTestGlassWindow:(id)arg1;
@property BOOL outlineShown; // @synthesize outlineShown=_outlineShown;
- (void)searchAction;
- (void)searchDoneAction;
- (BOOL)selectDataNode:(id)arg1;
- (void)updateAndSaveRoots;
- (void)updateInformation:(id)arg1;
- (void)windowControllerWillClose:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

