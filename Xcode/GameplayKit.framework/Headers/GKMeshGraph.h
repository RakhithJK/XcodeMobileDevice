//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameplayKit/GKGraph.h>

@class NSArray, NSMutableArray;

@interface GKMeshGraph : GKGraph
{
    NSMutableArray *_sourceObstacles;
    struct GKCMeshGraph *_cMeshGraph;
    Class _nodeClass;
}

+ (id)graphWithBufferRadius:(float)arg1 minCoordinate:maxCoordinate: /* Error: Ran out of types for this method. */;
+ (id)graphWithBufferRadius:(float)arg1 minCoordinate:(Class)arg2 maxCoordinate:nodeClass: /* Error: Ran out of types for this method. */;
- (void).cxx_destruct;
- (void)addObstacles:(id)arg1;
@property(readonly, nonatomic) float bufferRadius;
- (struct GKCMeshGraph *)cMeshGraph;
- (Class)classForGenericArgumentAtIndex:(unsigned long long)arg1;
- (void)connectNodeUsingObstacles:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBufferRadius:(float)arg1 minCoordinate:maxCoordinate: /* Error: Ran out of types for this method. */;
- (id)initWithBufferRadius:(float)arg1 minCoordinate:(Class)arg2 maxCoordinate:nodeClass: /* Error: Ran out of types for this method. */;
- (id)initWithCoder:(id)arg1;
- (struct GKCGraph *)makeCGraph;
- (BOOL)makeNodesFromTriangleCenters;
- (BOOL)makeNodesFromTriangleEdgeMidpoints;
- (BOOL)makeNodesFromTriangleVertices;
- (Class)nodeClass;
@property(readonly, nonatomic) NSArray *obstacles;
- (void)removeObstacles:(id)arg1;
- (void)setMakeNodesFromTriangleCenters:(BOOL)arg1;
- (void)setMakeNodesFromTriangleEdgeMidpoints:(BOOL)arg1;
- (void)setMakeNodesFromTriangleVertices:(BOOL)arg1;
@property(nonatomic) unsigned long long triangulationMode;
-     // Error parsing type: {GKTriangle=[3]}24@0:8Q16, name: triangleAtIndex:
@property(readonly, nonatomic) unsigned long long triangleCount;
- (void)triangulate;

@end

