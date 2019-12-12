//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXDebugDSModelViewModule.h>

#import <DevToolsInterface/XCDataTipSource-Protocol.h>

@class NSImage, NSMenu, NSMutableArray, NSMutableDictionary, NSMutableSet, NSPanel, NSScrollView, NSTableColumn, NSTextField, PBXLSDataValue, XCOutlineHoverView;

@interface XCDataTipTable : PBXDebugDSModelViewModule <XCDataTipSource>
{
    XCOutlineHoverView *_variablesView;
    NSTableColumn *_typeColumn;
    NSTableColumn *_summaryColumn;
    NSScrollView *_scrollView;
    PBXLSDataValue *_containerDV;
    long long _containerChildCount;
    NSTextField *_viewAsSheetValueTextField;
    NSTextField *_viewAsSheetTypeExpressionTextField;
    NSPanel *_viewAsSheet;
    NSMutableSet *_pendingDVsForSettingFormatSet;
    NSMutableArray *_childrenToExpand;
    PBXLSDataValue *_editedDV;
    NSImage *_spyglassImage;
    XCOutlineHoverView *_viewToExpand;
    id _itemToExpand;
    NSMenu *_contextualMenu;
    id _pendingDVPathForViewAsMemory;
    id _pendingDVPathForOpenInWindow;
    id _pendingDVPathForCreateAsWatchpoint;
    id _clickedItemNotRetained;
    NSMutableDictionary *_sortingCaches;
}

+ (id)MenuTableColumnIdentifier;
+ (void)_resetFonts;
+ (id)appendToMAS:(id)arg1 string:(id)arg2 addingAttributes:(id)arg3;
+ (id)backgroundColor;
+ (id)backgroundHoverColor;
+ (id)backgroundSelectColor;
+ (id)childrenHidden;
+ (id)childrenShowing;
+ (id)defaultModuleNibName;
+ (void)initialize;
+ (double)multiplicationFactor;
+ (id)nameAttributes;
+ (id)nameColumnFont;
+ (id)sortChildrenOf:(id)arg1 usingType:(int)arg2;
+ (id)standardColumnFont;
+ (id)textEntryBackgroundColor;
+ (id)typeAttributes;
+ (id)typeColumnFont;
+ (id)valueAttributes;
- (void)_createWatchpoint:(id)arg1;
- (BOOL)_dataFormattersEnabled;
- (void)_expandItemLater:(id)arg1 inView:(id)arg2;
- (void)_menuEndedTracking;
- (void)_openDefinition:(id)arg1;
- (void)_openDocumentation:(id)arg1;
- (void)_openInWindow:(id)arg1;
- (id)_pendingDVsForSettingFormatSet;
- (void)_printDescription:(id)arg1;
- (void)_setShowTypeColumn:(BOOL)arg1;
- (void)_setSortBy:(id)arg1;
- (void)_setSortType:(int)arg1;
- (void)_setUsesCustomDataFormatters:(BOOL)arg1;
- (void)_setValueFormatAction:(id)arg1;
- (BOOL)_showTypeColumn;
- (void)_showTypeColumn:(id)arg1;
- (int)_sortType;
- (id)_sortedChildrenOfItem:(id)arg1;
- (void)_takeDownDTUINow;
- (void)_toggleAutoExpandBehavior:(id)arg1;
- (void)_toggleUseDataFormatters:(id)arg1;
- (BOOL)_usesCustomDataFormatters;
- (void)_viewAsMemory:(id)arg1;
- (void)autoExpandChildren:(id)arg1;
- (void)cancelDataTip;
- (id)columnForIdentifier:(id)arg1;
- (void)configureOutlineHoverView:(id)arg1;
- (id)containerDV;
- (id)dataTipMenuForItem:(id)arg1;
- (id)dataValueForWatchpointExpression:(id)arg1;
- (void)dealloc;
- (void)dsModelDidUpdate:(id)arg1;
- (id)localModuleActions;
- (BOOL)openDocumentation:(id)arg1;
- (BOOL)openSymbolType:(id)arg1;
- (id)outlineHoverView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)outlineHoverView:(id)arg1 handleMouseDown:(id)arg2 row:(long long)arg3 column:(long long)arg4 item:(id)arg5;
- (double)outlineHoverView:(id)arg1 heightOfRowByItem:(id)arg2;
- (BOOL)outlineHoverView:(id)arg1 isItemExpandable:(id)arg2;
- (BOOL)outlineHoverView:(id)arg1 itemWillExpandLater:(id)arg2;
- (long long)outlineHoverView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (id)outlineHoverView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (void)outlineHoverView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (BOOL)outlineHoverView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineHoverView:(id)arg1 shouldExpandItem:(id)arg2;
- (id)outlineHoverView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 item:(id)arg5 mouseLocation:(struct CGPoint)arg6;
- (void)outlineHoverView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (BOOL)outlineViewShouldIgnoreMouseEvents:(id)arg1;
- (double)outlineViewWindowDefaultWidth:(id)arg1;
- (void)refreshDisplay;
- (void)releaseCaches;
- (id)selectedDataValues;
- (id)sessionModule;
- (void)setContainerDV:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setNameColumnTitle:(id)arg1;
- (void)setWatching:(BOOL)arg1 dataValue:(id)arg2;
- (void)updateDataValue:(id)arg1;
- (void)updateFromContainerDataValue;
- (void)updateUI;
- (BOOL)validateLocalMenuItem:(id)arg1;
- (id)variablesView;

@end

