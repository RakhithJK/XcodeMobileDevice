//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsKit/DTAbstractAssetGroup.h>

@class NSDictionary, NSPredicate;

@interface DTSmartAssetGroup : DTAbstractAssetGroup
{
    NSPredicate *predicate;
    NSDictionary *intermediatePredicateRepresentation;
}

+ (id)defaultImage;
- (id)assets;
- (void)buildPropertyListRepresentation:(id)arg1;
- (id)canidateAssets;
- (void)canidateAssetsChanged:(id)arg1;
- (void)dealloc;
- (BOOL)groupsAreEditable;
- (id)initWithDisplayName:(id)arg1 andAssetCategory:(id)arg2;
- (id)initWithPropertyListRepresentation:(id)arg1 assetCategory:(id)arg2 andIdentifiedAssets:(id)arg3;
- (id)intermediateRepresentation;
- (id)predicate;
- (void)registerForNotifications;
- (void)setPredicate:(id)arg1 andIntermediateRepresentation:(id)arg2;

@end

