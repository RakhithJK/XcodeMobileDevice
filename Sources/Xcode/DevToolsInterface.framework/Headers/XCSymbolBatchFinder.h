//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXReferenceBasedBatchFinder.h>

@class NSMetadataQuery, NSMutableArray, PBXProject;

@interface XCSymbolBatchFinder : PBXReferenceBasedBatchFinder
{
    NSMetadataQuery *_spotlightQuery;
    NSMutableArray *_spotlightQueryPaths;
    BOOL _receivedQueryStoppedNotification;
    long long _processedQueryResultCount;
    PBXProject *_project;
}

- (void)_findModeledSymbols;
- (void)_harvestResultsFromQueryUntilDate:(id)arg1;
- (void)_spotlightQueryNotification:(id)arg1;
- (void)_startSpotlightQuery;
- (void)addSearchItems:(id)arg1;
- (void)dealloc;
- (void)doSomeFindingUntilDate:(id)arg1;
- (id)findableForReference:(id)arg1;
- (void)finish;
- (void)setFindOptionsSet:(id)arg1;
- (void)startFindWithProjectDocument:(id)arg1;
- (void)stopFind;

@end

