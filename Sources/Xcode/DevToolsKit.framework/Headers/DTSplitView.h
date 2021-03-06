//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSNumber, NSString;

@interface DTSplitView : NSView
{
    NSString *autosaveName;
    long long resizingMode;
    double dividerThickness;
    NSNumber *minViewSizeComponent;
    BOOL vertical;
    BOOL layingOut;
    id delegate;
}

- (BOOL)acceptsFirstMouse:(id)arg1;
- (id)autosaveName;
- (void)dealloc;
- (double)defaultsBackedMinViewSizeComponent;
- (id)defaultsMinComponentKey;
- (id)delegate;
- (void)didAddSubview:(id)arg1;
- (id)dimpleImage;
- (struct CGRect)dimpleRect;
- (id)dividerCursor;
- (struct CGRect)dividerRect;
- (double)dividerThickness;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (BOOL)isValid;
- (BOOL)isVertical;
- (void)layoutFromDefaults;
- (void)layoutWithOldSize:(struct CGSize)arg1 andNewSize:(struct CGSize)arg2;
- (id)maxView;
- (double)minSizeForView:(id)arg1;
- (id)minView;
- (void)mouseDown:(id)arg1;
- (void)resetCursorRects;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (long long)resizingMode;
- (void)setAutosaveName:(id)arg1;
- (void)setDefaultsBackedMinViewSizeComponent:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDividerThickness:(double)arg1;
- (void)setMinViewFrame:(struct CGRect)arg1 andMaxViewFrame:(struct CGRect)arg2;
- (void)setMinViewSize:(struct CGSize)arg1 andMaxViewSize:(struct CGSize)arg2;
- (void)setResizingMode:(long long)arg1;
- (void)setSplitterPosition:(double)arg1;
- (void)setVertical:(BOOL)arg1;
- (double)splitterPosition;
- (void)splitterPositionMoved;
- (void)subviewDidResize:(id)arg1;
- (void)trackSplitterWithMouseDown:(id)arg1;
- (void)willRemoveSubview:(id)arg1;

@end

