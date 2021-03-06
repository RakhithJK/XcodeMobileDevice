//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreAutomation/CAMConnection.h>

@class CAMAMDService, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CAMAMDConnection : CAMConnection
{
    struct _AMDevice *_deviceRef;
    CAMAMDService *_rootService;
    CAMAMDService *_mobileService;
    NSObject<OS_dispatch_queue> *_accessQ;
    NSObject<OS_dispatch_queue> *_servicesAccessQ;
    NSString *lastLockdownError;
}

- (void).cxx_destruct;
- (id)_errorTextFromAMDError:(int)arg1;
- (id)_mobileDeviceValueForKey:(struct __CFString *)arg1 inDomain:(struct __CFString *)arg2;
- (void)dealloc;
@property(nonatomic) struct _AMDevice *deviceRef;
- (void)disconnect;
- (id)initWithDeviceRef:(struct _AMDevice *)arg1;
- (BOOL)isBasebandReady;
@property(copy) NSString *lastLockdownError; // @synthesize lastLockdownError;
- (BOOL)lockdownConnect:(CDUnknownBlockType)arg1;
- (void)lockdownService:(struct _AMDServiceConnection **)arg1 withName:(id)arg2;
- (BOOL)lockdownSession:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) CAMAMDService *mobileService; // @synthesize mobileService=_mobileService;
- (id)propertyForKey:(struct __CFString *)arg1 inDomain:(struct __CFString *)arg2 waitOnBaseband:(BOOL)arg3;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2 asRoot:(BOOL)arg3;
- (id)remoteDeviceECID;
- (BOOL)remoteDeviceIsPresent;
- (id)remoteDeviceModelNumber;
- (id)remoteDeviceName;
- (id)remoteDeviceProductType;
- (id)remoteDeviceProductVersion;
- (id)remoteDeviceSerialNumber;
- (id)remoteDeviceUDID;
@property(retain, nonatomic) CAMAMDService *rootService; // @synthesize rootService=_rootService;
- (void *)sendMessage:(void *)arg1 asRoot:(BOOL)arg2 waitForResponseUntilDate:(id)arg3;
- (void)setProperty:(void *)arg1 forKey:(struct __CFString *)arg2 inDomain:(struct __CFString *)arg3;
- (void)setRemoteDeviceName:(id)arg1;
- (BOOL)waitForBasebandWithTimeout:(double)arg1;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2 asRoot:(BOOL)arg3;

@end

