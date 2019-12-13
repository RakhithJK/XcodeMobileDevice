//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDESchemeActionAbstractTestSummaryObject.h>

@class NSArray, NSString;

@interface IDESchemeActionTestSummary : IDESchemeActionAbstractTestSummaryObject
{
    unsigned long long _status;
    double _duration;
    NSString *_identifier;
    NSString *_testSummaryGUID;
    NSArray *_failureSummaries;
    NSArray *_performanceMetrics;
    NSArray *_activitySummaries;
}

+ (id)stringForTestStatus:(unsigned long long)arg1;
+ (unsigned long long)testStatusForString:(id)arg1;
- (void).cxx_destruct;
@property(copy) NSArray *activitySummaries; // @synthesize activitySummaries=_activitySummaries;
- (id)dictionaryRepresentation;
@property double duration; // @synthesize duration=_duration;
@property(copy) NSArray *failureSummaries; // @synthesize failureSummaries=_failureSummaries;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithName:(id)arg1 identifier:(id)arg2 status:(unsigned long long)arg3 failureSummaries:(id)arg4 performanceMetrics:(id)arg5 activitySummaries:(id)arg6;
- (void)loadAttachmentsFromDirectory:(id)arg1;
@property(copy) NSArray *performanceMetrics; // @synthesize performanceMetrics=_performanceMetrics;
@property unsigned long long status; // @synthesize status=_status;
@property(copy) NSString *testSummaryGUID; // @synthesize testSummaryGUID=_testSummaryGUID;
- (BOOL)updateWithDictionaryRepresentation:(id)arg1;

@end
