//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTObservingToken, DVTStackBacktrace, IDEActivityLogSection, IDEBuildOperation, IDEIssue, IDEWorkspaceDocument, NSMapTable, NSString;
@protocol DVTCancellable;

@interface IDEBuildAlertMonitor : NSObject <DVTInvalidation>
{
    IDEWorkspaceDocument *_workspaceDocument;
    DVTObservingToken *_executionEnvironmentBuildStateToken;
    DVTObservingToken *_buildOperationToken;
    id <DVTCancellable> _issueProviderToken;
    id _buildLogObserver;
    IDEBuildOperation *_currentBuildOperation;
    IDEActivityLogSection *_currentBuildLog;
    BOOL _started;
    BOOL _running;
    BOOL _stopped;
    BOOL _alertedIssue;
    BOOL _cleanupWhenDoneRecording;
    NSMapTable *_existingIssues;
    IDEIssue *_firstIssue;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)_buildExistingIssues;
- (void)_cleanup;
- (void)buildDidFinishForExecutionEnvironment:(id)arg1;
- (void)buildDidStartForExecutionEnvironment:(id)arg1;
- (void)buildIsRunningForExecutionEnvironment:(id)arg1;
- (id)currentPrimaryDocumentURL;
- (id)initWithWorkspaceTabController:(id)arg1;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
- (BOOL)isIssueAnExistingIssue:(id)arg1;
- (void)issueManager:(id)arg1 didAddIssues:(id)arg2 forDocumentURL:(id)arg3;
- (void)primitiveInvalidate;
@property(retain) IDEWorkspaceDocument *workspaceDocument; // @synthesize workspaceDocument=_workspaceDocument;
- (id)sharedPlaceholderURLForIssuesWithNoDocument;
- (id)verbForBuildOperationPurpose:(id)arg1;
- (id)workspaceTabController;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
