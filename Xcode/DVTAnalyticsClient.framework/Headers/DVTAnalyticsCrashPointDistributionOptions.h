//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface DVTAnalyticsCrashPointDistributionOptions : NSObject
{
    NSArray *_options;
}

+ (id)_distributionWithStartDateDistro:(id)arg1 endDateDistro:(id)arg2 osVersions:(id)arg3 deviceFamilies:(id)arg4;
+ (id)distributionStartDate:(id)arg1 endDate:(id)arg2 osVersions:(id)arg3 deviceFamilies:(id)arg4;
+ (id)distributionWithDefaultDateRange;
+ (id)distributionWithDefaultDateRangeAndDeviceFamilies:(id)arg1;
+ (id)distributionWithDefaultDateRangeAndOSVersions:(id)arg1;
- (void).cxx_destruct;
@property(readonly) NSArray *options; // @synthesize options=_options;

@end
