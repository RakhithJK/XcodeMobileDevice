//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, SCMSandboxEntry;

@interface XCSCMInfo : NSObject
{
    SCMSandboxEntry *_sandboxEntry;
    NSMutableDictionary *_scmProperties;
}

- (id)_refSCMStatusString;
- (void)clear;
- (void)dealloc;
- (id)description;
- (BOOL)hasMoreInterestingInfoThan:(id)arg1;
- (id)initWithSandboxEntry:(id)arg1;
- (void)printSCMProperties;
- (id)sandboxEntry;
- (id)scmObjectForKey:(id)arg1;
- (id)scmProperties;
- (id)scmStateShortString;
- (id)scmStateString;
- (void)sendStateChangeNotificationForReference:(id)arg1 inProject:(id)arg2;
- (void)setLog:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setSandboxEntry:(id)arg1;

@end

