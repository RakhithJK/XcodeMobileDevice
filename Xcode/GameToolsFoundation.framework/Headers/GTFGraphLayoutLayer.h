//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface GTFGraphLayoutLayer : NSObject
{
    NSMutableArray *_layers;
    NSMutableDictionary *_layerMap;
}

- (void).cxx_destruct;
- (void)addNode:(id)arg1 layerIndex:(int)arg2;
- (void)arrangeXCoordAbove:(int)arg1 layerAbove:(int)arg2;
- (void)arrangeXCoordBelow:(int)arg1 layerBelow:(int)arg2;
- (void)arrangeXCoordIn:(int)arg1;
- (void)assignCoordinates;
- (double)avgPosX:(id)arg1;
- (int)barycenter:(id)arg1;
- (id)getConnectedTo:(id)arg1 layerIndex:(int)arg2;
- (int)getLayer:(id)arg1;
- (void)init:(int)arg1;
@property(retain) NSMutableDictionary *layerMap; // @synthesize layerMap=_layerMap;
@property(retain) NSMutableArray *layers; // @synthesize layers=_layers;
- (double)maxHeight:(id)arg1;
- (void)minimizeCrossings:(int)arg1 nextLayer:(int)arg2;
- (void)orderVertices;
- (void)setOrderedIndexes:(id)arg1;

@end

