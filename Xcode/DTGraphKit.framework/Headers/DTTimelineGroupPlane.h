//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DTGraphKit/DTTimelinePlane.h>

@class CALayer, DTTimelineGroupPlaneLayoutManager, NSArray;

@interface DTTimelineGroupPlane : DTTimelinePlane
{
    NSArray *_subplanes;
    DTTimelineGroupPlaneLayoutManager *_layoutManager;
    BOOL _expanded;
    long long _layoutMode;
    double _interplanePadding;
    long long _type;
    DTTimelinePlane *_representativePlane;
    CALayer *__disclosureTriangleLayer;
}

+ (id)_grayTriangle;
+ (id)_whiteTriangle;
- (void).cxx_destruct;
- (BOOL)_containsPlane:(id)arg1;
- (void)_contextChanged;
- (id)_decoratedPlanes;
- (id)_description:(long long)arg1;
- (void)_didMoveOutOfView;
- (BOOL)_disclosureTriangleIsAboveASelectedPlane;
@property(readonly, nonatomic) CALayer *_disclosureTriangleLayer; // @synthesize _disclosureTriangleLayer=__disclosureTriangleLayer;
- (BOOL)_drawBordersAsSelected;
- (BOOL)_drawBottomBorderAsSelected;
- (BOOL)_drawTopBorderAsSelected;
- (void)_enumeratePlanesWithStopPtr:(char *)arg1 block:(CDUnknownBlockType)arg2;
- (void)_enumeratesPlanesHavingKey:(id)arg1 stopPtr:(char *)arg2 block:(CDUnknownBlockType)arg3;
- (long long)_indexOfRepresentativePlane;
- (void)_invalidateLabel;
- (void)_invalidateTimeRange:(struct XRTimeRange)arg1;
- (BOOL)_isGroupPlane;
- (id)_labelLayer;
- (void)_layoutLabelLayerAtPlanePosition:(struct CGPoint)arg1 planeSize:(struct CGSize)arg2 centerLabelWithin:(double)arg3;
- (id)_planesUnderPoint:(struct CGPoint)arg1;
- (BOOL)_pointIntersectsDisclosureGlyph:(struct CGPoint)arg1 groupPlane:(out id *)arg2;
- (void)_populatePlaneLayoutMap:(unordered_map_c1fbcd3c *)arg1 offsetFromTop:(double)arg2;
- (void)_removeFromContext;
- (void)_repositionDisclosureTriangle;
- (id)_selectedDisclosureImage;
- (void)_setContext:(struct TimelineViewContext *)arg1 layer:(id)arg2 anchorPoint:(struct CGPoint)arg3;
- (void)_setExpanded:(BOOL)arg1;
- (BOOL)_setHeight:(double)arg1;
- (void)_setPosition:(struct CGPoint)arg1 size:(struct CGSize)arg2;
- (void)_setRepresentativePlane:(id)arg1;
- (void)_setSubplanes:(id)arg1;
- (void)_setType:(long long)arg1;
- (void)_updateIconAndLabelLayerZPosition;
- (void)_updateSelectionColors;
- (void)_updateSubplaneHiddenState;
- (void)_willMoveIntoView;
@property(readonly, nonatomic) struct CGPoint accessibilityActivationPoint;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (id)description;
@property(readonly, nonatomic) BOOL expanded; // @synthesize expanded=_expanded;
- (double)height;
- (id)initWithHeight:(double)arg1;
@property(nonatomic) double interplanePadding; // @synthesize interplanePadding=_interplanePadding;
@property(nonatomic) long long layoutMode; // @synthesize layoutMode=_layoutMode;
@property(readonly, nonatomic) __weak DTTimelinePlane *representativePlane; // @synthesize representativePlane=_representativePlane;
- (void)setBaseZPosition:(double)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setTimelineGraph:(id)arg1;
@property(readonly, nonatomic) NSArray *subplanes; // @synthesize subplanes=_subplanes;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;

@end
