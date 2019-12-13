//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet;

@interface DTAssertionPidInfo : NSObject
{
    int _pid;
    NSArray *_blocks;
    NSMutableSet *_clientsWithClaim;
}

- (void).cxx_destruct;
- (void)addClaimForClient:(id)arg1;
@property(readonly) NSArray *blocks; // @synthesize blocks=_blocks;
- (BOOL)hasNoMoreClients;
- (id)initForPid:(int)arg1 withRemoveBlocks:(id)arg2 onBehalfOfClient:(id)arg3;
@property(readonly) int pid; // @synthesize pid=_pid;
- (void)removeAssertions;
- (BOOL)removeClaimFromClient:(id)arg1;

@end
