//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXReferenceBasedBatchFinder.h>

@class TSRegularExpression;

@interface PBXRegexBatchFinder : PBXReferenceBasedBatchFinder
{
    TSRegularExpression *_findExpression;
}

- (void)dealloc;
- (id)findExpression;
- (id)findableForReference:(id)arg1;
- (id)replacementStringForFoundString:(id)arg1 replaceString:(id)arg2;

@end

