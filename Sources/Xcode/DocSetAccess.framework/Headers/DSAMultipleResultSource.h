//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DocSetAccess/DSAResultSource.h>

@class NSArray, NSMutableArray, NSSortDescriptor, NSString;

__attribute__((visibility("hidden")))
@interface DSAMultipleResultSource : DSAResultSource
{
    NSArray *_theSources;
    NSMutableArray *_remainingSources;
    NSMutableArray *_sourceCaches;
    unsigned long long *_unsignedMemory;
    id *_objectMemory;
    NSString *_sortKey;
    NSSortDescriptor *_sortDescriptorForValue;
    unsigned long long _numberOfCompares;
}

- (id)_sortValueForObject:(id)arg1;
- (void)_sourceExpendedAtIndex:(unsigned long long)arg1;
- (void)cancel;
- (long long)compareObject:(id)arg1 toObject:(id)arg2;
- (void)dealloc;
- (BOOL)hasMoreResults;
- (id)initWithSources:(id)arg1 withSortDescriptor:(id)arg2;
- (id)mergeForTime:(double)arg1;
- (id)nextResultsInTime:(double)arg1;
@property unsigned long long numberOfCompares; // @synthesize numberOfCompares=_numberOfCompares;
- (struct _NSRange)rangeFromArray:(id)arg1 aboveValue:(id)arg2 includingExactMatches:(BOOL)arg3 startingIndex:(unsigned long long)arg4 nextFailedValue:(id *)arg5;
- (id)remainingResults;

@end

