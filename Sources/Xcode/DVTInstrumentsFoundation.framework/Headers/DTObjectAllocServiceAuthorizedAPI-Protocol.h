//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTInstrumentsFoundation/DTXAllowedRPC-Protocol.h>

@class NSDictionary, NSNumber;

@protocol DTObjectAllocServiceAuthorizedAPI <DTXAllowedRPC>
- (NSNumber *)attachToPid:(NSNumber *)arg1 eventsMask:(NSNumber *)arg2;
- (NSDictionary *)preparedEnvironmentForLaunch:(NSDictionary *)arg1 eventsMask:(NSNumber *)arg2;
- (void)startCollectionWithPid:(int)arg1;
- (void)stopCollection;
@end

