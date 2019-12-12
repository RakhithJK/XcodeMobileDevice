//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSImageView.h>

#import <DevToolsInterface/XCProgressControl-Protocol.h>

@class NSArray, _XCProgressIndicatorHelper;

@interface XCProgressIndicator : NSImageView <XCProgressControl>
{
    double _doubleValue;
    double _minValue;
    double _maxValue;
    double _animationDelay;
    BOOL _isIndeterminate;
    BOOL _isDisplayedWhenStopped;
    long long _numberOfImages;
    long long _previousValueIndex;
    long long _currentValueIndex;
    long long _minMaxDelta;
    NSArray *_images;
    _XCProgressIndicatorHelper *_helper;
    BOOL _openActivityViewer;
}

- (void)_reconfigure;
- (void)_redraw;
- (void)_tickProgressForward;
- (double)animationDelay;
- (void)clearHelper;
- (void)dealloc;
- (double)doubleValue;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isDisplayedWhenStopped;
- (BOOL)isIndeterminate;
- (double)maxValue;
- (double)minValue;
- (void)mouseDown:(id)arg1;
- (BOOL)openActivityViewer;
- (void)setAnimationDelay:(double)arg1;
- (void)setDisplayedWhenStopped:(BOOL)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setIndeterminate:(BOOL)arg1;
- (void)setMaxValue:(double)arg1;
- (void)setMinValue:(double)arg1;
- (void)setOpenActivityViewer:(BOOL)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setUsesThreadedAnimation:(BOOL)arg1;
- (void)sizeToFit;
- (void)startAnimation:(id)arg1;
- (void)stopAnimation:(id)arg1;
- (unsigned long long)style;
- (BOOL)usesThreadedAnimation;
- (void)viewDidMoveToWindow;

@end

