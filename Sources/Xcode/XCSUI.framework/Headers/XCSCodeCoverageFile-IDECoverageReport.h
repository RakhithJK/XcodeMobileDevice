//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSCore/XCSCodeCoverageFile.h>

#import <XCSUI/IDECoverage_File-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface XCSCodeCoverageFile (IDECoverageReport) <IDECoverage_File>
@property(readonly, copy, nonatomic) NSArray *ide_coverage_children;
@property(readonly, copy, nonatomic) NSArray *ide_coverage_devices;
@property(readonly, copy, nonatomic) NSString *ide_coverage_filePath;
@property(readonly, copy, nonatomic) NSString *ide_coverage_identifier;
@property(readonly, copy, nonatomic) NSNumber *ide_coverage_lineCoveragePct;
@property(readonly, copy, nonatomic) NSNumber *ide_coverage_lineCoveragePctDelta;
@property(readonly, copy, nonatomic) NSArray *ide_coverage_methods;
@property(readonly, nonatomic) unsigned long long ide_coverage_methodsCount;
@property(readonly, copy, nonatomic) NSString *ide_coverage_title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

