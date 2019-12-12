//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsInterface/PBXTrackableTask-Protocol.h>
#import <DevToolsInterface/XCReplaceDelegate-Protocol.h>

@class NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSString, PBXFindOptionsSet;

@interface PBXBatchFinder : NSObject <PBXTrackableTask, XCReplaceDelegate>
{
    NSString *_findString;
    NSArray *_searchList;
    BOOL _isRunning;
    BOOL _completedNormally;
    BOOL _suspended;
    NSMutableArray *_resultFiles;
    NSMutableDictionary *_results;
    unsigned long long _resultCount;
    BOOL _ignoresCase;
    int _matchStyle;
    NSString *_lastReplaceString;
    unsigned long long _lastSkippedReplaces;
    PBXFindOptionsSet *_findOptionsSet;
    NSDate *_lastNewFindableNoticeDate;
    double _maxWidthForResults;
}

+ (void)_addRunningBatchFinder:(id)arg1;
+ (void)_backgroundBatchFinderNotification:(id)arg1;
+ (void)_removeRunningBatchFinder:(id)arg1;
+ (void)_startFinding;
+ (void)_stopFinding;
+ (id)batchFinderWithSearchList:(id)arg1;
+ (id)batchFinderWithSearchList:(id)arg1 findString:(id)arg2;
+ (BOOL)projectBasedFinder;
+ (id)taskBadge;
- (id)_allResultsForFile:(id)arg1;
- (void)_indexingDidComplete:(id)arg1;
- (void)_replaceInFileReference:(id)arg1 replaceableResults:(id)arg2 withString:(id)arg3 skippedResults:(unsigned long long *)arg4;
- (void)cleanup;
- (BOOL)completedNormally;
- (unsigned long long)currentResultCount;
- (id)currentResultFiles;
- (id)currentResultsForFile:(id)arg1;
- (void)dealloc;
- (void)doSomeFindingUntilDate:(id)arg1;
- (id)findOptionsSet;
- (id)findString;
- (void)finish;
- (BOOL)ignoresCase;
- (id)initWithSearchList:(id)arg1;
- (id)initWithSearchList:(id)arg1 findString:(id)arg2;
- (BOOL)isRunning;
- (BOOL)isSuspended;
- (id)lastReplaceString;
- (unsigned long long)lastSkippedReplaces;
- (int)matchStyle;
@property(nonatomic) double maxWidthForResults; // @synthesize maxWidthForResults=_maxWidthForResults;
- (float)percentageDone;
- (void)postNewFindableNotice:(id)arg1;
- (void)postNewFindableNotice:(id)arg1 forcePost:(BOOL)arg2;
- (void)removeResults;
- (void)replaceFindResults:(id)arg1 withString:(id)arg2;
- (id)replacementStringForFoundString:(id)arg1 replaceString:(id)arg2;
- (void)reportFindResults:(id)arg1;
- (BOOL)requiresProjectIndex;
- (void)resume;
- (id)searchList;
- (void)setFindOptionsSet:(id)arg1;
- (void)setIgnoresCase:(BOOL)arg1;
- (void)setMatchStyle:(int)arg1;
- (void)startFindWithProjectDocument:(id)arg1;
- (void)stopFind;
- (void)suspend;
- (void)suspendFindingUntilIndexingComplete:(id)arg1;
- (id)taskBadge;
- (BOOL)taskCanAutoStopOnProjectClose;
- (BOOL)taskCanBeStoppedManually;
- (id)taskDescriptionString;
- (id)taskDisplayString;
- (id)taskIdentifier;
- (float)taskPercentComplete;
- (int)taskProgressType;
- (BOOL)taskRequiresIntervention;
- (BOOL)taskStopRunning;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

