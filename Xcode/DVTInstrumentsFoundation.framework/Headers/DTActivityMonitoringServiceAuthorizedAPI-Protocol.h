//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTInstrumentsFoundation/DTXAllowedRPC-Protocol.h>

@class NSMutableDictionary, NSNumber;

@protocol DTActivityMonitoringServiceAuthorizedAPI <DTXAllowedRPC>
- (NSMutableDictionary *)configureLaunchEnvironment:(NSMutableDictionary *)arg1;
- (NSNumber *)killPid:(NSNumber *)arg1 withSignal:(NSNumber *)arg2;
- (void)setSamplingRate:(NSNumber *)arg1;
- (void)startSamplingWithPid:(int)arg1;
- (void)stopSampling;
@end

