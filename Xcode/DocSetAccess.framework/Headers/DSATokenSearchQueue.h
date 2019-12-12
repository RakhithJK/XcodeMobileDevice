//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DSADocSet, DSATokenIndex, NSConditionLock, NSMutableArray;

__attribute__((visibility("hidden")))
@interface DSATokenSearchQueue : NSObject
{
    DSADocSet *_docSet;
    DSATokenIndex *_foregroundIndex;
    DSATokenIndex *_backgroundIndex;
    NSMutableArray *_searchQueue;
    NSMutableArray *_searchResults;
    BOOL _currentSearchCanceled;
    NSConditionLock *_searchState;
    BOOL _fetchIsInProgress;
    BOOL _stopProcessing;
}

- (void)_addResultsToQueue:(id)arg1;
- (void)_performAtomicSearch:(id)arg1;
- (void)_performIterativeSearch:(id)arg1;
- (BOOL)addQueuedQuery:(id)arg1 inNodes:(id)arg2 delegate:(id)arg3 contextInfo:(void *)arg4;
- (id)backgroundIndex;
- (void)cancelSearchWithDelegate:(id)arg1 contextInfo:(void *)arg2;
- (BOOL)containsTokens:(id)arg1;
- (void)dealloc;
- (void)doOneSearch;
- (id)foregroundIndex;
- (id)initWithDocSet:(id)arg1;
- (void)invalidate;
- (void)processBackgroundSearches;
- (void)processOneQuery;
- (id)searchForTokens:(id)arg1 inNodes:(id)arg2;
- (void)startSearch;

@end

