//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSButtonCell, NSColor, NSHashTable, NSImage;

@interface PBXViewListView : NSView
{
    NSButtonCell *_headerCell;
    double _headingHeight;
    double _subviewLeftMargin;
    double _gutterThickness;
    NSHashTable *_expandedSubviews;
    id _delegate;
    NSColor *_backgroundColor;
    NSColor *_alternateBackgroundColor;
    struct {
        unsigned int allowsSubviewSelection:1;
        unsigned int ignoreSubviewFrameChanges:1;
        unsigned int delegateWantsShouldSelectSubview:1;
        unsigned int delegateWantsShouldMoveSubview:1;
        unsigned int delegateWantsDeleteSubviews:1;
        unsigned int delegateWantsMoveSubview:1;
        unsigned int delegateWantsBackgroundColor:1;
        unsigned int delegateWantsAlternateBackgroundColor:1;
        unsigned int isDeallocating:1;
        unsigned int ignoreSubviewAdditionAndRemoval:1;
        unsigned int drawsHeaderBackground:1;
        unsigned int drawsBackground:1;
        unsigned int drawsStripes:1;
        unsigned int logsSubviewLayout:1;
        unsigned int RESERVED:19;
    } _vlvFlags;
    unsigned long long _disableSubviewLayout;
    unsigned long long _needsSubviewLayoutFromIndex;
    unsigned long long _selectedSubviewIndex;
    SEL _viewRepresentedObjectSelector;
    SEL _viewRepresentedObjectHeadingStringSelector;
    NSView *_subviewBeingMousetracked;
    unsigned long long _draggedSubviewIndex;
    double _draggedDistance;
    NSImage *_dragCacheImage;
    struct CGPoint _dragCachePoint;
}

+ (void)initialize;
- (struct CGRect)_borderRectOfSubviewAtIndex:(unsigned long long)arg1;
- (void)_collapseTrackedSubview:(id)arg1;
- (struct CGRect)_dragRectOfSubviewAtIndex:(unsigned long long)arg1;
- (void)_expandTrackedSubview:(id)arg1;
- (id)_headerCell;
- (struct CGRect)_headingRectOfSubviewAtIndex:(unsigned long long)arg1;
- (unsigned long long)_indexOfSubviewClosestToSubviewAtIndex:(unsigned long long)arg1 whenMoved:(double)arg2;
- (void)_layoutSubviewsFromIndex:(unsigned long long)arg1;
- (void)_layoutSubviewsFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ignoringSubview:(id)arg3;
- (void)_layoutSubviewsIfNeeded;
- (double)_locationOfSubviewAtIndex:(unsigned long long)arg1;
- (id)_nextEventAfterMovementThreshold:(double)arg1 fromPoint:(struct CGPoint)arg2;
- (struct _NSRange)_rangeOfSubviewsFromMinY:(double)arg1 toMaxY:(double)arg2;
- (void)_reorderSubviewAtIndex:(unsigned long long)arg1 withEvent:(id)arg2;
- (void)_startIgnoringSubviewAdditionAndRemoval;
- (void)_stopIgnoringSubviewAdditionAndRemoval;
- (BOOL)_userCanMoveSubviewAtIndex:(unsigned long long)arg1;
- (BOOL)_userCanSelectSubviewAtIndex:(unsigned long long)arg1;
- (BOOL)acceptsFirstResponder;
- (void)addSubview:(id)arg1;
- (BOOL)allowsSubviewSelection;
- (id)alternateBackgroundColor;
- (void)awakeFromNib;
- (id)backgroundColor;
- (void)collapseSubview:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)delete:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)disableSubviewLayout;
- (void)drawDragRectOfSubview:(id)arg1 atIndex:(unsigned long long)arg2 inRect:(struct CGRect)arg3;
- (void)drawHeadingOfSubview:(id)arg1 atIndex:(unsigned long long)arg2 inRect:(struct CGRect)arg3;
- (void)drawInsertionBarAtIndex:(unsigned long long)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawSelectionBorderOfSubview:(id)arg1 atIndex:(unsigned long long)arg2 inRect:(struct CGRect)arg3;
- (BOOL)drawsBackground;
- (BOOL)drawsHeaderBackground;
- (BOOL)drawsStripes;
- (void)expandSubview:(id)arg1;
- (void)finalize;
- (double)gutterThickness;
- (double)headingHeight;
- (unsigned long long)indexOfSelectedSubview;
- (unsigned long long)indexOfSubview:(id)arg1;
- (id)indicesOfExpandedSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)insertSubview:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct CGRect)insertionBarRectAtIndex:(unsigned long long)arg1;
- (BOOL)isFlipped;
- (BOOL)isOpaque;
- (BOOL)isSubviewExpanded:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)layoutSubviews;
- (void)mouseDown:(id)arg1;
- (void)moveSubviewAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfSubviews;
- (struct CGRect)rectOfSubviewAtIndex:(unsigned long long)arg1;
- (void)reenableSubviewLayout;
- (void)removeSubviewAtIndex:(unsigned long long)arg1;
- (void)resetCursorRects;
- (void)selectSubviewAtIndex:(unsigned long long)arg1;
- (void)setAllowsSubviewSelection:(BOOL)arg1;
- (void)setAlternateBackgroundColor:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDrawsBackground:(BOOL)arg1;
- (void)setDrawsHeaderBackground:(BOOL)arg1;
- (void)setDrawsStripes:(BOOL)arg1;
- (void)setExpandedSubviewsFromArrayOfIndices:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setGutterThickness:(double)arg1;
- (void)setHeadingHeight:(double)arg1;
- (void)setLogsSubviewLayout:(BOOL)arg1;
- (void)setSubviewLeftMargin:(double)arg1;
- (void)setViewRepresentedObjectHeadingStringSelector:(SEL)arg1;
- (void)setViewRepresentedObjectSelector:(SEL)arg1;
- (id)subviewAtIndex:(unsigned long long)arg1;
- (void)subviewFrameChanged:(id)arg1;
- (double)subviewLeftMargin;
- (BOOL)validateMenuItem:(id)arg1;
- (SEL)viewRepresentedObjectHeadingStringSelector;
- (SEL)viewRepresentedObjectSelector;
- (void)willRemoveSubview:(id)arg1;

@end

