//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>
#import <IDEKit/DVTTableCellViewLazyProperties-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, DVTStackBacktrace, IDEFileReference, IDENavigableItemCoordinator, NSArray, NSColor, NSImage, NSMutableArray, NSString;
@protocol IDENavigableItemDebugAreaDelegate, IDENavigableItemDebugBarDelegate;

@interface IDENavigableItem : NSObject <DVTTableCellViewLazyProperties, DVTInvalidation>
{
    int _retainCount;
    id _observationInfo;
    IDENavigableItemCoordinator *_coordinator;
    NSMutableArray *_childItems;
    NSArray *_arrangedChildItems;
    unsigned long long _changeCount;
    int _filterMatchGeneration;
    int _filterMatchesChildGeneration;
    struct {
        unsigned int _childItemsNeedsUpdate:1;
        unsigned int _invalidatingChildItems:1;
        unsigned int _debug_8061745_shouldCaptureInvalidationBacktrace:1;
        unsigned int _observersRegisteredWithOldOrPriorOption:1;
        unsigned int _isBeingForgotten:1;
        unsigned int _representedObjectConformsToInvalidation:1;
    } _ideniFlags;
    id _representedObject;
    IDENavigableItem *_parentItem;
}

+ (id)_allNavigableItemExtensions;
+ (id)_classInfoByModelObjectClass;
+ (id)_createExtraInfoObject;
+ (void)_customizeNewNavigableItemClass:(Class)arg1 forModelObjectClass:(Class)arg2 extension:(id)arg3;
+ (id)_dynamicSubclass_navigableItemExtraInfo;
+ (Class)_navigableItemClassForModelObject:(id)arg1;
+ (id)_navigableItemExtraInfo;
+ (id)_navigableItemWithRepresentedObject:(id)arg1 parent:(id)arg2 inCoordinator:(id)arg3;
+ (Class)_registerInfoForClass:(Class)arg1 withExtension:(id)arg2;
+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
+ (BOOL)automaticallyNotifiesObserversOfArrangedChildItems;
+ (BOOL)automaticallyNotifiesObserversOfParentItem;
+ (BOOL)automaticallyNotifiesObserversOfRepresentedObject;
+ (BOOL)automaticallyNotifiesObserversOf_forgetting;
+ (id)description;
+ (id)imageOfRepresentedObject:(id)arg1;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingArrangedChildItems;
+ (id)keyPathsForValuesAffectingIde_canStructureEditName;
+ (id)keyPathsForValuesAffecting_titleStyleForReferencedContentExistance;
+ (id)nameOfRepresentedObject:(id)arg1;
+ (id)navigableItemWithRepresentedObject:(id)arg1 coordinator:(id)arg2;
+ (id)representedExtension;
- (void).cxx_destruct;
- (BOOL)_alwaysBypassFilter;
- (unsigned long long)_changeCount;
- (BOOL)_checkInvalidItemsAndFillRootDict:(id)arg1 forItem:(id)arg2 errorOnInvalidItems:(BOOL)arg3 error:(id *)arg4;
- (id)_childItems;
- (id)_childRepresentedObjects;
- (void)_clearFilterMatch;
- (unsigned long long)_currentNumberOfArrangedChildItems;
- (void)_didChangeArrangedChildItems;
- (void)_didChangeChildItems;
- (void)_disposeInvalidatedChildItems;
- (void)_documentDidClose;
- (Class)_domainProvider;
- (void)_enableInvalidationBacktraceCapturing;
- (void)_fillItems:(id)arg1 fromNameDictionary:(id)arg2 withParent:(id)arg3 andChildren:(id)arg4;
- (id)_fillRootDict:(id)arg1 withItem:(id)arg2 isTerminus:(BOOL)arg3;
- (BOOL)_filterMatchesSelfOrAncestorForGeneration:(int)arg1;
- (BOOL)_filterMatchesSelfOrChildForGeneration:(int)arg1;
- (BOOL)_filterMatchingChildrenIsCurrentGeneration;
@property(nonatomic) BOOL _forgetting; // @dynamic _forgetting;
- (void)_incrementChangeCount;
- (void)_invalidateArrangedChildItems;
- (BOOL)_isDeallocating;
- (BOOL)_isWrappingDocumentFileReference;
- (id)_navigableItemForExternalDrag;
- (id)_navigableItemForNavigation;
- (id)_navigableItemWithName:(id)arg1 inArray:(id)arg2;
- (id)_reallyPrivateChildItems;
- (id)_refreshChildItemsAndReturnItemsToDispose;
- (void)_registerInNavigableItemByRepresentedObjectMap;
- (void)_removeFromNavigableItemByRepresentedObjectMap;
- (void)_resetChildItems;
- (void)_setArrangedChildItems:(id)arg1;
- (void)_setCoordinator:(id)arg1;
- (void)_setDomainProvider:(Class)arg1;
- (void)_setFilterMatch:(BOOL)arg1 forGeneration:(int)arg2;
- (void)_setHasChildFilteringMatchForGeneration:(int)arg1;
- (void)_setParentItem:(id)arg1;
- (void)_setRepresentedObject:(id)arg1;
- (BOOL)_shouldResetChildItemsOnDocumentClose;
- (int)_titleStyleForMissingContent;
- (int)_titleStyleForReferencedContentExistance;
- (BOOL)_tryRetain;
- (void)_updateMutableChildItems:(id)arg1 forChangeKind:(unsigned long long)arg2 atIndexes:(id)arg3;
- (void)_validateChildItems;
- (void)_willAccessChildItems;
- (void)_willChangeArrangedChildItems;
- (void)_willChangeChildItems;
@property(readonly, nonatomic) NSString *accessibleImageDescription;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (id)archivableRepresentation;
@property(readonly, nonatomic) NSArray *arrangedChildItems;
- (void)cacheValue:(id)arg1 forProperty:(id)arg2;
- (id)cachedValueForProperty:(id)arg1;
@property(readonly, nonatomic) NSArray *childItems;
- (id)childItemsToSearchForFindingDescendant:(id)arg1;
- (id)childNavigableItemsAtIndexes:(id)arg1;
- (id)childRepresentedObjects;
@property(readonly, nonatomic) DVTDocumentLocation *contentDocumentLocation;
- (id)contextualValueForProperty:(id)arg1;
- (id)coordinator;
- (BOOL)coordinatorFilteringShouldFilterChildItems;
- (unsigned long long)countOfChildNavigableItems;
@property(readonly) id <IDENavigableItemDebugAreaDelegate> debugAreaDelegate;
@property(readonly) id <IDENavigableItemDebugBarDelegate> debugBarDelegate;
- (id)descendantItemForRepresentedObject:(id)arg1;
- (id)descendantItemForRepresentedObject:(id)arg1 stopAtClass:(Class)arg2;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) DVTFileDataType *documentType;
@property(readonly, nonatomic) IDEFileReference *fileReference;
- (void)getChildNavigableItems:(id *)arg1 range:(struct _NSRange)arg2;
- (id)greatestDocumentAncestor;
@property(readonly, nonatomic) NSString *groupIdentifier;
- (BOOL)ide_canStructureEditName;
- (id)ide_inferredURLFromRepresentedObject;
- (id)identifierForChildItem:(id)arg1;
- (unsigned long long)indexOfChildItemForIdentifier:(id)arg1;
- (id)initWithRepresentedObject:(id)arg1;
- (void)invalidateChildItems;
@property(readonly, nonatomic) BOOL isDocumentNavigableItem;
@property(readonly, nonatomic) BOOL isEffectivelyValid;
@property(readonly, nonatomic, getter=isLeaf) BOOL leaf;
@property(readonly, nonatomic, getter=isMajorGroup) BOOL majorGroup;
@property(readonly, nonatomic) BOOL missingReferencedContentIsImportant;
@property(readonly, nonatomic) IDENavigableItemCoordinator *navigableItemCoordinator; // @synthesize navigableItemCoordinator=_coordinator;
- (unsigned long long)navigableItem_conflictStateForUpdateOrMerge;
- (id)navigableItemsForPersistentNameTree:(id)arg1;
- (id)nearestDocumentFileReferenceProvidingAncestor;
- (id)objectInChildNavigableItemsAtIndex:(unsigned long long)arg1;
- (id)observationInfo;
@property(readonly, nonatomic) IDENavigableItem *parentItem; // @synthesize parentItem=_parentItem;
- (id)persistentNameTreeForNavigableItems:(id)arg1 error:(id *)arg2;
- (id)persistentNameTreeForNavigableItems:(id)arg1 errorOnInvalidItems:(BOOL)arg2 error:(id *)arg3;
- (id)persistentNameTreeForNavigableItemsIgnoringInvalid:(id)arg1;
- (void)primitiveInvalidate;
@property(readonly, nonatomic) BOOL referencedContentExists;
- (oneway void)release;
@property(readonly, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setName:(id)arg1;
- (void)setObservationInfo:(id)arg1;
@property(readonly, nonatomic) BOOL shouldNavigateToContentDocumentLocation;
- (id)sourceControlCurrentRevision;
- (id)sourceControlLastModifiedDate;
- (id)sourceControlLocalStatus;
- (int)sourceControlLocalStatusFlag;
- (id)sourceControlServerStatus;
- (int)sourceControlServerStatusFlag;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSColor *textColor;
@property(readonly, nonatomic) NSString *toolTip;
- (void)updateChildItemsForChangeKind:(unsigned long long)arg1 atIndexes:(id)arg2;
- (void)willAccessChildItems;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSImage *image; // @dynamic image;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic) NSString *name; // @dynamic name;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

