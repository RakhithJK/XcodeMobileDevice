//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSFont, NSImage, NSString;

@interface PBXTitleBannerView : NSView
{
    NSString *_title;
    NSFont *_font;
    NSImage *_image;
    unsigned int _borderStyle:16;
    unsigned int _drawsBackground:1;
    unsigned int _areRectangesValid:1;
    struct CGRect _titleRect;
    struct CGRect _imageRect;
}

- (void)_calculateRectangles;
- (id)_titleAttributes;
- (int)borderStyle;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)drawsBackground;
- (id)font;
- (id)image;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (void)setBorderStyle:(int)arg1;
- (void)setDrawsBackground:(BOOL)arg1;
- (void)setFont:(id)arg1;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setImage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end

