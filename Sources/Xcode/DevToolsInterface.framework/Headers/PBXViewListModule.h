//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXModule.h>

@class NSMutableArray, PBXViewListView;

@interface PBXViewListModule : PBXModule
{
    NSMutableArray *_viewListModules;
    PBXViewListView *_viewListView;
    BOOL _expandAddedSubviews;
}

- (void)_installViewForModule:(id)arg1;
- (void)_removeViewForModule:(id)arg1;
- (void)addViewListModule:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)insertViewListModule:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)loadView;
- (void)removeViewListModule:(id)arg1;
- (void)setExpandAddedSubviews:(BOOL)arg1;
- (id)viewListModules;
- (id)viewListView;

@end

