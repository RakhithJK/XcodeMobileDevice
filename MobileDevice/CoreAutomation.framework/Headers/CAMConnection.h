//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface CAMConnection : NSObject
{
}

+ (long long)globalTimeout;
+ (void)setGlobalTimeout:(long long)arg1;
- (id)performCommandFromClass:(id)arg1 method:(id)arg2 arguments:(id)arg3 asRoot:(BOOL)arg4;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2 asRoot:(BOOL)arg3;
@property(readonly) __weak NSNumber *remoteDeviceECID;
- (BOOL)remoteDeviceIsPresent;
@property(readonly) __weak NSString *remoteDeviceModelNumber;
@property __weak NSString *remoteDeviceName;
@property(readonly) __weak NSString *remoteDeviceProductType;
@property(readonly) __weak NSString *remoteDeviceProductVersion;
@property(readonly) __weak NSString *remoteDeviceSerialNumber;
@property(readonly) __weak NSString *remoteDeviceUDID;
- (void *)sendMessage:(void *)arg1 asRoot:(BOOL)arg2 waitForResponseUntilDate:(id)arg3;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2 asRoot:(BOOL)arg3;

@end

