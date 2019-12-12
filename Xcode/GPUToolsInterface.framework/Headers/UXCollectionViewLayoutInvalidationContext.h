//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface UXCollectionViewLayoutInvalidationContext : NSObject
{
    NSMutableDictionary *_invalidatedSupplementaryViews;
    NSArray *_updateItems;
    struct {
        unsigned int invalidateDataSource:1;
        unsigned int invalidateEverything:1;
    } _invalidationContextFlags;
}

- (void)_invalidateSupplementaryElementsOfKind:(id)arg1 atIndexPaths:(id)arg2;
- (id)_invalidatedSupplementaryViews;
- (void)_setInvalidateDataSourceCounts:(BOOL)arg1;
- (void)_setInvalidateEverything:(BOOL)arg1;
- (void)_setInvalidatedSupplementaryViews:(id)arg1;
- (void)_setUpdateItems:(id)arg1;
- (id)_updateItems;
- (void)dealloc;
@property(readonly, nonatomic) BOOL invalidateDataSourceCounts;
@property(readonly, nonatomic) BOOL invalidateEverything;

@end

