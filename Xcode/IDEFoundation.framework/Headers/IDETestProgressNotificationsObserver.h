//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDETestRunSessionEvents-Protocol.h>

@class IDETestRunSession, NSString, NSTimer;

@interface IDETestProgressNotificationsObserver : NSObject <IDETestRunSessionEvents>
{
    IDETestRunSession *_testRunSession;
    NSString *_currentSuite;
    NSString *_currentTestClass;
    NSString *_currentTestMethod;
    double _postTimeForLastNotification;
    NSTimer *_postNotificationCoalescingTimer;
}

- (void).cxx_destruct;
- (void)_considerPostingDistributedNotification;
@property(copy) NSString *currentSuite; // @synthesize currentSuite=_currentSuite;
@property(copy) NSString *currentTestClass; // @synthesize currentTestClass=_currentTestClass;
@property(copy) NSString *currentTestMethod; // @synthesize currentTestMethod=_currentTestMethod;
- (void)didFailTest:(id)arg1 withTestResultMessage:(id)arg2 rawOutput:(id)arg3;
- (void)didFinishTest:(id)arg1 withTestResult:(id)arg2 rawOutput:(id)arg3;
- (void)didStartTest:(id)arg1 withRawOutput:(id)arg2;
- (id)initWithTestOperationsObserver:(id)arg1;
@property(retain) NSTimer *postNotificationCoalescingTimer; // @synthesize postNotificationCoalescingTimer=_postNotificationCoalescingTimer;
@property double postTimeForLastNotification; // @synthesize postTimeForLastNotification=_postTimeForLastNotification;
@property(retain) IDETestRunSession *testRunSession; // @synthesize testRunSession=_testRunSession;
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
