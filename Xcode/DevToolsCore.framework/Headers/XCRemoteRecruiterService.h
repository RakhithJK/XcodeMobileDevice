//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSTimer, XCRecruiterConnection;

@interface XCRemoteRecruiterService : NSObject
{
    XCRecruiterConnection *_pConn;
    NSMutableDictionary *_volunteerStatus;
    NSTimer *_statusLoop;
    BOOL _forceVolunteerStat;
}

+ (id)defaultService;
- (void)_recruiterMessageReceived:(id)arg1;
- (void)_recruiterPersistentConnectionLost:(id)arg1;
- (void)_recruiterPersistentConnectionMade:(id)arg1;
- (id)_spaceSeparatedHostNamesForHostSet:(id)arg1;
- (id)addHostWithSpec:(id)arg1;
- (void)addHosts:(id)arg1;
- (void)connect;
- (void)connectionMade:(id)arg1;
- (void)dealloc;
- (void)ensureConnectionToHostSet:(id)arg1;
- (void)executeBuildOperation:(id)arg1 againstHostSet:(id)arg2;
- (id)hostWithSpec:(id)arg1;
- (id)init;
- (id)newRecruiterConnection;
- (void)removeHostWithSpec:(id)arg1;
- (void)removeHosts:(id)arg1;
- (void)startSynchronizationLoop;
- (void)statusForHostSet:(id)arg1;
- (void)stopSynchronizationLoop;
- (void)synchronizeWithRecruiter;
- (void)synchronizeWithRecruiter:(id)arg1;
- (void)updateHostStatus:(id)arg1;
- (id)volunteerStatus;

@end

