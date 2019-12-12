//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DTAssetCategory, DTMutableOrderedSet, NSImage, NSString;

@interface DTAbstractAssetGroup : NSObject
{
    NSString *displayName;
    DTAbstractAssetGroup *parentGroup;
    DTMutableOrderedSet *childGroups;
    DTAssetCategory *category;
    BOOL displayNameIsEditable;
    NSImage *image;
}

+ (id)assetGroupWithPropertyListRepresentation:(id)arg1 assetCategory:(id)arg2 andIdentifiedAssets:(id)arg3;
+ (id)defaultImage;
- (void)addAsset:(id)arg1;
- (void)addChildGroup:(id)arg1;
- (id)ancestors;
- (id)assetCategory;
- (id)assets;
- (BOOL)assetsAreEditable;
- (id)assetsEnumerator;
- (void)buildPropertyListRepresentation:(id)arg1;
- (id)childGroups;
- (id)childGroupsEnumerator;
- (BOOL)containsAsset:(id)arg1;
- (void)dealloc;
- (id)deepAssets;
- (id)deepChildGroups;
- (long long)depth;
- (void)describeInto:(id)arg1 withDepth:(long long)arg2;
- (id)description;
- (void)didChangeAssets;
- (void)didChangeGroups;
- (id)displayName;
- (BOOL)displayNameIsEditable;
- (id)displayNamePath;
- (id)firstChildGroupWithDisplayName:(id)arg1;
- (BOOL)groupsAreEditable;
- (id)image;
- (long long)indexOfGroup:(id)arg1;
- (id)indexPath;
- (id)initWithDisplayName:(id)arg1 andAssetCategory:(id)arg2;
- (id)initWithPropertyListRepresentation:(id)arg1 assetCategory:(id)arg2 andIdentifiedAssets:(id)arg3;
- (void)insertAsset:(id)arg1 atIndex:(long long)arg2;
- (void)insertChildGroup:(id)arg1 atIndex:(long long)arg2;
- (BOOL)isLeafGroup;
- (id)lineage;
- (long long)numberOfAssets;
- (long long)numberOfChildGroups;
- (id)parentGroup;
- (id)propertyListRepresentation;
- (void)removeAllAssets;
- (void)removeAllGroups;
- (void)removeAsset:(id)arg1;
- (void)removeChildGroup:(id)arg1;
- (void)setChildGroups:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setDisplayNameIsEditable:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (void)setParentGroup:(id)arg1;
- (void)willChangeAssets;
- (void)willChangeGroups;

@end

