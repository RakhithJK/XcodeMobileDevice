//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface XCDotView : NSView
{
    long long _tag;
    BOOL _inside;
    int _type;
}

+ (double)controlDimension;
- (void)_checkDataTipEvent:(id)arg1;
- (void)addAction:(SEL)arg1 withTarget:(id)arg2 withImage:(id)arg3 withLabel:(id)arg4;
- (void)addSubview:(id)arg1;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isHighlighted;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (void)viewDidMoveToWindow;

@end

