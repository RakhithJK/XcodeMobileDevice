//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath;

__attribute__((visibility("hidden")))
@interface UXCollectionViewUpdateItem : NSObject
{
    NSIndexPath *_initialIndexPath;
    NSIndexPath *_finalIndexPath;
    long long _updateAction;
    id _gap;
}

- (long long)_action;
- (id)_gap;
- (id)_indexPath;
- (BOOL)_isSectionOperation;
- (id)_newIndexPath;
- (void)_setGap:(id)arg1;
- (void)_setNewIndexPath:(id)arg1;
- (long long)compareIndexPaths:(id)arg1;
- (void)dealloc;
- (id)description;
@property(readonly, retain, nonatomic) NSIndexPath *indexPathAfterUpdate; // @synthesize indexPathAfterUpdate=_finalIndexPath;
@property(readonly, retain, nonatomic) NSIndexPath *indexPathBeforeUpdate; // @synthesize indexPathBeforeUpdate=_initialIndexPath;
- (id)initWithAction:(long long)arg1 forIndexPath:(id)arg2;
- (id)initWithInitialIndexPath:(id)arg1 finalIndexPath:(id)arg2 updateAction:(long long)arg3;
- (id)initWithOldIndexPath:(id)arg1 newIndexPath:(id)arg2;
- (long long)inverseCompareIndexPaths:(id)arg1;
@property(readonly, nonatomic) long long updateAction; // @synthesize updateAction=_updateAction;

@end

