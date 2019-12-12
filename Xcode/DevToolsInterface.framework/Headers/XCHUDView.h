//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSTimer;

@interface XCHUDView : NSView
{
    double _fadeTo;
    NSTimer *_lastTimer;
    double minAlpha;
    double maxAlpha;
    double inactiveAlpha;
    double activeAlpha;
}

- (void)drawRect:(struct CGRect)arg1;
- (void)fadeHUD:(id)arg1;
- (void)fadeTo:(double)arg1;
- (void)hide;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (id)roundedPathForRect:(struct CGRect)arg1 returnCap:(BOOL)arg2;
- (void)show;
- (void)stopTimers;

@end

