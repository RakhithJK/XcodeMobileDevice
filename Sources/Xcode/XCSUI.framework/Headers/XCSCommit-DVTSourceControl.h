//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSCore/XCSCommit.h>

@class DVTSourceControlAuthor, DVTSourceControlRevision, NSDictionary;

@interface XCSCommit (DVTSourceControl)
@property(readonly, copy, nonatomic) DVTSourceControlAuthor *author;
- (id)logItemWithWorkspace:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *pathsWithStatus;
@property(readonly, copy, nonatomic) DVTSourceControlRevision *revision;
@end

