//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/SCMNode.h>

@class NSCalendarDate, NSMutableArray, NSString, SCMRevision, XCSCMInfo;

@interface SCMSandboxEntry : SCMNode
{
    NSMutableArray *_interestingChildren;
    NSMutableArray *_flattenedInterestingChildren;
    NSString *_author;
    NSCalendarDate *_date;
    SCMRevision *_revision;
    SCMRevision *_repositoryRevision;
    int _status;
    int _repositoryStatus;
    SCMSandboxEntry *_mostInterestingChild;
    SCMSandboxEntry *_mostInterestingRepositoryChild;
    XCSCMInfo *_scmInfo;
    BOOL _isLeaf;
    BOOL _isWrapper;
}

+ (void)initialize;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
- (void)adoptChild:(id)arg1;
- (void)adoptChildren:(id)arg1;
@property(copy) NSString *author; // @synthesize author=_author;
- (void)childrenWillChange;
- (id)createChildWithName:(id)arg1;
@property(retain) NSCalendarDate *date; // @synthesize date=_date;
- (void)dealloc;
- (id)description;
- (id)flattenedInterestingChildren;
- (id)initWithModel:(id)arg1 parent:(id)arg2 name:(id)arg3;
- (id)interestingChildren;
- (BOOL)isInteresting;
@property BOOL isLeaf; // @synthesize isLeaf=_isLeaf;
@property BOOL isWrapper; // @synthesize isWrapper=_isWrapper;
- (id)localizedDateString;
@property SCMSandboxEntry *mostInterestingChild; // @synthesize mostInterestingChild=_mostInterestingChild;
@property SCMSandboxEntry *mostInterestingRepositoryChild; // @synthesize mostInterestingRepositoryChild=_mostInterestingRepositoryChild;
- (id)myself;
- (id)properties;
- (void)removeChild:(id)arg1;
- (void)removeChildren;
@property(retain) SCMRevision *repositoryRevision; // @synthesize repositoryRevision=_repositoryRevision;
@property int repositoryStatus; // @synthesize repositoryStatus=_repositoryStatus;
- (id)repositoryStatusString;
@property(retain) SCMRevision *revision; // @synthesize revision=_revision;
@property(retain) XCSCMInfo *scmInfo; // @synthesize scmInfo=_scmInfo;
- (void)setMyself:(id)arg1;
- (void)setName:(id)arg1;
@property int status; // @synthesize status=_status;
- (id)statusForSCMEntry;
- (id)statusString;

@end
