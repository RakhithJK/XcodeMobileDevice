//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/XCElementDisplay.h>

@class NSColor, NSImage;

@interface XCElementDisplayFillerImage : XCElementDisplay
{
    NSImage *_fillerImage;
    NSColor *_foregroundColor;
}

- (void)dealloc;
- (void)displayer:(struct NSObject *)arg1 drawBackground:(struct CGRect)arg2 forFrame:(struct CGRect)arg3;
- (id)fillerImage;
- (id)foregroundColor;
- (id)init;
- (void)setFillerImage:(id)arg1;
- (void)setForegroundColor:(id)arg1;

@end

