//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDETestRunSessionEvents-Protocol.h>

@class IDESchemeActionResult, IDESchemeActionTestSummaryGroup, IDESchemeActionTestableSummary, IDEWorkspaceArena, NSMutableArray, NSString;

@interface IDETestsSummariesBuilder : NSObject <IDETestRunSessionEvents>
{
    IDEWorkspaceArena *_workspaceArena;
    NSString *_attachmentsDirectory;
    IDESchemeActionTestableSummary *_currentTestableSummary;
    IDESchemeActionTestSummaryGroup *_currentTestGroup;
    NSMutableArray *_testSuiteStack;
    NSMutableArray *_performanceMetricSummaries;
    NSMutableArray *_failureSummaries;
    NSMutableArray *_activitySummaries;
    NSMutableArray *_currentActivityStack;
    IDESchemeActionResult *_actionResult;
}

- (void).cxx_destruct;
@property(retain) IDESchemeActionResult *actionResult; // @synthesize actionResult=_actionResult;
- (void)didFailTest:(id)arg1 withTestResultMessage:(id)arg2 rawOutput:(id)arg3;
- (void)didFinishTest:(id)arg1 withTestResult:(id)arg2 rawOutput:(id)arg3;
- (void)didStartTest:(id)arg1 withRawOutput:(id)arg2;
- (id)initWithActionResult:(id)arg1 workspaceArena:(id)arg2;
- (void)test:(id)arg1 didFinishActivity:(id)arg2;
- (void)test:(id)arg1 didMeasurePerformanceMetric:(id)arg2 rawOutput:(id)arg3;
- (void)test:(id)arg1 willStartActivity:(id)arg2;
- (void)testDidOutput:(id)arg1;
- (void)testOperationGroupDidFinish;
- (void)testOperationWillFinishWithSuccess:(BOOL)arg1 withError:(id)arg2;
- (void)testRunner:(id)arg1 didLaunchTestSessionForScheme:(id)arg2 withDisplayName:(id)arg3 diagnosticLogPath:(id)arg4;
- (void)testSuite:(id)arg1 didStartAt:(id)arg2 rawOutput:(id)arg3;
- (void)testSuite:(id)arg1 willFinishAt:(id)arg2 rawOutput:(id)arg3;
- (void)testSuiteDidFinish:(long long)arg1 withFailures:(long long)arg2 unexpected:(long long)arg3 testDuration:(double)arg4 totalDuration:(double)arg5 rawOutput:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

