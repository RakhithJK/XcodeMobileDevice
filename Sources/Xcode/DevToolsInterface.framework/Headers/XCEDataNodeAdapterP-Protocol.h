//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/NSObject-Protocol.h>

@class NSArray, NSCell, NSEvent, NSImage, NSObject, NSOutlineView, NSString, NSTableColumn, NSView, NSViewController, XCEConfigurableDataNode;

@protocol XCEDataNodeAdapterP <NSObject>

@optional
- (long long)compareDataNode:(XCEConfigurableDataNode *)arg1 withDataNode:(XCEConfigurableDataNode *)arg2;
- (NSArray *)dataArrayForConsistencyCheck;
- (void)dataNode:(XCEConfigurableDataNode *)arg1 acceptDroppedItems:(NSArray *)arg2 atIndex:(long long)arg3;
- (BOOL)dataNode:(XCEConfigurableDataNode *)arg1 canAcceptDroppedItem:(id)arg2 atChildIndex:(long long)arg3;
- (BOOL)dataNode:(XCEConfigurableDataNode *)arg1 canAcceptDroppedItems:(NSArray *)arg2 atChildIndex:(long long)arg3;
- (BOOL)dataNode:(XCEConfigurableDataNode *)arg1 doubleClickInColumn:(NSTableColumn *)arg2;
- (void)dataNode:(XCEConfigurableDataNode *)arg1 forwardingCell:(NSCell *)arg2 copyWithZone:(struct _NSZone *)arg3 copiedCell:(NSCell *)arg4;
- (void)dataNode:(XCEConfigurableDataNode *)arg1 forwardingCell:(NSCell *)arg2 drawWithFrame:(struct CGRect)arg3 inView:(NSView *)arg4;
- (unsigned long long)dataNode:(XCEConfigurableDataNode *)arg1 forwardingCell:(NSCell *)arg2 hitTestForEvent:(NSEvent *)arg3 inRect:(struct CGRect)arg4 ofView:(NSView *)arg5;
- (BOOL)dataNode:(XCEConfigurableDataNode *)arg1 forwardingCell:(NSCell *)arg2 trackMouse:(NSEvent *)arg3 inRect:(struct CGRect)arg4 ofView:(NSView *)arg5 untilMouseUp:(BOOL)arg6;
- (void)dataNode:(XCEConfigurableDataNode *)arg1 forwardingCellDealloc:(NSCell *)arg2;
- (struct CGRect)dataNode:(XCEConfigurableDataNode *)arg1 frameOfOutlineCellAtRow:(long long)arg2 defaultFrame:(struct CGRect)arg3;
- (BOOL)dataNode:(XCEConfigurableDataNode *)arg1 handleMouseDown:(NSEvent *)arg2 forOutlineView:(NSOutlineView *)arg3 inRow:(long long)arg4 atRelativeLocation:(struct CGPoint)arg5;
- (BOOL)dataNode:(XCEConfigurableDataNode *)arg1 handleReturnKey:(NSEvent *)arg2 forOutlineView:(NSOutlineView *)arg3 changeFocus:(BOOL)arg4;
- (BOOL)dataNode:(XCEConfigurableDataNode *)arg1 matchesPersistentObjectComponent:(NSString *)arg2;
- (id)dataNode:(XCEConfigurableDataNode *)arg1 objectValueForTableColumn:(NSTableColumn *)arg2;
- (NSCell *)dataNode:(XCEConfigurableDataNode *)arg1 outlineView:(NSOutlineView *)arg2 dataCellForTableColumn:(NSTableColumn *)arg3;
- (void)dataNode:(XCEConfigurableDataNode *)arg1 outlineView:(NSOutlineView *)arg2 willDisplayCell:(NSCell *)arg3 forTableColumn:(NSTableColumn *)arg4;
- (BOOL)dataNode:(XCEConfigurableDataNode *)arg1 outlineViewIsGroupItem:(NSOutlineView *)arg2;
- (void)dataNode:(XCEConfigurableDataNode *)arg1 setObjectValue:(id)arg2 forTableColumn:(NSTableColumn *)arg3;
- (BOOL)dataNode:(XCEConfigurableDataNode *)arg1 shouldEditTableColumn:(NSTableColumn *)arg2;
- (NSString *)dataNode:(XCEConfigurableDataNode *)arg1 toolTipForTableColumn:(NSTableColumn *)arg2;
- (void)dataNodeConfigure:(XCEConfigurableDataNode *)arg1;
- (NSImage *)dataNodeImage:(XCEConfigurableDataNode *)arg1;
- (void)dataNodeInvalidate:(XCEConfigurableDataNode *)arg1;
- (NSString *)dataNodePersistentObjectComponent:(XCEConfigurableDataNode *)arg1;
- (BOOL)dropPaths:(NSArray *)arg1 atIndex:(long long)arg2 ofNode:(XCEConfigurableDataNode *)arg3;
- (NSViewController *)editorViewControllerForDataNode:(XCEConfigurableDataNode *)arg1;
- (BOOL)filterChildData:(NSObject *)arg1 parentNode:(XCEConfigurableDataNode *)arg2 designatedAdapter:(NSObject *)arg3;
- (double)heightOfRowForDataNode:(XCEConfigurableDataNode *)arg1;
- (NSArray *)inspectorViewControllersForDataNode:(XCEConfigurableDataNode *)arg1 editor:(NSViewController *)arg2;
- (XCEConfigurableDataNode *)instantiateAddedChildWithData:(id)arg1 forDataNode:(XCEConfigurableDataNode *)arg2;
- (void)instantiateChildrenForDataNode:(XCEConfigurableDataNode *)arg1;
- (BOOL)isDataNodeDragDeletable:(XCEConfigurableDataNode *)arg1;
- (BOOL)isDataNodeExpandable:(XCEConfigurableDataNode *)arg1;
- (BOOL)isDataNodeSelectable:(XCEConfigurableDataNode *)arg1;
- (void)refreshDataNode:(XCEConfigurableDataNode *)arg1;
- (void)removeChild:(XCEConfigurableDataNode *)arg1 fromDataNode:(XCEConfigurableDataNode *)arg2;
- (void)removeDataNode:(XCEConfigurableDataNode *)arg1;
- (void)renameChild:(XCEConfigurableDataNode *)arg1 withinDataNode:(XCEConfigurableDataNode *)arg2;
- (NSString *)representedFilenameForDataNode:(XCEConfigurableDataNode *)arg1;
- (BOOL)shouldSortChildrenOfNode:(XCEConfigurableDataNode *)arg1;
@end
