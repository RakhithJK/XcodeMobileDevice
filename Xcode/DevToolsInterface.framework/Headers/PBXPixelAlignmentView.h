//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface PBXPixelAlignmentView : NSView
{
    long long _xAdjustment;
    long long _yAdjustment;
    long long _vAdjustment;
    long long _hAdjustment;
}

- (BOOL)autoresizesSubviews;
- (id)init;
- (BOOL)isFlipped;
- (void)setAutoresizesSubviews:(BOOL)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setVAdjustment:(long long)arg1 setHAdjustment:(long long)arg2;
- (void)setXAdjustment:(long long)arg1 setYAdjustment:(long long)arg2;

@end

