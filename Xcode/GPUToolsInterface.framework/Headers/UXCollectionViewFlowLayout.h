//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUToolsInterface/UXCollectionViewLayout.h>

@class NSDictionary, NSMutableDictionary;

@interface UXCollectionViewFlowLayout : UXCollectionViewLayout
{
    struct {
        unsigned int delegateSizeForItem:1;
        unsigned int delegateReferenceSizeForHeader:1;
        unsigned int delegateReferenceSizeForFooter:1;
        unsigned int delegateInsetForSection:1;
        unsigned int delegateInteritemSpacingForSection:1;
        unsigned int delegateLineSpacingForSection:1;
        unsigned int delegateAlignmentOptions:1;
        unsigned int layoutDataIsValid:1;
        unsigned int delegateInfoIsValid:1;
    } _gridLayoutFlags;
    double _interitemSpacing;
    double _lineSpacing;
    struct CGSize _itemSize;
    struct CGSize _headerReferenceSize;
    struct CGSize _footerReferenceSize;
    struct NSEdgeInsets _sectionInset;
    id _data;
    struct CGSize _currentLayoutSize;
    NSMutableDictionary *_insertedItemsAttributesDict;
    NSMutableDictionary *_insertedSectionHeadersAttributesDict;
    NSMutableDictionary *_insertedSectionFootersAttributesDict;
    NSMutableDictionary *_deletedItemsAttributesDict;
    NSMutableDictionary *_deletedSectionHeadersAttributesDict;
    NSMutableDictionary *_deletedSectionFootersAttributesDict;
    long long _scrollDirection;
    NSDictionary *_rowAlignmentsOptionsDictionary;
    struct CGRect _visibleBounds;
}

+ (Class)invalidationContextClass;
- (void)_fetchItemsInfo;
- (struct CGRect)_frameForFooterInSection:(long long)arg1 usingData:(id)arg2;
- (struct CGRect)_frameForHeaderInSection:(long long)arg1 usingData:(id)arg2;
- (struct CGRect)_frameForItemAtSection:(long long)arg1 andRow:(long long)arg2 usingData:(id)arg3;
- (void)_getSizingInfos;
- (void)_invalidateButKeepAllInfo;
- (void)_invalidateButKeepDelegateInfo;
- (id)_layoutAttributesForItemsInRect:(struct CGRect)arg1;
@property(retain, nonatomic, setter=_setRowAlignmentsOptions:) NSDictionary *_rowAlignmentOptions;
- (void)_updateDelegateFlags;
- (void)_updateItemsLayout;
- (struct CGSize)collectionViewContentSize;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)finalLayoutAttributesForDeletedItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForFooterInDeletedSection:(long long)arg1;
- (id)finalLayoutAttributesForHeaderInDeletedSection:(long long)arg1;
- (void)finalizeCollectionViewUpdates;
@property(nonatomic) struct CGSize footerReferenceSize; // @synthesize footerReferenceSize=_footerReferenceSize;
@property(nonatomic) struct CGSize headerReferenceSize; // @synthesize headerReferenceSize=_headerReferenceSize;
- (id)indexPathForItemAtPoint:(struct CGPoint)arg1;
- (id)indexPathOfItemAbove:(id)arg1;
- (id)indexPathOfItemAfter:(id)arg1;
- (id)indexPathOfItemBefore:(id)arg1;
- (id)indexPathOfItemBelow:(id)arg1;
- (id)indexPathsForItemsInRect:(struct CGRect)arg1;
- (id)indexPathsForItemsInRect:(struct CGRect)arg1 usingData:(id)arg2;
- (id)indexesForSectionFootersInRect:(struct CGRect)arg1;
- (id)indexesForSectionFootersInRect:(struct CGRect)arg1 usingData:(id)arg2;
- (id)indexesForSectionHeadersInRect:(struct CGRect)arg1;
- (id)indexesForSectionHeadersInRect:(struct CGRect)arg1 usingData:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initialLayoutAttributesForFooterInInsertedSection:(long long)arg1;
- (id)initialLayoutAttributesForHeaderInInsertedSection:(long long)arg1;
- (id)initialLayoutAttributesForInsertedItemAtIndexPath:(id)arg1;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForFooterInSection:(long long)arg1;
- (id)layoutAttributesForFooterInSection:(long long)arg1 usingData:(id)arg2;
- (id)layoutAttributesForHeaderInSection:(long long)arg1;
- (id)layoutAttributesForHeaderInSection:(long long)arg1 usingData:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1 usingData:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
@property(nonatomic) double minimumInteritemSpacing; // @synthesize minimumInteritemSpacing=_interitemSpacing;
@property(nonatomic) double minimumLineSpacing; // @synthesize minimumLineSpacing=_lineSpacing;
@property(nonatomic) long long scrollDirection;
@property(nonatomic) struct NSEdgeInsets sectionInset; // @synthesize sectionInset=_sectionInset;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (BOOL)shouldUpdateVisibleCellLayoutAttributes;
- (struct CGSize)synchronizeLayout;

@end

