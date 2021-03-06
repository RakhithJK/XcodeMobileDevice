//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEActivityReporter.h>

@class NSMapTable;

@interface IDETestingActivityReporter : IDEActivityReporter
{
    NSMapTable *_reportForTestSessionTable;
    NSMapTable *_reportForCoverageSessionTable;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)_addGenerateCoverageReportSession:(id)arg1;
- (void)_addTestRunSession:(id)arg1;
- (void)_removeGenerateCoverageReportSession:(id)arg1;
- (void)_removeTestRunSession:(id)arg1;
- (id)_titleForTestRunSession:(id)arg1;
- (void)_updateTestRunReport:(id)arg1 withSession:(id)arg2;
- (id)initWithWorkspace:(id)arg1;

@end

