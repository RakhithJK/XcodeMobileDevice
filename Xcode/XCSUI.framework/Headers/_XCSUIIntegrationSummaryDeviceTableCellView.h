//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSTextField;

@interface _XCSUIIntegrationSummaryDeviceTableCellView : NSTableCellView
{
    NSTextField *_deviceName;
    NSTextField *_deviceModelName;
    NSTextField *_devicePlatform;
    NSTextField *_testStatus;
}

- (void).cxx_destruct;
@property __weak NSTextField *deviceModelName; // @synthesize deviceModelName=_deviceModelName;
@property __weak NSTextField *deviceName; // @synthesize deviceName=_deviceName;
@property __weak NSTextField *devicePlatform; // @synthesize devicePlatform=_devicePlatform;
- (void)drawRect:(struct CGRect)arg1;
@property __weak NSTextField *testStatus; // @synthesize testStatus=_testStatus;

@end

