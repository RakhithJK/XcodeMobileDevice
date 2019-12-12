//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreAutomation/CAMAMDConnection.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface CAMAMDRestorableConnection : CAMAMDConnection
{
    struct __AMRestorableDevice *_restorableDeviceRef;
    struct __AMRestoreModeDevice *_restoreModeDeviceRef;
    struct __AMRecoveryModeDevice *_recoveryModeDeviceRef;
    NSObject<OS_dispatch_queue> *_restorableAccessQ;
}

- (void).cxx_destruct;
- (void)dealloc;
- (struct _AMDevice *)deviceRef;
- (id)initWithDeviceRef:(struct __AMRestorableDevice *)arg1;
@property(nonatomic) struct __AMRecoveryModeDevice *recoveryModeDeviceRef;
- (id)remoteDeviceECID;
- (id)remoteDeviceEnvironmentVariable:(id)arg1;
- (unsigned int)remoteDeviceLocationID;
- (id)remoteDeviceSerialNumber;
@property(nonatomic) struct __AMRestorableDevice *restorableDeviceRef;
@property(nonatomic) struct __AMRestoreModeDevice *restoreModeDeviceRef;

@end

