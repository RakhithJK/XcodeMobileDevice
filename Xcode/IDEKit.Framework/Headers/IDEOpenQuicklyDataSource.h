//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IDEOpenQuicklyDataSource : NSObject
{
    NSMutableDictionary *_searchPathsToFlattenedContents;
    NSMutableDictionary *_searchPathsToObservers;
    long long _scanningOperationCount;
    long long contentMode;
}

+ (void)THREAD_exploreURL:(id)arg1 mode:(long long)arg2 candidateMatchPath:(id)arg3 exploredURLs:(id)arg4 fileManager:(id)arg5 updateBlock:(CDUnknownBlockType)arg6;
+ (id)keyPathsForValuesAffectingScanning;
+ (id)sharedSDKHeaderDataSource;
+ (id)sharedUserAbsolutePathDataSource;
- (void).cxx_destruct;
- (void)addSearchPaths:(id)arg1;
- (void)explorePath:(id)arg1 updateBlock:(CDUnknownBlockType)arg2;
- (id)flattenedContentsForSearchPath:(id)arg1;
- (id)initWithContentMode:(long long)arg1;
@property(readonly, getter=isScanning) BOOL scanning;
- (id)matchesForResults:(id)arg1 inContext:(id)arg2;
- (void)notifyObserversOfSearchPath:(id)arg1 ofResults:(id)arg2;
- (id)observeSearchPaths:(id)arg1 observeInitalValue:(BOOL)arg2 withObservationHandler:(CDUnknownBlockType)arg3;
@property long long scanningOperationCount; // @synthesize scanningOperationCount=_scanningOperationCount;

@end
