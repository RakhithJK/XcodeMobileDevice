//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMConnection;

@interface CAMMobileSyncConnection : NSObject
{
    CAMConnection *_connection;
}

+ (id)connectionWithConnection:(id)arg1;
- (void).cxx_destruct;
- (BOOL)_backupWithDeviceIdentifier:(id)arg1 usingProgressBlock:(CDUnknownBlockType)arg2;
- (BOOL)_restoreWithDeviceIdentifier:(id)arg1 sourceIdentifier:(id)arg2 appIdentifiers:(id)arg3 options:(id)arg4 usingProgressBlock:(CDUnknownBlockType)arg5;
- (BOOL)backupFromLockdown;
- (BOOL)backupFromLockdownUsingProgressBlock:(CDUnknownBlockType)arg1;
- (BOOL)backupFromNetwork;
- (BOOL)backupFromNetworkUsingProgressBlock:(CDUnknownBlockType)arg1;
- (BOOL)cancelBackupRestore;
@property(retain, nonatomic) CAMConnection *connection; // @synthesize connection=_connection;
- (id)initWithConnection:(id)arg1;
- (BOOL)restoreFromLockdownAndCopy:(BOOL)arg1 password:(id)arg2;
- (BOOL)restoreFromNetworkAndCopy:(BOOL)arg1 password:(id)arg2;
- (BOOL)restoreSourceFromLockdown:(id)arg1 copy:(BOOL)arg2 password:(id)arg3 usingProgressBlock:(CDUnknownBlockType)arg4;
- (BOOL)restoreSourceFromNetwork:(id)arg1 copy:(BOOL)arg2 password:(id)arg3 usingProgressBlock:(CDUnknownBlockType)arg4;

@end

