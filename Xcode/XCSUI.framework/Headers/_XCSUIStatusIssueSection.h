//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface _XCSUIStatusIssueSection : NSObject
{
    BOOL _showAllIssues;
    BOOL _showErrors;
    BOOL _showWarnings;
    BOOL _showAnalysis;
    BOOL _showTests;
    BOOL _isSilencedIssues;
    NSString *_issuesTitle;
    NSArray *_allIssues;
    NSArray *_scaledIssues;
    NSArray *_errorIssues;
    NSArray *_warningIssues;
    NSArray *_analysisIssues;
    NSArray *_testIssues;
}

+ (id)issuesSectionWithTitle:(id)arg1 allIssues:(id)arg2 scaledIssues:(id)arg3;
- (void).cxx_destruct;
@property(readonly, copy) NSArray *allIssues; // @synthesize allIssues=_allIssues;
@property(readonly, copy) NSArray *analysisIssues; // @synthesize analysisIssues=_analysisIssues;
@property(readonly, copy) NSArray *displayedIssues;
@property(readonly, copy) NSArray *errorIssues; // @synthesize errorIssues=_errorIssues;
@property(nonatomic) BOOL isSilencedIssues; // @synthesize isSilencedIssues=_isSilencedIssues;
@property(readonly, copy) NSString *issuesTitle; // @synthesize issuesTitle=_issuesTitle;
@property(readonly, copy) NSArray *scaledIssues; // @synthesize scaledIssues=_scaledIssues;
@property(nonatomic) BOOL showAllIssues; // @synthesize showAllIssues=_showAllIssues;
@property(nonatomic) BOOL showAnalysis; // @synthesize showAnalysis=_showAnalysis;
@property(nonatomic) BOOL showErrors; // @synthesize showErrors=_showErrors;
@property(nonatomic) BOOL showTests; // @synthesize showTests=_showTests;
@property(nonatomic) BOOL showWarnings; // @synthesize showWarnings=_showWarnings;
@property(readonly, copy) NSArray *testIssues; // @synthesize testIssues=_testIssues;
@property(readonly, copy) NSArray *warningIssues; // @synthesize warningIssues=_warningIssues;

@end

