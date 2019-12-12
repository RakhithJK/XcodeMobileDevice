//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/XCElementAnchorImp.h>

@class NSCell, NSColor, NSCursor, NSMutableArray, NSObject, NSView, NSViewController, XCElementCPlacerImp, XCElementImp, XCElementView;

@interface XCElementMainImp : XCElementAnchorImp
{
    XCElementView *_elementView;
    struct _XCESize _layoutMinSize;
    struct _XCESize _layoutMaxSize;
    XCElementImp *_selectedElement;
    NSView *_firstKeyView;
    NSView *_lastKeyView;
    NSColor *_backgroundColor;
    NSColor *_alternateBackgroundColor;
    XCElementCPlacerImp *_editingPlacer;
    NSCell *_editingCell;
    struct NSObject *_editingElement;
    NSObject *_editingObject;
    struct CGRect _editingEditorOffsets;
    NSMutableArray *_tabCandidates;
    struct NSObject *_actionDelegate;
    NSViewController *_vC;
    NSView *_currentKeyView;
    struct __CFRunLoopObserver *_runLoopObserver;
    long long _inCallMakeFirstResponder;
    long long _withinDrawRect;
    struct NSObject *_higlightElement;
    NSObject *_editorRegistrationObject;
    NSCursor *_uniqueCursor;
    void *_observationInfo;
    int _positionIndependentSizing;
    BOOL _computedKeyLoop;
    BOOL _resizesLayoutVertically;
    BOOL _resizesLayoutHorizontally;
    BOOL _resizesViewVertically;
    BOOL _resizesViewHorizontally;
    BOOL _resizesWindowVertically;
    BOOL _resizesWindowHorizontally;
    BOOL _mayExtendBeyondWindowVertically;
    BOOL _mayExtendBeyondWindowHorizontally;
    BOOL _inResizingContext;
    BOOL _inResizingView;
    BOOL _continouslyPropagateMinSizeToWindow;
    BOOL _positioningView;
    BOOL _didDisableFlushWindow;
    BOOL _needsFinishPositioning;
    BOOL _frameChangedPostponed;
}

- (void)_addRunLoopObserver;
- (struct _XCESize)_adjustLayoutSizeForWindowAndScreen:(struct _XCESize)arg1;
- (void)_calculateLayoutSizes;
- (BOOL)_canResizeViewHorizontally;
- (BOOL)_canResizeViewVertically;
- (void)_clearNeedPositionElementsState;
- (void)_enableFlushWindowIfNeeded;
- (void)_frameChanged:(id)arg1;
- (void)_frameChangedPostponed:(id)arg1;
- (void)_invalidateRunLoopObserver;
- (struct _XCESize)_layoutMaxSize;
- (struct _XCESize)_layoutMinSize;
- (void)_observeRunLoop:(unsigned long long)arg1;
- (void)_positionElements:(BOOL)arg1;
- (void)_processViewWillDraw;
- (void)_releaseValuesMainElement;
- (void)_resizeWindowOldVisibleSize:(struct CGSize)arg1 newSize:(struct CGSize)arg2;
- (void)_tileGrowBoxOwner;
- (struct NSObject *)actionDelegate;
- (void)addParent:(struct NSObject *)arg1;
- (void)addTabCandidate:(id)arg1;
- (id)alternateBackgroundColor;
- (void)applicationDidUpdate:(id)arg1;
- (void)applicationWillUpdate:(id)arg1;
- (void)attachToWindow;
- (id)backgroundColor;
- (void)beginPositionIndependentSizing;
- (void)clearView;
- (BOOL)commitEditingEditorsForAnchor:(struct NSObject *)arg1;
- (BOOL)continouslyPropagateMinSizeToWindow;
- (id)currentKeyView;
- (void)dealloc;
- (void)deleteSelf;
- (void)detachFromWindow;
- (void)discardEditingEditorsForAnchor:(struct NSObject *)arg1;
- (void)drawForeground:(struct CGRect)arg1;
- (void)drawOwnBackground:(struct CGRect)arg1;
- (id)editingCell;
- (struct CGRect)editingEditorOffsets;
- (struct NSObject *)editingElement;
- (id)editingObject;
- (id)editingPlacer;
- (id)editorRegistrationObject;
- (id)effectivEditorRegistrationObject;
- (id)elementView;
- (void)endPositionIndependentSizing;
- (void)finalize;
- (void)finishPositioningIfNeeded;
- (id)firstKeyView;
- (BOOL)hasEditingEditorsForAnchor:(struct NSObject *)arg1;
- (void)highlightSearchResult:(id)arg1;
- (long long)inCallMakeFirstResponder;
- (id)initInView:(id)arg1;
- (id)lastKeyView;
- (void)makeSelected:(id)arg1;
- (BOOL)mayExtendBeyondWindowHorizontally;
- (BOOL)mayExtendBeyondWindowVertically;
- (void)needFinishPositioning;
- (void)needPositionElements;
- (void)objectDidBeginEditing:(struct NSObject *)arg1 inElement:(struct NSObject *)arg2;
- (void)objectDidEndEditing:(struct NSObject *)arg1 inElement:(struct NSObject *)arg2;
- (void *)observationInfo;
- (void)positionElementsIfNeeded;
- (BOOL)positionIndependentSizing;
- (struct _XCESize)positionMain;
- (BOOL)positioningView;
- (void)processFrameChangedIfNeeded;
- (void)removeTabCandidates;
- (BOOL)resizesLayoutHorizontally;
- (BOOL)resizesLayoutVertically;
- (BOOL)resizesViewHorizontally;
- (BOOL)resizesViewVertically;
- (BOOL)resizesWindowHorizontally;
- (BOOL)resizesWindowVertically;
- (id)selectedElement;
- (void)setActionDelegate:(struct NSObject *)arg1;
- (void)setAlternateBackgroundColor:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setContinouslyPropagateMinSizeToWindow:(BOOL)arg1;
- (id)setCurrentKeyView:(id)arg1;
- (void)setEditingCell:(id)arg1;
- (void)setEditingEditorOffsets:(struct CGRect)arg1;
- (void)setEditingElement:(struct NSObject *)arg1;
- (void)setEditingObject:(id)arg1;
- (void)setEditingPlacer:(id)arg1;
- (void)setEditorRegistrationObject:(id)arg1;
- (id)setFirstKeyView:(id)arg1;
- (void)setInCallMakeFirstResponder:(long long)arg1;
- (id)setLastKeyView:(id)arg1;
- (void)setMayExtendBeyondWindowHorizontally:(BOOL)arg1;
- (void)setMayExtendBeyondWindowVertically:(BOOL)arg1;
- (void)setObservationInfo:(void *)arg1;
- (void)setPositioningView:(BOOL)arg1;
- (void)setResizesLayoutHorizontally:(BOOL)arg1;
- (void)setResizesLayoutVertically:(BOOL)arg1;
- (void)setResizesViewHorizontally:(BOOL)arg1;
- (void)setResizesViewVertically:(BOOL)arg1;
- (void)setResizesWindowHorizontally:(BOOL)arg1;
- (void)setResizesWindowVertically:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1 element:(id)arg2;
@property(retain, nonatomic) NSCursor *uniqueCursor; // @synthesize uniqueCursor=_uniqueCursor;
@property(nonatomic) NSViewController *vC; // @synthesize vC=_vC;
@property(nonatomic) long long withinDrawRect; // @synthesize withinDrawRect=_withinDrawRect;
- (void)structureChanged;
- (struct NSObject *)tabCandidateFollowing:(struct NSObject *)arg1;
- (struct NSObject *)tabCandidatePreceding:(struct NSObject *)arg1;
- (void)updateData;
- (void)updateForSelection;
- (void)windowDidUpdate:(id)arg1;

@end
