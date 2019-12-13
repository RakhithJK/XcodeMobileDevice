//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/PBXReference.h>

#import <DevToolsCore/XCCompatibilityChecking-Protocol.h>

@class NSMutableArray;

@interface PBXGroup : PBXReference <XCCompatibilityChecking>
{
    NSMutableArray *_children;
    BOOL _didScmStatus;
}

+ (id)archivableRelationships;
+ (id)groupWithName:(id)arg1;
+ (id)groupWithName:(id)arg1 path:(id)arg2;
- (void)_addChildrenOfFolder:(id)arg1 toList:(id)arg2;
- (id)_availableNameBasedOn:(id)arg1;
- (id)_insertRefOfClass:(Class)arg1 withName:(id)arg2 forFile:(id)arg3 ofFileType:(id)arg4 withFileProperties:(id)arg5 atIndex:(long long)arg6;
- (id)_items;
- (void)_removeItemFromChildrenOnly:(id)arg1;
- (void)_setChildren:(id)arg1;
- (void)_setItems:(id)arg1;
- (BOOL)acceptsItem:(id)arg1;
- (id)addFiles:(id)arg1 atIndex:(long long)arg2 copy:(BOOL)arg3 createGroupsRecursively:(BOOL)arg4;
- (id)addFiles:(id)arg1 copy:(BOOL)arg2 createGroupsRecursively:(BOOL)arg3;
- (void)addItem:(id)arg1;
- (void)addItems:(id)arg1;
- (id)addItems:(id)arg1 atIndex:(long long)arg2 copy:(BOOL)arg3 createGroupsRecursively:(BOOL)arg4;
- (id)addItems:(id)arg1 copy:(BOOL)arg2 createGroupsRecursively:(BOOL)arg3;
- (BOOL)allowsEditingOfChildren;
- (BOOL)allowsSubgroups;
- (unsigned long long)assignFileEncoding:(unsigned long long)arg1 onlyIfUnspecified:(BOOL)arg2;
- (void)awakeFromPListUnarchiver:(id)arg1;
- (id)buildConfigurationList;
- (id)cachedPropertyInfoContextForConfigurationNamed:(id)arg1;
- (int)changeMask;
- (id)children;
- (BOOL)containsItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 getUnretainedObjectMappings:(id *)arg2;
- (id)createNewGroupAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (BOOL)deleteFromProjectAndDisk:(BOOL)arg1;
- (id)destinationGroupForInsertion;
- (void)didAddItem:(id)arg1;
- (void)didMoveItem:(id)arg1 toGroup:(id)arg2;
- (void)didRemoveItem:(id)arg1;
- (BOOL)didScmStatus;
- (void)findFeaturesInUseAndAddToSet:(id)arg1 usingPathPrefix:(id)arg2;
- (void)flattenItemsIntoArray:(id)arg1;
- (void)flattenItemsIntoHeaderFileEnumeratorArray:(id)arg1;
- (void)flattenItemsIntoRezSearchPathFileEnumeratorArray:(id)arg1;
- (id)groupEnumerator;
- (BOOL)hasUnspecifiedFileEncodings;
- (unsigned long long)indexOfItem:(id)arg1;
- (id)initWithName:(id)arg1 path:(id)arg2 sourceTree:(id)arg3;
- (id)innerDescription;
- (id)innerLongDescriptionWithIndentLevel:(unsigned long long)arg1;
- (id)insertFiles:(id)arg1 atIndex:(long long)arg2 copy:(BOOL)arg3 createGroupsRecursively:(BOOL)arg4;
- (void)insertInChildren:(id)arg1;
- (void)insertInChildren:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertInFileReferences:(id)arg1;
- (void)insertInFileReferences:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertInGroups:(id)arg1;
- (void)insertInGroups:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertItems:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)insertItems:(id)arg1 atIndex:(long long)arg2 copy:(BOOL)arg3 createGroupsRecursively:(BOOL)arg4;
- (void)invalidateAbsolutePathCache;
- (BOOL)isAncestorOfItem:(id)arg1;
- (BOOL)isGroup;
- (BOOL)isLeaf;
- (id)itemAtIndex:(unsigned long long)arg1;
- (unsigned long long)itemCount;
- (id)itemNamed:(id)arg1;
- (void)moveObject:(id)arg1 toIndex:(unsigned long long)arg2;
- (id)name;
- (id)objectSpecifier;
- (int)propertyDefinitionLevel;
- (void)pruneReferencesBySendingBooleanSelector:(SEL)arg1 toObject:(id)arg2 withContext:(void *)arg3;
- (id)relevantToolSpecifications;
- (id)relevantToolSpecificationsForConfigurationNamed:(id)arg1;
- (id)relevantToolSpecificationsForConfigurationsNamed:(id)arg1;
- (void)removeFromChildrenAtIndex:(unsigned long long)arg1;
- (void)removeFromFileReferencesAtIndex:(unsigned long long)arg1;
- (void)removeFromGroupsAtIndex:(unsigned long long)arg1;
- (void)removeItem:(id)arg1;
- (void)replaceInChildren:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)replaceInFileReferences:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)replaceInGroups:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setContainer:(id)arg1;
- (void)setDidScmStatus:(BOOL)arg1;
- (id)valueInChildrenAtIndex:(unsigned long long)arg1;
- (void)willAddItem:(id)arg1;
- (void)willMoveItem:(id)arg1 toGroup:(id)arg2;
- (void)willRemoveItem:(id)arg1;

@end
