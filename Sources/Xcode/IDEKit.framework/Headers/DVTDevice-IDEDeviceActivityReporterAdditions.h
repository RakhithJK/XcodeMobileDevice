//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTDevice.h>

@class NSImage, NSString;

@interface DVTDevice (IDEDeviceActivityReporterAdditions)
@property(readonly) NSImage *activityImage;
@property(readonly) BOOL activityIsUserInitiated;
@property(readonly) long long activityProgress;
@property(readonly, copy) NSString *activityTitle;
@end
