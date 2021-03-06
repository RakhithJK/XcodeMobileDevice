//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSSliderCell.h>

@class NSGradient, NSImage;

@interface DYRangeSliderCell : NSSliderCell
{
    NSImage *_maxKnobImage;
    NSImage *_minKnobImage;
    struct CGRect _drawInFrame;
    struct DYRangeValue _origValue;
    double _trackOffset;
    float _cancelLimit;
    int _activeKnobPart;
    int _trackCount;
    BOOL _tracking;
    NSGradient *_gradient1;
    NSGradient *_gradient2;
    struct DYRangeValue _rangeValue;
}

+ (BOOL)prefersTrackingUntilMouseUp;
- (void).cxx_destruct;
- (void)_drawSelfWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)_knobRectForPart:(int)arg1 inFrame:(struct CGRect)arg2 flipped:(BOOL)arg3;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (BOOL)continueTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3;
- (id)description;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawKnob;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)getBarBounds:(struct CGRect)arg1 flipped:(BOOL)arg2;
- (id)init;
- (BOOL)isVertical;
- (struct CGRect)knobRectFlipped:(BOOL)arg1;
@property(nonatomic) double maxExtent;
@property(nonatomic) double minExtent;
- (id)objectValue;
@property(nonatomic) struct DYRangeValue rangeValue; // @synthesize rangeValue=_rangeValue;
- (BOOL)startTrackingAt:(struct CGPoint)arg1 inView:(id)arg2;
- (void)stopTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3 mouseIsUp:(BOOL)arg4;
- (id)stringValue;

@end

