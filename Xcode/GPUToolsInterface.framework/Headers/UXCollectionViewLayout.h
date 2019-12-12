//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSMutableIndexSet, NSString, UXCollectionView, UXCollectionViewLayoutAccessibility, UXCollectionViewLayoutInvalidationContext;

__attribute__((visibility("hidden")))
@interface UXCollectionViewLayout : NSObject
{
    UXCollectionView *_collectionView;
    struct CGSize _collectionViewBoundsSize;
    NSMutableDictionary *_initialAnimationLayoutAttributesDict;
    NSMutableDictionary *_finalAnimationLayoutAttributesDict;
    NSMutableDictionary *_deletedSupplementaryIndexPathsDict;
    NSMutableDictionary *_insertedSupplementaryIndexPathsDict;
    NSMutableDictionary *_deletedDecorationIndexPathsDict;
    NSMutableDictionary *_insertedDecorationIndexPathsDict;
    NSMutableIndexSet *_deletedSectionsSet;
    NSMutableIndexSet *_insertedSectionsSet;
    NSMutableDictionary *_decorationViewClassDict;
    NSMutableDictionary *_decorationViewNibDict;
    UXCollectionViewLayout *_transitioningFromLayout;
    UXCollectionViewLayout *_transitioningToLayout;
    BOOL _inTransitionFromTransitionLayout;
    BOOL _inTransitionToTransitionLayout;
    UXCollectionViewLayoutInvalidationContext *_invalidationContext;
    NSArray *_accessibilityChildren;
    UXCollectionViewLayoutAccessibility *_layoutAccessibility;
    NSString *_accessibilityIdentifier;
    NSString *_accessibilityLabel;
    NSString *_accessibilityRoleDescription;
}

+ (Class)invalidationContextClass;
+ (Class)layoutAccessibilityClass;
+ (Class)layoutAttributesClass;
- (void)_animateView:(id)arg1 withAction:(long long)arg2 fromLayoutAttributes:(id)arg3 toLayoutAttributes:(id)arg4 fromLayout:(id)arg5 withCompletionHandler:(CDUnknownBlockType)arg6;
- (CDUnknownBlockType)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2;
- (CDUnknownBlockType)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3;
- (id)_decorationViewForLayoutAttributes:(id)arg1;
- (void)_didFinishLayoutTransitionAnimations:(BOOL)arg1;
- (void)_finalizeCollectionViewItemAnimations;
- (void)_finalizeLayoutTransition;
- (id)_indexPathsToDeleteForDecorationViewOfKind:(id)arg1;
- (id)_indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;
- (id)_indexPathsToInsertForDecorationViewOfKind:(id)arg1;
- (id)_indexPathsToInsertForSupplementaryViewOfKind:(id)arg1;
- (void)_invalidateLayoutUsingContext:(id)arg1;
- (BOOL)_isValidSection:(long long)arg1 item:(long long)arg2;
- (void)_prepareForTransitionFromLayout:(id)arg1;
- (void)_prepareForTransitionToLayout:(id)arg1;
- (void)_prepareToAnimateFromCollectionViewItems:(id)arg1 atContentOffset:(struct CGPoint)arg2 toItems:(id)arg3 atContentOffset:(struct CGPoint)arg4;
- (BOOL)_selectableItemAtIndexPath:(id)arg1;
- (void)_setCollectionView:(id)arg1;
- (void)_setCollectionViewBoundsSize:(struct CGSize)arg1;
- (BOOL)_supportsAdvancedTransitionAnimations;
@property(readonly, nonatomic) NSArray *accessibilityChildren; // @synthesize accessibilityChildren=_accessibilityChildren;
@property(retain, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(retain, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(retain, nonatomic) NSString *accessibilityRoleDescription; // @synthesize accessibilityRoleDescription=_accessibilityRoleDescription;
- (struct CGRect)backingAlignedRect:(struct CGRect)arg1 options:(unsigned long long)arg2;
- (struct CGRect)bounds;
@property(readonly, nonatomic) __weak UXCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (struct CGSize)collectionViewContentSize;
- (void)dealloc;
- (long long)dropPositionForPoint:(struct CGPoint)arg1 withIndexPaths:(id)arg2 movedToIndexPath:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)finalizeAnimatedBoundsChange;
- (void)finalizeCollectionViewUpdates;
- (void)finalizeLayoutTransition;
- (id)firstSelectableItemIndexPath;
- (id)indexPathOfItemAbove:(id)arg1;
- (id)indexPathOfItemAfter:(id)arg1;
- (id)indexPathOfItemBefore:(id)arg1;
- (id)indexPathOfItemBelow:(id)arg1;
- (id)indexPathsForItemRangeSelectionFrom:(id)arg1 to:(id)arg2;
- (id)indexPathsToDeleteForDecorationViewOfKind:(id)arg1;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;
- (id)indexPathsToInsertForDecorationViewOfKind:(id)arg1;
- (id)indexPathsToInsertForSupplementaryViewOfKind:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (struct NSEdgeInsets)insetsForScrollingItemAtIndexPath:(id)arg1 toScrollPosition:(unsigned long long)arg2;
- (void)invalidateLayout;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (id)lastSelectableItemIndexPath;
@property(readonly, nonatomic) UXCollectionViewLayoutAccessibility *layoutAccessibility; // @synthesize layoutAccessibility=_layoutAccessibility;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1 withIndexPaths:(id)arg2 exchangedWithIndexPaths:(id)arg3;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1 withIndexPaths:(id)arg2 movedToIndexPath:(id)arg3 atPoint:(struct CGPoint)arg4;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)prepareForAnimatedBoundsChange:(struct CGRect)arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (void)prepareForTransitionFromLayout:(id)arg1;
- (void)prepareForTransitionToLayout:(id)arg1;
- (void)prepareLayout;
- (id)proposedDropIndexPathForDraggingPoint:(struct CGPoint)arg1;
- (void)registerClass:(Class)arg1 forDecorationViewOfKind:(id)arg2;
- (void)registerNib:(id)arg1 forDecorationViewOfKind:(id)arg2;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (BOOL)shouldInvalidateLayoutForScaleFactorChangeFrom:(double)arg1 to:(double)arg2;
- (id)snapshottedLayoutAttributeForItemAtIndexPath:(id)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (struct CGPoint)transitionContentOffsetForProposedContentOffset:(struct CGPoint)arg1 keyItemIndexPath:(id)arg2;
- (struct CGPoint)updatesContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (long long)userInterfaceLayoutDirection;

@end

