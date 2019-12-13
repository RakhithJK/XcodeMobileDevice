//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DTGraphKit/DTBarGraph.h>

@class DTStacks, NSCache, NSMutableArray, NSMutableDictionary, NSTrackingArea;

@interface DTStackedBarGraph : DTBarGraph
{
    NSCache *_imageCache;
    DTStacks *_stacks;
    long long _calculatedYAxisWidth;
    NSTrackingArea *_trackingArea;
    NSMutableDictionary *_segmentsByXPos;
    NSMutableDictionary *_slicesByXPos;
    NSMutableArray *_stackPositions;
    double _atomicXSpacing;
}

- (void).cxx_destruct;
- (void)_addEntries:(id)arg1 toStacks:(id)arg2;
- (id)_allXAxisStackPositions;
- (void)_computeEntriesAndPositions;
- (id)_getStacksForModel:(id)arg1;
- (id)_imageOfBarForEntry:(id)arg1 withSize:(struct CGSize)arg2;
- (struct DTRealRange)_rangeOfSummedValuesForKeyPath:(id)arg1 inStacks:(id)arg2;
- (double)_scaleToFitValuesWithAxis:(struct DTRealRange)arg1;
- (double)_scaledHeightForValue:(double)arg1 inRect:(struct CGRect)arg2 forRange:(struct DTRealRange)arg3;
@property double atomicXSpacing; // @synthesize atomicXSpacing=_atomicXSpacing;
- (id)barSegmentsForXPosition:(id)arg1;
- (double)calculateHorizontalBorderBuffer;
- (double)calculateVerticalBorderBuffer;
- (struct CGRect)calculateXAxisBoundsWithinBounds:(struct CGRect)arg1;
- (struct CGRect)calculateYAxisBoundsWithinBounds:(struct CGRect)arg1;
- (void)clearCache;
- (void)dealloc;
- (id)divisionPositionsXAxis;
- (void)drawBackground:(struct CGRect)arg1;
- (void)drawBorder:(struct CGRect)arg1;
- (void)drawContent:(struct CGRect)arg1;
- (void)drawStacks:(id)arg1 rect:(struct CGRect)arg2;
- (void)drawXAxis:(struct CGRect)arg1;
- (BOOL)hasHorizontalAxisPosition;
- (BOOL)hasVerticalAxisPosition;
@property(readonly) double horizontalAxisPosition;
- (id)infoInEvent:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (unsigned long long)numberOfEntriesThatFitRect:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGRect)sliceRectForXPosition:(id)arg1;
- (void)updateTrackingAreas;
- (BOOL)validateModel:(id)arg1;
@property(readonly) double verticalAxisPosition;
- (void)viewDidMoveToSuperview;
- (void)viewWillDraw;

@end
