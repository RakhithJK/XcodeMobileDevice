//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEContainerItem.h>

#import <IDEFoundation/IDEStructureEditing-Protocol.h>

@class DVTCopyOnWriteMutableArray, DVTFilePath, IDEContainer, NSArray, NSMutableArray, NSString;

@interface IDEGroup : IDEContainerItem <IDEStructureEditing>
{
    IDEContainer *_container;
    DVTFilePath *_resolvedFilePath;
    DVTCopyOnWriteMutableArray *_subitems;
    BOOL _subitemsAreValid;
    BOOL _pendingAsynchronousUpdate;
    int _sourceControlLocalStatus;
    int _sourceControlServerStatus;
    unsigned long long _conflictStateForUpdateOrMerge;
    NSString *_name;
}

+ (Class)_fileReferenceClassForFileReference:(id)arg1;
+ (Class)_fileReferenceClassForSubitems;
+ (id)_fileReferenceWithFileURL:(id)arg1 targetGroup:(id)arg2;
+ (Class)_groupClassForGroup:(id)arg1;
+ (Class)_groupClassForSubitems;
+ (id)_groupForFolderURL:(id)arg1 targetGroup:(id)arg2;
+ (BOOL)_shouldCreateContainerItemForFileURL:(id)arg1 isFolder:(char *)arg2;
+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
+ (BOOL)automaticallyNotifiesObserversOfConflictStateForUpdateOrMerge;
+ (BOOL)automaticallyNotifiesObserversOfSourceControlLocalStatus;
+ (BOOL)automaticallyNotifiesObserversOfSourceControlServerStatus;
+ (BOOL)automaticallyNotifiesObserversOfSubitems;
+ (id)keyPathsForValuesAffectingConflictStateForUpdateOrMerge;
+ (id)keyPathsForValuesAffectingSourceControlLocalStatus;
+ (id)keyPathsForValuesAffectingSourceControlServerStatus;
- (void).cxx_destruct;
- (BOOL)_acceptsItem:(id)arg1;
- (id)_availableNameBasedOn:(id)arg1;
- (void)_copyAndInsertSubitems:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_didSetContainer;
- (void)_invalidateComputedSourceControlStatus;
- (void)_invalidateResolvedFilePath;
- (BOOL)_isSubitemOfItem:(id)arg1;
- (void)_setConflictStateForUpdateOrMerge:(unsigned long long)arg1;
- (void)_setConflictStateForUpdateOrMergeNeedsUpdate;
- (void)_setContainer:(id)arg1;
- (void)_setSourceControlLocalStatus:(int)arg1;
- (void)_setSourceControlLocalStatusNeedsUpdate;
- (void)_setSourceControlServerStatus:(int)arg1;
- (void)_setSourceControlServerStatusNeedsUpdate;
- (void)_setSubitems:(id)arg1;
- (BOOL)_structureEditRemoveSubitemsShouldCloseDocumentsUnderPathWithoutSaving;
- (id)_subgroupNamed:(id)arg1;
- (id)_subitems;
- (void)_takeConfigurationFromGroup:(id)arg1;
- (BOOL)_willSetContainer:(id)arg1;
- (unsigned long long)aggregateSourceControlConflictStatus;
- (int)aggregateSourceControlLocalStatus;
- (int)aggregateSourceControlServerStatus;
- (BOOL)allowRemovingContainerGroup;
- (BOOL)allowUserModificationOfSubitems;
- (BOOL)canStructureEditInsertFileURLs:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)canStructureEditInsertSubitems:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)canStructureEditName;
- (BOOL)canStructureEditRemoveSubitemsAtIndexes:(id)arg1;
- (BOOL)canStructureEditSortSubitemsAtIndexes:(id)arg1 byNameOrByType:(BOOL)arg2;
- (void)changePath:(id)arg1 resolutionStrategies:(id)arg2;
- (id)computedSubitemsWithOldSubitems:(id)arg1;
- (unsigned long long)conflictStateForUpdateOrMerge;
- (id)container;
- (unsigned long long)countOfGroupSubitems;
- (BOOL)createNewSubgroupAtIndex:(unsigned long long)arg1;
- (void)debugPrintInnerStructure;
- (void)dvt_addObject:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_awakeFromXMLUnarchiver:(id)arg1;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (id)ideModelObjectTypeIdentifier;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithPath:(id)arg1 resolutionStrategies:(id)arg2;
- (void)insertGroupSubitems:(id)arg1 atIndexes:(id)arg2;
- (void)insertObject:(id)arg1 inGroupSubitemsAtIndex:(unsigned long long)arg2;
- (void)invalidateComputedSubitems;
@property(readonly, getter=isLocationKnown) BOOL locationKnown;
@property(readonly) NSMutableArray *mutableSubitems;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)objectInGroupSubitemsAtIndex:(unsigned long long)arg1;
- (void)primitiveInvalidate;
- (void)removeGroupSubitemsAtIndexes:(id)arg1;
- (void)removeObjectFromGroupSubitemsAtIndex:(unsigned long long)arg1;
- (id)resolvedFilePath;
- (void)setNameFromUTF8String:(const char *)arg1 fromXMLUnarchiver:(id)arg2;
- (int)sourceControlLocalStatus;
- (int)sourceControlServerStatus;
- (id)structureEditInsertFileURLs:(id)arg1 atIndex:(unsigned long long)arg2 createGroupsForFolders:(BOOL)arg3;
- (id)structureEditInsertSubitems:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)structureEditRemoveSubitemsAtIndexes:(id)arg1 error:(id *)arg2;
- (BOOL)structureEditRemoveSubitemsPreflightForIndexes:(id)arg1 error:(id *)arg2;
- (BOOL)structureEditSetName:(id)arg1 inContext:(id)arg2;
- (BOOL)structureEditSortSubitemsAtIndexes:(id)arg1 byNameOrByType:(BOOL)arg2;
@property(readonly) NSArray *subitems;
@property(readonly) BOOL subitemsAreComputed;
@property(readonly) BOOL subitemsAreEditable;

@end

