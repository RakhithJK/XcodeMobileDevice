//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDESchemeActionRunDestinationRecord.h>

#import <IDEKit/IDETestReport_Device-Protocol.h>

@class NSImage, NSString;

@interface IDESchemeActionRunDestinationRecord (IDETestReportModelObjects) <IDETestReport_Device>
@property(readonly, copy, nonatomic) NSString *ide_testReport_device_UTI;
@property(readonly, copy, nonatomic) NSString *ide_testReport_device_architecture;
@property(readonly, copy, nonatomic) NSString *ide_testReport_device_identifier;
@property(readonly, nonatomic) BOOL ide_testReport_device_isSimulator;
@property(readonly, copy, nonatomic) NSString *ide_testReport_device_modelName;
@property(readonly, copy, nonatomic) NSString *ide_testReport_device_name;
@property(readonly, copy, nonatomic) NSString *ide_testReport_device_osVersion;
@property(readonly, copy, nonatomic) NSString *ide_testReport_device_platformName;
@property(readonly, nonatomic) NSImage *ide_testReport_device_statusImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

