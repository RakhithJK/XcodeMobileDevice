//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTInstrumentsFoundation/DTXAllowedRPC-Protocol.h>

@class NSDictionary;

@protocol DTTapAuthorizedAPI <DTXAllowedRPC>
- (void)fetchDataNow;
- (void)pause;
- (void)setConfig:(NSDictionary *)arg1;
- (void)start;
- (void)stop;
- (void)unpause;
@end

