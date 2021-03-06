//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor;

@interface DVTColorSwatchView : NSView
{
    BOOL _useProportionalBorderWidth;
    BOOL _circularStyle;
    BOOL _drawsBackground;
    BOOL _drawsBorder;
    BOOL _selected;
    NSColor *_color;
    double _proportionalInset;
}

- (void).cxx_destruct;
- (void)_drawCircularStyle;
- (void)_drawRectangleStyle;
@property(nonatomic) BOOL circularStyle; // @synthesize circularStyle=_circularStyle;
@property(retain, nonatomic) NSColor *color; // @synthesize color=_color;
@property(readonly) NSColor *colorForDrawing;
- (void)drawRect:(struct CGRect)arg1;
@property(nonatomic) BOOL drawsBackground; // @synthesize drawsBackground=_drawsBackground;
@property(nonatomic) BOOL drawsBorder; // @synthesize drawsBorder=_drawsBorder;
- (void)dvt_colorSwatchView_common_init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) double proportionalInset; // @synthesize proportionalInset=_proportionalInset;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(nonatomic) BOOL useProportionalBorderWidth; // @synthesize useProportionalBorderWidth=_useProportionalBorderWidth;

@end

