//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEIssueProvider.h>

#import <IDEFoundation/IDETestsInTestableObserver-Protocol.h>

@class IDEWorkspace, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface IDETestableIssueProvider : IDEIssueProvider <IDETestsInTestableObserver>
{
    IDEWorkspace *_workspace;
    NSMutableDictionary *_issuesByTestID;
    NSMutableArray *_genericIssues;
    unsigned long long _currentIssueGeneration;
    NSMutableSet *_observedTestables;
}

+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
- (void).cxx_destruct;
- (void)_addIssuesForTest:(id)arg1 issues:(id)arg2 isGeneric:(BOOL)arg3;
- (void)_beginNewIssueGeneration;
- (void)_clearIssuesForTest:(id)arg1;
- (id)_documentLocationForFilePath:(id)arg1 lineNumber:(id)arg2 timestamp:(id)arg3;
- (BOOL)_filterIssuesByActiveScheme;
- (id)_headingNameForTest:(id)arg1;
- (id)_initWithWorkspace:(id)arg1;
- (void)_postTestIssue:(id)arg1 forTestable:(id)arg2;
- (void)_processResult:(id)arg1 forTest:(id)arg2;
- (void)_updateObservedTestablesForTest:(id)arg1;
- (void)allTestablesChanged;
- (id)displayNameForIssueTypeIdentifier:(id)arg1;
- (void)primitiveInvalidate;
- (void)testablesChanged:(id)arg1;
- (void)testsChanged:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
