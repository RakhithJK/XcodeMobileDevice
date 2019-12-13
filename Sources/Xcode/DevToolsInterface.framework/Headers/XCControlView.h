//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <DevToolsInterface/XCLayoutContraints-Protocol.h>

@class NSColor;
@protocol XCLayout;

@interface XCControlView : NSView <XCLayoutContraints>
{
    id <XCLayout> _layout;
    long long _layoutLockCount;
    struct CGRect _lastLiveResizeRect;
    NSColor *_bgColor;
    BOOL _drawsBackground;
}

- (void)_recomputeSize;
- (void)_viewDidChangeShape:(id)arg1;
- (void)addAllSubviews:(id)arg1;
- (id)backgroundColor;
- (struct CGSize)bestSize;
- (void)dealloc;
- (void)didAddSubview:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)drawsBackground;
- (void)forceLayoutOfViews:(id)arg1;
- (BOOL)isLayoutLocked;
- (struct CGRect)lastRectDuringLiveResize;
- (id)layout;
- (void)layoutViews:(id)arg1;
- (BOOL)lockoutLayout:(BOOL)arg1;
- (struct CGSize)maxSize;
- (struct CGSize)minSize;
- (void)removeAllSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setDrawsBackground:(BOOL)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setLayout:(id)arg1;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;
- (void)willRemoveSubview:(id)arg1;

@end
