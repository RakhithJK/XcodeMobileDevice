//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface XCSystemStatisticsMeasurement : NSObject
{
    double _wallClockTime;
    long long _vmPageins;
    long long _vmPageouts;
}

+ (id)systemStatisticsMeasurement;
- (long long)compare:(id)arg1;
- (id)init;
- (id)initWithWallClockTime:(double)arg1 numberOfVMPageins:(long long)arg2 numberOfVMPageouts:(long long)arg3;
- (long long)numberOfVMPageins;
- (long long)numberOfVMPageouts;
- (id)systemStatisticsMeasurementByMakingRelativeToMeasurement:(id)arg1;
- (double)wallClockTime;

@end

