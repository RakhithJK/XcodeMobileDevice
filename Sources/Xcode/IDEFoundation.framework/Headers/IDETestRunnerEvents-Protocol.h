//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/NSObject-Protocol.h>

@class DVTTestPerformanceMetricOutput, IDEEntityIdentifier, IDETestResult, IDETestResultMessage, IDETestRunner, NSError, NSString, XCActivityRecord;

@protocol IDETestRunnerEvents <NSObject>
- (void)testRunner:(IDETestRunner *)arg1 didFailTestWithIdentifier:(NSString *)arg2 withTestResultMessage:(IDETestResultMessage *)arg3 rawOutput:(NSString *)arg4;
- (void)testRunner:(IDETestRunner *)arg1 didFinishTestWithIdentifier:(NSString *)arg2 withTestResult:(IDETestResult *)arg3 rawOutput:(NSString *)arg4;
- (void)testRunner:(IDETestRunner *)arg1 didLaunchTestSessionForScheme:(IDEEntityIdentifier *)arg2 withDisplayName:(NSString *)arg3 diagnosticLogPath:(NSString *)arg4;
- (void)testRunner:(IDETestRunner *)arg1 didOutput:(NSString *)arg2;
- (void)testRunner:(IDETestRunner *)arg1 didStartTestWithIdentifier:(NSString *)arg2 rawOutput:(NSString *)arg3;
- (void)testRunner:(IDETestRunner *)arg1 testWithIdentifier:(NSString *)arg2 didFinishActivity:(XCActivityRecord *)arg3;
- (void)testRunner:(IDETestRunner *)arg1 testWithIdentifier:(NSString *)arg2 didMeasurePerformanceMetric:(DVTTestPerformanceMetricOutput *)arg3 rawOutput:(NSString *)arg4;
- (void)testRunner:(IDETestRunner *)arg1 testWithIdentifier:(NSString *)arg2 willStartActivity:(XCActivityRecord *)arg3;
- (void)testRunner:(IDETestRunner *)arg1 willFinishWithError:(NSError *)arg2 didCancel:(BOOL)arg3;
- (void)testRunnerDidStartRunningTests:(IDETestRunner *)arg1;
- (void)testSuite:(NSString *)arg1 didStartAt:(NSString *)arg2 rawOutput:(NSString *)arg3;
- (void)testSuite:(NSString *)arg1 willFinishAt:(NSString *)arg2 rawOutput:(NSString *)arg3;
- (void)testSuiteDidFinish:(long long)arg1 withFailures:(long long)arg2 unexpected:(long long)arg3 testDuration:(double)arg4 totalDuration:(double)arg5 rawOutput:(NSString *)arg6;
@end

