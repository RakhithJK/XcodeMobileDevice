//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableView.h>

@class NSArray, NSView;

@interface PBXExtendedTableView : NSTableView
{
    struct {
        unsigned int endAllEditingWhenCellEnds:1;
        unsigned int allowKeyboardDeletion:1;
        unsigned int allowEditCancellation:1;
        unsigned int clearSelWhenResigningKey:1;
        unsigned int drawsStripes:1;
        unsigned int delegateWantsDidStartEditingColumn:1;
        unsigned int delegateWantsWillEndEditingColumn:1;
        unsigned int delegateWantsWillAbortEditingColumn:1;
        unsigned int delegateWantsHandleReturnKey:1;
        unsigned int delegateWantsDeleteRows:1;
        unsigned int delegateWantsCreateRowsFromPasteboard:1;
        unsigned int delegateWantsMenuForTableColumn:1;
        unsigned int delegateWantsWillReturnMenuForTableColumn:1;
        unsigned int dataSourceCanHandleReturnKey:1;
        unsigned int dataSourceCanDelete:1;
        unsigned int dataSourceCanCut:1;
        unsigned int dataSourceCanCopy:1;
        unsigned int dataSourceCanPaste:1;
        unsigned int dataSourceWillValidateMenuItems:1;
        unsigned int dataSourceWantsActivationChangeNotification:1;
        unsigned int dataSourceCanHandleMouseDown:1;
        unsigned int delegateWantsDraggingSourceOperationMaskForLocal:1;
        unsigned int delegateWantsDraggedImageBeganAt:1;
        unsigned int delegateWantsDraggedImageEndedAt:1;
        unsigned int dragOnlySelectedItems:1;
        unsigned int ignoresDefaultFont:1;
        unsigned int keepSelectionVisibleDuringResize:1;
        unsigned int delegateWantsToOverrideRowDrawing:1;
        unsigned int delegateWantsToOverrideGridDrawing:1;
        unsigned int _RESERVED_:20;
    } _etvFlags;
    unsigned long long _editingMsgDisableCount;
    NSArray *_savedDragItems;
    NSArray *_savedDragItemPaths;
    double _minRowHeight;
    NSView *_originalCornerView;
    struct _NSRange _liveResizeRowsInRect;
}

+ (id)allSelectedRowNumbersForTableView:(id)arg1;
+ (id)boldItalicTableFont;
+ (id)boldTableFont;
+ (id)defaultTableFont;
+ (id)italicTableFont;
+ (void)setDefaultTableFont:(id)arg1;
- (void)_examineDataSource;
- (void)_examineDelegate;
- (void)_tableFontChanged:(id)arg1;
- (void)_windowChangedKeyState;
- (BOOL)abortEditing;
- (BOOL)allowsEditCancellation;
- (BOOL)allowsItemDeletionByKeystroke;
- (id)awakeAfterUsingCoder:(id)arg1;
- (void)awakeFromNib;
- (BOOL)clearsSelectionWhenResigningKey;
- (id)configurationArray;
- (void)copy:(id)arg1;
- (void)createNewRow:(id)arg1;
- (void)cut:(id)arg1;
- (void)dealloc;
- (void)delete:(id)arg1;
- (void)disableDidStartWillEndEditingDelegations;
- (BOOL)doesEndAllEditingWhenCellEndsEditing;
- (id)dragImageForRowsWithIndexes:(id)arg1 tableColumns:(id)arg2 event:(id)arg3 offset:(struct CGPoint *)arg4;
- (BOOL)dragOnlySelectedItems;
- (void)draggedImage:(id)arg1 beganAt:(struct CGPoint)arg2;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (void)drawGridInClipRect:(struct CGRect)arg1;
- (void)drawRow:(long long)arg1 clipRect:(struct CGRect)arg2;
- (BOOL)drawsStripes;
- (void)editColumn:(long long)arg1 row:(long long)arg2 withEvent:(id)arg3 select:(BOOL)arg4;
- (void)enableDidStartWillEndEditingDelegations;
- (BOOL)ignoresDefaultFont;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)keepSelectionVisible;
- (void)keyDown:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (double)minRowHeight;
- (void)mouseDown:(id)arg1;
- (id)originalCornerView;
- (void)paste:(id)arg1;
- (BOOL)resignFirstResponder;
- (id)savedDragItemPaths;
- (id)savedDragItems;
- (id)selectedRows;
- (void)setAllowsEditCancellation:(BOOL)arg1;
- (void)setAllowsItemDeletionByKeystroke:(BOOL)arg1;
- (void)setClearsSelectionWhenResigningKey:(BOOL)arg1;
- (void)setConfigurationFromArray:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDragOnlySelectedItems:(BOOL)arg1;
- (void)setDrawsStripes:(BOOL)arg1;
- (void)setEndAllEditingWhenCellEndsEditing:(BOOL)arg1;
- (void)setFont:(id)arg1;
- (void)setIgnoresDefaultFont:(BOOL)arg1;
- (void)setKeepSelectionVisible:(BOOL)arg1;
- (void)setMinRowHeight:(double)arg1;
- (void)setOriginalCornerView;
- (void)setSavedDragItemPaths:(id)arg1;
- (void)setSavedDragItems:(id)arg1;
- (void)setSavedDragItems:(id)arg1 paths:(id)arg2;
- (void)textDidEndEditing:(id)arg1;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)tile;
- (BOOL)validateMenuItem:(id)arg1;
- (void)viewWillStartLiveResize;

@end

