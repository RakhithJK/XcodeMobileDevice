//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSOutlineView.h>

@class NSArray, NSMapTable, NSView, PBXExtendedOutlineViewSelection;

@interface PBXExtendedOutlineView : NSOutlineView
{
    struct {
        unsigned int endAllEditingWhenCellEnds:1;
        unsigned int allowKeyboardDeletion:1;
        unsigned int allowEditCancellation:1;
        unsigned int clearSelWhenResigningKey:1;
        unsigned int followsTableViewFont:1;
        unsigned int dragOnlySelectedItems:1;
        unsigned int drawsStripes:1;
        unsigned int delegateWantsDidStartEditingColumn:1;
        unsigned int delegateWantsWillEndEditingColumn:1;
        unsigned int delegateWantsWillAbortEditingColumn:1;
        unsigned int delegateWantsDraggingSourceOperationMaskForLocal:1;
        unsigned int delegateWantsDraggedImageBeganAt:1;
        unsigned int delegateWantsDraggedImageEndedAt:1;
        unsigned int delegateWantsMenuForTableColumn:1;
        unsigned int delegateWantsWillReturnMenuForTableColumn:1;
        unsigned int dataSourceCanHandleLeftArrowKeyAndRightArrowKey:1;
        unsigned int dataSourceCanHandleReturnKey:1;
        unsigned int dataSourceCanDelete:1;
        unsigned int dataSourceCanCut:1;
        unsigned int dataSourceCanCopy:1;
        unsigned int dataSourceCanPaste:1;
        unsigned int dataSourceCanValidateMenuItems:1;
        unsigned int dataSourceWantsActivationChangeNotification:1;
        unsigned int keepSelectionVisibleDuringResize:1;
        unsigned int autoforwardsSpaceKeyEvents:1;
        unsigned int hidesTwistyTriangle:1;
        unsigned int delegateWantsCollapseItemCollapseChildren:1;
        unsigned int _RESERVED_:5;
    } _eovFlags;
    unsigned long long _editingMsgDisableCount;
    NSArray *_savedDragItems;
    NSArray *_savedDragItemPaths;
    NSMapTable *_itemToRowCache;
    BOOL _isUsingItemToRowCache;
    double _minRowHeight;
    NSView *_originalCornerView;
    BOOL _permissionToResignFirstResponder;
    struct _NSRange _liveResizeRowsInRect;
    PBXExtendedOutlineViewSelection *_outlineViewSelection;
    BOOL _keepScrolledToEnd;
}

+ (void)initialize;
- (void)_examineDataSource;
- (void)_examineDelegate;
- (void)_selectFirstValidItemFromPaths:(id)arg1;
- (BOOL)_sendDataSourceWriteDragDataWithIndexes:(id)arg1 toPasteboard:(id)arg2;
- (void)_setUsingRowItemCache:(BOOL)arg1;
- (void)_systemColorChanged:(id)arg1;
- (void)_tableFontChanged:(id)arg1;
- (void)_windowChangedKeyState;
- (BOOL)abortEditing;
- (BOOL)allowsEditCancellation;
- (BOOL)allowsItemDeletionByKeystroke;
- (BOOL)autoforwardsSpaceKeyEvents;
- (id)awakeAfterUsingCoder:(id)arg1;
- (void)awakeFromNib;
- (BOOL)clearsSelectionWhenResigningKey;
- (void)collapseItem:(id)arg1 collapseChildren:(BOOL)arg2;
- (void)commonInit;
- (id)configurationArray;
- (void)copy:(id)arg1;
- (void)createNewItem:(id)arg1;
- (void)cut:(id)arg1;
- (void)dealloc;
- (void)delete:(id)arg1;
- (struct _NSRange)descendantRowsForRow:(long long)arg1;
- (void)disableDidStartWillEndEditingDelegations;
- (BOOL)doesEndAllEditingWhenCellEndsEditing;
- (id)dragImageForRowsWithIndexes:(id)arg1 tableColumns:(id)arg2 event:(id)arg3 offset:(struct CGPoint *)arg4;
- (BOOL)dragOnlySelectedItems;
- (void)draggedImage:(id)arg1 beganAt:(struct CGPoint)arg2;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (BOOL)drawsStripes;
- (void)editColumn:(long long)arg1 row:(long long)arg2 withEvent:(id)arg3 select:(BOOL)arg4;
- (void)enableDidStartWillEndEditingDelegations;
- (BOOL)followsTableViewFont;
- (struct CGRect)frameOfCellAtColumn:(long long)arg1 row:(long long)arg2;
- (struct CGRect)frameOfOutlineCellAtRow:(long long)arg1;
- (void)getRowPaths:(id *)arg1 itemPaths:(id *)arg2 fromRowIndexes:(id)arg3;
- (BOOL)hidesTwistyTriangle;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)invalidateRowCache;
- (BOOL)isItemExpanded:(id)arg1;
- (id)itemAtRow:(long long)arg1;
- (id)itemsForRowIndexes:(id)arg1;
- (BOOL)keepSelectionVisible;
- (void)keyDown:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (double)minRowHeight;
- (void)mouseDown:(id)arg1;
- (id)originalCornerView;
- (id)parentItemOfItem:(id)arg1 getChildIndex:(long long *)arg2;
- (void)paste:(id)arg1;
- (id)pathsFromRowIndexes:(id)arg1;
- (BOOL)permissionToResignFirstResponder;
- (void)reloadData;
- (void)reloadDataOfType:(unsigned long long)arg1 withItem:(id)arg2 reloadChildren:(BOOL)arg3;
- (void)reloadItem:(id)arg1 reloadChildren:(BOOL)arg2;
- (BOOL)resignFirstResponder;
- (void)restoreSelectionFromSerializedRepresentation:(id)arg1;
- (long long)rowForItem:(id)arg1;
- (id)rowPathsFromRowIndexes:(id)arg1;
- (id)savedDragItemPaths;
- (id)savedDragItems;
- (void)selectAndMakeVisibleRowIndexes:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (id)selectedItemPaths;
- (id)selectedItems;
- (id)selectedRows;
- (id)serializedRepresentationOfSelection;
- (void)setAllowsEditCancellation:(BOOL)arg1;
- (void)setAllowsItemDeletionByKeystroke:(BOOL)arg1;
- (void)setAutoforwardsSpaceKeyEvents:(BOOL)arg1;
- (void)setClearsSelectionWhenResigningKey:(BOOL)arg1;
- (void)setConfigurationFromArray:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDragOnlySelectedItems:(BOOL)arg1;
- (void)setDrawsStripes:(BOOL)arg1;
- (void)setEndAllEditingWhenCellEndsEditing:(BOOL)arg1;
- (void)setFollowsTableViewFont:(BOOL)arg1;
- (void)setFont:(id)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setHidesTwistyTriangle:(BOOL)arg1;
- (void)setKeepScrolledToEnd:(BOOL)arg1;
- (void)setKeepSelectionVisible:(BOOL)arg1;
- (void)setMinRowHeight:(double)arg1;
- (void)setOriginalCornerView;
- (void)setPermissionToResignFirstResponder:(BOOL)arg1;
- (void)setSavedDragItemPaths:(id)arg1;
- (void)setSavedDragItems:(id)arg1;
- (void)setSavedDragItems:(id)arg1 paths:(id)arg2;
- (void)setSelectedItemPaths:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)tile;
- (BOOL)validateMenuItem:(id)arg1;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)viewWillStartLiveResize;

@end

