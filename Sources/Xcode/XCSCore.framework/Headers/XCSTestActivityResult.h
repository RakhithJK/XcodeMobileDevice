//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@class NSArray, NSDate, NSMutableArray, NSString, XCSIntegrationAsset;

@interface XCSTestActivityResult : XCSObject
{
    NSMutableArray *_subactivityResults;
    NSString *_title;
    NSString *_UUID;
    NSDate *_start;
    NSDate *_finish;
    NSString *_screenshotFilePath;
    NSString *_snapshotFilePath;
    NSString *_diagnosticReportFilePath;
    XCSIntegrationAsset *_screenshot;
    XCSIntegrationAsset *_snapshot;
    XCSIntegrationAsset *_diagnosticReport;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
- (id)activityResultWithTitle:(id)arg1 UUID:(id)arg2 start:(id)arg3 finish:(id)arg4 screenshotFilePath:(id)arg5 snapshotFilePath:(id)arg6 diagnosticReportFilePath:(id)arg7 validationErrors:(id *)arg8;
@property(retain, nonatomic) XCSIntegrationAsset *diagnosticReport; // @synthesize diagnosticReport=_diagnosticReport;
@property(readonly, nonatomic) NSString *diagnosticReportFilePath; // @synthesize diagnosticReportFilePath=_diagnosticReportFilePath;
- (id)dictionaryRepresentation;
@property(readonly, nonatomic) NSDate *finish; // @synthesize finish=_finish;
- (id)initWithTitle:(id)arg1 UUID:(id)arg2 start:(id)arg3 finish:(id)arg4 screenshotFilePath:(id)arg5 snapshotFilePath:(id)arg6 diagnosticReportFilePath:(id)arg7 validationErrors:(id *)arg8;
@property(retain, nonatomic) XCSIntegrationAsset *screenshot; // @synthesize screenshot=_screenshot;
@property(readonly, nonatomic) NSString *screenshotFilePath; // @synthesize screenshotFilePath=_screenshotFilePath;
@property(retain, nonatomic) XCSIntegrationAsset *snapshot; // @synthesize snapshot=_snapshot;
@property(readonly, nonatomic) NSString *snapshotFilePath; // @synthesize snapshotFilePath=_snapshotFilePath;
@property(readonly, nonatomic) NSDate *start; // @synthesize start=_start;
@property(readonly, nonatomic) NSArray *subactivityResults; // @synthesize subactivityResults=_subactivityResults;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void)uploadAttachmentsToIntegration:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

