//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSBox.h>

@class NSColor, NSProgressIndicator;

@interface _PBXFileNavigatorProgressView : NSBox
{
    NSProgressIndicator *_progress;
    NSColor *_background;
}

- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 backgroundColor:(id)arg2;
- (BOOL)isOpaque;
- (void)setProgressPercent:(double)arg1;

@end

