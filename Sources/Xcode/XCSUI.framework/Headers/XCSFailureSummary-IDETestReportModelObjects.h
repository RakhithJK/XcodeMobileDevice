//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSCore/XCSFailureSummary.h>

#import <XCSUI/IDETestReport_FailureSummary-Protocol.h>

@class NSString;

@interface XCSFailureSummary (IDETestReportModelObjects) <IDETestReport_FailureSummary>
@property(readonly, copy, nonatomic) NSString *ide_testReport_failureSummary_fileName;
@property(readonly, nonatomic) long long ide_testReport_failureSummary_lineNumber;
@property(readonly, copy, nonatomic) NSString *ide_testReport_failureSummary_message;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

