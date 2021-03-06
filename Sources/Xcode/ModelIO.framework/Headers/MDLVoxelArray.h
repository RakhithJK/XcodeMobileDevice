//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ModelIO/MDLObject.h>

@interface MDLVoxelArray : MDLObject
{
    struct unordered_map<unsigned long long, int, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, int>>> _voxels;
    // Error parsing type: {?="minimumExtent""maximumExtent"}, name: _extent
    // Error parsing type: {MDLAABB="maxBounds""minBounds"}, name: _bounds
    float _voxelExtent;
    struct MortonCode mortonCoder;
    struct unique_ptr<ModelIO::Octree, std::__1::default_delete<ModelIO::Octree>> _octreeData;
    BOOL _levelSet;
    float _interiorThickness;
    float _exteriorThickness;
    // Error parsing type: , name: _originatingOffset
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct boundingBox;
- (vector_3203cf93)boxesPerLayer;
- (id)coarseMesh;
- (id)coarseMeshUsingAllocator:(id)arg1;
- (id)coarseVoxelMeshWithStyle:(unsigned long long)arg1;
- (void)convertToSignedShellField;
@property(readonly, nonatomic) unsigned long long count;
- (void)differenceWithVoxels:(id)arg1;
- (void)dilateNarrowBandInteriorWidthTo:(float)arg1 AndExteriorWidthTo:(float)arg2;
- (void)erodeNarrowBandInteriorWidthTo:(float)arg1 AndExteriorWidthTo:(float)arg2;
-     // Error parsing type: 32@0:816, name: indexOfSpatialLocation:
- (id)init;
- (id)initWithAsset:(id)arg1 divisions:(int)arg2 interiorNBWidth:(float)arg3 exteriorNBWidth:(float)arg4 patchRadius:(float)arg5;
- (id)initWithAsset:(id)arg1 divisions:(int)arg2 interiorShells:(int)arg3 exteriorShells:(int)arg4 patchRadius:(float)arg5;
- (id)initWithAsset:(id)arg1 divisions:(int)arg2 patchRadius:(float)arg3;
- (id)initWithData:(id)arg1 boundingBox:(struct)arg2 voxelExtent:(float)arg3;
- (void)intersectWithVoxels:(id)arg1;
@property(readonly, nonatomic) BOOL isValidSignedShellField;
- (id)meshUsingAllocator:(id)arg1;
- (void)recalculateExtents;
@property(nonatomic) float shellFieldExteriorThickness; // @synthesize shellFieldExteriorThickness=_exteriorThickness;
@property(nonatomic) float shellFieldInteriorThickness; // @synthesize shellFieldInteriorThickness=_interiorThickness;
- (void)setVoxelAtIndex: /* Error: Ran out of types for this method. */;
- (void)setVoxelsForMesh:(id)arg1 divisions:(int)arg2 interiorNBWidth:(float)arg3 exteriorNBWidth:(float)arg4 patchRadius:(float)arg5;
- (void)setVoxelsForMesh:(id)arg1 divisions:(int)arg2 interiorShells:(int)arg3 exteriorShells:(int)arg4 patchRadius:(float)arg5;
- (void)setVoxelsForMesh:(id)arg1 divisions:(int)arg2 patchRadius:(float)arg3;
-     // Error parsing type: 32@0:816, name: spatialLocationOfIndex:
- (void)unionWithVoxels:(id)arg1;
- (struct)voxelBoundingBoxAtIndex: /* Error: Ran out of types for this method. */;
- (BOOL)voxelExistsAtIndex:(BOOL)arg1 allowAnyX:(BOOL)arg2 allowAnyY:(BOOL)arg3 allowAnyZ:(BOOL)arg4 allowAnyShell: /* Error: Ran out of types for this method. */;
@property(readonly, nonatomic) struct voxelIndexExtent; // @synthesize voxelIndexExtent=_extent;
- (id)voxelIndices;
- (id)voxelsWithinExtent:(struct)arg1;

@end

