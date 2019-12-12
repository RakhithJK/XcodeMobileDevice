//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@interface XCSBuildResultSummary : XCSObject
{
    long long _analyzerWarningCount;
    long long _analyzerWarningChange;
    long long _warningCount;
    long long _warningChange;
    long long _errorCount;
    long long _errorChange;
    long long _testsCount;
    long long _testsChange;
    long long _testFailureCount;
    long long _testFailureChange;
    long long _improvedPerfTestCount;
    long long _regressedPerfTestCount;
    long long _codeCoveragePercentage;
    long long _codeCoveragePercentageDelta;
}

+ (id)summaryWithAnalyzerWarningCount:(long long)arg1 warningCount:(long long)arg2 errorCount:(long long)arg3 testsCount:(long long)arg4 testFailureCount:(long long)arg5 codeCoveragePercentage:(long long)arg6 previousResults:(id)arg7 validationErrors:(id *)arg8;
@property(nonatomic) long long analyzerWarningChange; // @synthesize analyzerWarningChange=_analyzerWarningChange;
@property(nonatomic) long long analyzerWarningCount; // @synthesize analyzerWarningCount=_analyzerWarningCount;
- (long long)calculateIntegrationResult;
@property(nonatomic) long long codeCoveragePercentage; // @synthesize codeCoveragePercentage=_codeCoveragePercentage;
@property(nonatomic) long long codeCoveragePercentageDelta; // @synthesize codeCoveragePercentageDelta=_codeCoveragePercentageDelta;
- (id)description;
- (id)dictionaryRepresentation;
@property(nonatomic) long long errorChange; // @synthesize errorChange=_errorChange;
@property(nonatomic) long long errorCount; // @synthesize errorCount=_errorCount;
@property(nonatomic) long long improvedPerfTestCount; // @synthesize improvedPerfTestCount=_improvedPerfTestCount;
- (id)initWithAnalyzerWarningCount:(long long)arg1 analyzerWarningChange:(long long)arg2 warningCount:(long long)arg3 warningChange:(long long)arg4 errorCount:(long long)arg5 errorChange:(long long)arg6 testsCount:(long long)arg7 testsChange:(long long)arg8 testFailureCount:(long long)arg9 testFailureChange:(long long)arg10 improvedPerfTestCount:(long long)arg11 regressedPerfTestCount:(long long)arg12 codeCoveragePercentage:(long long)arg13 codeCoveragePercentageDelta:(long long)arg14 validationErrors:(id *)arg15;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
@property(nonatomic) long long regressedPerfTestCount; // @synthesize regressedPerfTestCount=_regressedPerfTestCount;
- (id)saveRepresentation;
@property(nonatomic) long long testFailureChange; // @synthesize testFailureChange=_testFailureChange;
@property(nonatomic) long long testFailureCount; // @synthesize testFailureCount=_testFailureCount;
@property(nonatomic) long long testsChange; // @synthesize testsChange=_testsChange;
@property(nonatomic) long long testsCount; // @synthesize testsCount=_testsCount;
@property(nonatomic) long long warningChange; // @synthesize warningChange=_warningChange;
@property(nonatomic) long long warningCount; // @synthesize warningCount=_warningCount;

@end

