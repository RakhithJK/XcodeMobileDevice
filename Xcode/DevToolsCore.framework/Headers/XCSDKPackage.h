//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString, TSPropertyListDictionary, XCPlatformSpecification;

@interface XCSDKPackage : NSObject
{
    NSString *_path;
    TSPropertyListDictionary *_infoDictionary;
    NSArray *_defaultPropertyDicts;
    NSArray *_customPropertyDicts;
    NSArray *_preprocessorDefinitions;
    NSString *_canonicalName;
    NSString *_version;
    NSString *_displayName;
    NSString *_minimalDisplayName;
    NSString *_propertyConditionName;
    NSString *_propertyConditionFamily;
    XCPlatformSpecification *_platform;
    NSArray *_libraries;
    NSArray *_supportedBuildToolComponents;
    BOOL _isUserSDK;
}

+ (id)_pathToSettingsPlistFileAtPath:(id)arg1;
+ (id)_sdkPackageForResolvedAbsolutePath:(id)arg1;
+ (void)_setSDKPackage:(id)arg1 forResolvedAbsolutePath:(id)arg2;
+ (BOOL)_settingsPlistFileExistsAtPath:(id)arg1;
+ (void)initialize;
+ (id)localizedFamilyNameForCanonicalName:(id)arg1;
+ (id)localizedSDKNameForCanonicalName:(id)arg1;
+ (id)sdkPackageForAbsolutePath:(id)arg1;
+ (id)sdkPackageForAbsolutePath:(id)arg1 forceCreate:(BOOL)arg2;
+ (id)sdkPackageForBootSystem;
+ (id)sdkPackageForNameOrPath:(id)arg1;
+ (id)sdkPackageForNameOrPath:(id)arg1 withBasePath:(id)arg2;
+ (id)sdkPackageForNameOrPath:(id)arg1 withBasePath:(id)arg2 forceCreate:(BOOL)arg3;
+ (id)sdkPackagesInDirectory:(id)arg1 forPlatform:(id)arg2;
+ (id)systemSDKContainingAbsolutePath:(id)arg1;
+ (id)systemSdkFamilyNames;
+ (id)systemSdkForName:(id)arg1;
+ (id)systemSdkNames;
+ (id)systemSdksForFamilyName:(id)arg1;
+ (id)systemSdksOrderedByFamilyName;
- (void)_setIsUserSDK:(BOOL)arg1;
- (id)alternateSDK;
- (id)canonicalName;
- (long long)caseInsensitiveCompare:(id)arg1;
- (long long)compare:(id)arg1;
- (id)copyDefaultDeploymentVersionDict;
- (id)customPropertyDictionaries;
- (void)dealloc;
- (id)defaultPropertyDictionaries;
- (id)description;
- (id)displayName;
- (BOOL)exists;
- (unsigned long long)hash;
- (id)infoDictionary;
- (id)initWithName:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 infoDictionary:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isUserSDK;
- (id)libraries;
- (id)localizedDisplayName;
- (id)minimalDisplayName;
- (id)path;
- (id)platform;
- (id)preprocessorDefinitions;
- (id)propertyConditionFamily;
- (id)propertyConditionName;
- (void)setLibraries:(id)arg1;
- (void)setPlatform:(id)arg1;
- (id)supportedBuildToolComponents;
- (id)supportedDeviceFamilies;
- (id)unresolvedPath;
- (id)version;

@end
