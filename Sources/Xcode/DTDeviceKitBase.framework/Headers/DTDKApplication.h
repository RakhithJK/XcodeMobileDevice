//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DTDeviceKitBase/DTDKApplicationItemBase.h>

@class DTDKRemoteDeviceToken, NSDictionary, NSString;

@interface DTDKApplication : DTDKApplicationItemBase
{
    struct __AFCConnection *_connection;
    unsigned int _useAggregateItem:1;
    unsigned long long _connection_rc;
    NSDictionary *_plist;
    DTDKRemoteDeviceToken *deviceData;
}

+ (id)applicationWithDeviceData:(id)arg1 andPlist:(id)arg2;
+ (id)applicationWithPropertiesFromApplication:(id)arg1;
+ (id)keyPathsForValuesAffectingDevicePath;
+ (id)keyPathsForValuesAffectingIdentifier;
+ (id)keyPathsForValuesAffectingInstalledPath;
+ (id)keyPathsForValuesAffectingIsFairPlayEncrypted;
+ (id)keyPathsForValuesAffectingName;
+ (id)keyPathsForValuesAffectingPropertyListRepresentation;
- (void).cxx_destruct;
- (void)_notifyApplicationDataDidChange;
- (_Bool)_withConnection:(CDUnknownBlockType)arg1;
- (id)application;
- (id)attributesOfItemAtPath:(id)arg1 error:(id *)arg2;
- (id)bundleIdentifier;
- (id)bundlePath;
@property(readonly) struct __AFCConnection *connection; // @synthesize connection=_connection;
- (id)contentsOfDirectoryAtPath:(id)arg1 error:(id *)arg2;
- (BOOL)createDirectoryAtPath:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)description;
@property __weak DTDKRemoteDeviceToken *deviceData; // @synthesize deviceData;
- (id)deviceIdentifier;
- (id)devicePath;
@property(readonly) NSString *executableName;
- (id)executableVersion;
- (id)identifier;
- (id)initWithPropertyListRepresentation:(id)arg1 error:(id *)arg2;
@property(readonly, copy) NSString *installedPath;
- (void)invalidate;
- (_Bool)isFairPlayEncrypted;
@property(readonly) BOOL isHidden;
- (_Bool)isLeaf;
- (id)minimumOSVersion;
- (id)name;
@property(copy) NSDictionary *plist; // @synthesize plist=_plist;
- (BOOL)processAFCOperation:(struct __AFCOperation *)arg1 error:(id *)arg2;
@property(readonly, copy) NSDictionary *propertyListRepresentation;
- (void)refresh;
@property _Bool useAggregateItem;
- (_Bool)uploadFile:(id)arg1 error:(id *)arg2;
- (_Bool)uploadFile:(id)arg1 syncRecords:(id)arg2 resultingSyncRecords:(id)arg3 error:(id *)arg4;

@end

