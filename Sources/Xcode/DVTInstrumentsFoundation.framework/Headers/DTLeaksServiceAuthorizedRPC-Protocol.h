//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTInstrumentsFoundation/DTXAllowedRPC-Protocol.h>

@class NSArray, NSDictionary;

@protocol DTLeaksServiceAuthorizedRPC <DTXAllowedRPC>
- (NSDictionary *)requestGraph:(unsigned long long)arg1 options:(NSDictionary *)arg2;
- (NSArray *)requestMallocStackLog:(int)arg1 forAddress:(unsigned long long *)arg2 size:(unsigned long long)arg3 isLiteZone:(unsigned int)arg4;
@end
