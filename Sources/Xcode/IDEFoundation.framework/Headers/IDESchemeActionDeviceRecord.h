//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDESchemeActionPlatformRecord, NSString;

@interface IDESchemeActionDeviceRecord : NSObject
{
    BOOL _concreteDevice;
    NSString *_name;
    NSString *_operatingSystemVersion;
    NSString *_operatingSystemVersionWithBuildNumber;
    NSString *_nativeArchitecture;
    NSString *_modelName;
    NSString *_modelCode;
    NSString *_modelUTI;
    NSString *_identifier;
    NSString *_cpuKind;
    unsigned long long _cpuCount;
    unsigned long long _cpuSpeedInMHz;
    unsigned long long _busSpeedInMHz;
    unsigned long long _ramSizeInMegabytes;
    unsigned long long _physicalCPUCoresPerPackage;
    unsigned long long _logicalCPUCoresPerPackage;
    IDESchemeActionPlatformRecord *_platformRecord;
}

- (void).cxx_destruct;
@property unsigned long long busSpeedInMHz; // @synthesize busSpeedInMHz=_busSpeedInMHz;
@property unsigned long long cpuCount; // @synthesize cpuCount=_cpuCount;
@property(copy) NSString *cpuKind; // @synthesize cpuKind=_cpuKind;
@property unsigned long long cpuSpeedInMHz; // @synthesize cpuSpeedInMHz=_cpuSpeedInMHz;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithDevice:(id)arg1;
- (id)initWithDeviceName:(id)arg1 isConcreteDevice:(BOOL)arg2 nativeArchitecture:(id)arg3 operatingSystemVersion:(id)arg4 operatingSystemVersionWithBuildNumber:(id)arg5 modelName:(id)arg6 modelCode:(id)arg7 modelUTI:(id)arg8 identifier:(id)arg9 cpuKind:(id)arg10 cpuCount:(unsigned long long)arg11 cpuSpeedInMHz:(unsigned long long)arg12 busSpeedInMHz:(unsigned long long)arg13 ramSizeInMegabytes:(unsigned long long)arg14 physicalCPUCoresPerPackage:(unsigned long long)arg15 logicalCPUCoresPerPackage:(unsigned long long)arg16 platformRecord:(id)arg17;
- (id)initWithDictionaryRepresentation:(id)arg1;
@property(readonly, getter=isConcreteDevice) BOOL concreteDevice; // @synthesize concreteDevice=_concreteDevice;
@property unsigned long long logicalCPUCoresPerPackage; // @synthesize logicalCPUCoresPerPackage=_logicalCPUCoresPerPackage;
@property(readonly, copy, nonatomic) NSString *modelCode; // @synthesize modelCode=_modelCode;
@property(readonly, copy, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(readonly, copy, nonatomic) NSString *modelUTI; // @synthesize modelUTI=_modelUTI;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSString *nativeArchitecture; // @synthesize nativeArchitecture=_nativeArchitecture;
@property(readonly, copy) NSString *operatingSystemVersion; // @synthesize operatingSystemVersion=_operatingSystemVersion;
@property(readonly, copy, nonatomic) NSString *operatingSystemVersionWithBuildNumber; // @synthesize operatingSystemVersionWithBuildNumber=_operatingSystemVersionWithBuildNumber;
@property unsigned long long physicalCPUCoresPerPackage; // @synthesize physicalCPUCoresPerPackage=_physicalCPUCoresPerPackage;
@property(readonly, nonatomic) IDESchemeActionPlatformRecord *platformRecord; // @synthesize platformRecord=_platformRecord;
@property unsigned long long ramSizeInMegabytes; // @synthesize ramSizeInMegabytes=_ramSizeInMegabytes;

@end

