//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreAutomation/CAMMobileDeviceState.h>

@class CAMAFCConnection, CAMAMDConnection, CAMLocknetConnection, CAMSyslogConnection, NSMutableDictionary, NSRecursiveLock, NSString;

@interface CAMMobileDeviceBootedState : CAMMobileDeviceState
{
    NSRecursiveLock *instanceLock;
    NSString *udid;
    NSMutableDictionary *mobdevProperties;
    BOOL connected;
    CAMLocknetConnection *rootLocknetConnection;
    CAMLocknetConnection *mobileLocknetConnection;
    CAMAFCConnection *afcConnection;
    CAMSyslogConnection *syslogConnection;
}

+ (void)handleDeviceAttached:(struct __AMRestorableDevice *)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (void)handleDeviceDetached:(struct __AMRestorableDevice *)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (int)runPlatformCommand:(id)arg1;
- (void).cxx_destruct;
- (void)addProvisioningProfile:(id)arg1;
@property(retain) CAMAFCConnection *afcConnection; // @synthesize afcConnection;
@property(readonly) __weak CAMAMDConnection *amdConnection;
- (BOOL)backupFromLockdown;
- (BOOL)backupFromNetwork;
- (BOOL)backupFromNetworkUsingProgressBlock:(CDUnknownBlockType)arg1;
- (BOOL)cancelBackupRestore;
- (void)connect;
- (void)deactivate;
- (void)dealloc;
- (void)disconnect;
- (id)errorTextFromAMDError:(int)arg1;
- (void)executeCommand:(id)arg1;
- (BOOL)fileExistsAtPath:(id)arg1;
- (BOOL)fileExistsAtPath:(id)arg1 isDirectory:(char *)arg2;
- (id)getInstalledApplications;
- (id)getProvisioningProfiles;
- (BOOL)getToDFU;
- (BOOL)getToOS;
- (BOOL)getToiBoot;
- (void)handleAttached;
- (void)handleDetached;
- (id)initWithAMDRestorableConnection:(id)arg1;
- (void)installAppFromPath:(id)arg1 installType:(id)arg2;
- (BOOL)installCarrierBundle:(id)arg1;
- (id)installedApplicationsMatchingFilter:(id)arg1;
@property(readonly) NSRecursiveLock *instanceLock; // @synthesize instanceLock;
- (BOOL)isAttachedViaUSB;
- (BOOL)isPaired;
- (BOOL)isPresent;
- (BOOL)isResponsive;
@property(retain) CAMLocknetConnection *mobileLocknetConnection; // @synthesize mobileLocknetConnection;
- (BOOL)mobileSyncConnection:(CDUnknownBlockType)arg1;
- (id)modelNumber;
- (void)pair;
- (void)reboot;
- (BOOL)removeItemAtPath:(id)arg1;
- (void)removeProvisioningProfile:(id)arg1;
- (BOOL)restoreFromLockdownAndCopy:(BOOL)arg1 password:(id)arg2;
- (BOOL)restoreFromNetworkAndCopy:(BOOL)arg1 password:(id)arg2;
- (BOOL)restoreSourceFromLockdown:(id)arg1 copy:(BOOL)arg2 password:(id)arg3 usingProgressBlock:(CDUnknownBlockType)arg4;
- (BOOL)restoreSourceFromNetwork:(id)arg1 copy:(BOOL)arg2 password:(id)arg3 usingProgressBlock:(CDUnknownBlockType)arg4;
- (BOOL)retrieve:(id)arg1 toLocation:(id)arg2;
- (BOOL)retrieve:(id)arg1 toLocation:(id)arg2 resolvingSymlinks:(BOOL)arg3;
- (BOOL)retrieveSource:(id)arg1 toLocation:(id)arg2;
- (BOOL)retrieveSources:(id)arg1 toLocation:(id)arg2;
@property(retain) CAMLocknetConnection *rootLocknetConnection; // @synthesize rootLocknetConnection;
- (BOOL)send:(id)arg1 toLocation:(id)arg2;
- (BOOL)send:(id)arg1 toLocation:(id)arg2 resolvingSymlinks:(BOOL)arg3;
- (id)serialNumber;
@property(copy) NSString *udid; // @synthesize udid;
- (BOOL)syncMediaAndABBundle:(id)arg1;
- (id)syslogConnection;
- (void)uninstallAppWithId:(id)arg1;
- (void)unlockedDisconnect;
- (void)unpair;

@end

