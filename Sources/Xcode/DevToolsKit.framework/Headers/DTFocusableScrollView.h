//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSScrollView.h>

@interface DTFocusableScrollView : NSScrollView
{
    BOOL drawsFocusRing;
}

- (void)drawRect:(struct CGRect)arg1;
- (BOOL)drawsFocusRing;
- (void)setDrawsFocusRing:(BOOL)arg1;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setNilValueForKey:(id)arg1;
- (void)viewWillDraw;

@end
