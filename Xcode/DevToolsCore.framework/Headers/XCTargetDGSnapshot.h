//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, PBXGlobalID, PBXPackageTypeSpecification, XCPlatformSpecification, XCProductTypeSpecification, XCPropertyExpansionContext, XCSDKPackage;

@interface XCTargetDGSnapshot : NSObject
{
    NSString *_buildAction;
    NSString *_requestedConfigName;
    NSString *_effectiveConfigName;
    XCPropertyExpansionContext *_propertyExpansionContext;
    XCPlatformSpecification *_platform;
    XCSDKPackage *_sdk;
    NSArray *_projectConfigFileErrors;
    NSArray *_targetConfigFileErrors;
    PBXGlobalID *_globalID;
    NSString *_name;
    NSString *_productName;
    NSString *_fullProductName;
    NSString *_projectName;
    NSString *_projectDirectory;
    NSArray *_namesOfMissingDependencies;
    NSArray *_hmapCreationInfoForAllTargets;
    NSArray *_projectHeadermapFilePaths;
    NSArray *_implicitRezSearchPathFilePaths;
    BOOL _isAggregate;
    XCProductTypeSpecification *_productType;
    PBXPackageTypeSpecification *_packageType;
    NSArray *_buildPhases;
    NSString *_defaultConfigurationName;
    NSDictionary *_universalDefaultBuildSettings;
    NSDictionary *_buildSystemDefaultBuildSettings;
    NSDictionary *_applicationPreferencesBuildSettings;
    NSDictionary *_dynamicallyComputedProjectwideBuildSettings;
    NSArray *_projectBuildSettings;
    NSDictionary *_userProjectBuildSettings;
    NSDictionary *_dynamicallyComputedTargetBuildSettings;
    NSArray *_targetBuildSettings;
    NSDictionary *_projectOverridingBuildSettings;
    NSDictionary *_globalOverridingBuildSettings;
    NSDictionary *_commandLineXcconfigFileBuildSettings;
    NSDictionary *_environmentXcconfigFileBuildSettings;
    NSArray *_defaultBuildRules;
    NSArray *_customBuildRules;
    NSArray *_alternateBuildRules;
    NSDictionary *_productSettings;
    NSString *_infoPlistSourceFilePath;
    BOOL _shouldUseDistributedBuilds;
    int _distributedBuildSystemInUse;
    NSString *_distributedBuildToolCommandPath;
    NSString *_activeArchitecture;
}

+ (id)targetTypeName;
- (id)activeArchitecture;
- (id)alternateBuildRules;
- (id)applicationPreferencesBuildSettings;
- (id)buildAction;
- (id)buildPhaseOfClass:(Class)arg1;
- (id)buildPhases;
- (id)buildSystemDefaultBuildSettings;
- (id)commandLineXcconfigFileBuildSettings;
- (void)computeDependenciesInTargetBuildContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)customBuildRules;
- (void)dealloc;
- (id)defaultBuildRules;
- (id)defaultConfigurationName;
- (id)defaultFrameworksBuildPhase;
- (id)defaultHeaderBuildPhase;
- (id)defaultJavaArchiveBuildPhase;
- (id)defaultLinkBuildPhase;
- (id)defaultResourceBuildPhase;
- (id)defaultRezBuildPhase;
- (id)defaultSourceCodeBuildPhase;
- (id)description;
- (int)distributedBuildSystemInUse;
- (id)distributedBuildToolCommandPath;
- (id)dynamicallyComputedProjectwideBuildSettings;
- (id)dynamicallyComputedTargetBuildSettings;
- (id)effectiveConfigurationName;
- (void)enqueueCommandsOntoWorkQueue:(id)arg1;
- (id)environmentXcconfigFileBuildSettings;
- (id)fullProductName;
- (id)globalID;
- (id)globalOverridingBuildSettings;
- (id)implicitRezSearchPathFilePaths;
- (id)infoPlistSourceFilePath;
- (id)init;
- (id)initWithInformationFromTarget:(id)arg1 withBuildState:(id)arg2;
- (BOOL)isAggregate;
- (BOOL)isJambased;
- (BOOL)isNative;
- (id)name;
- (id)namesOfMissingDependencies;
- (id)packageType;
- (id)pkgInfoContents;
- (id)platform;
- (void)printForDebugging;
- (id)productName;
- (id)productParts;
- (id)productSettings;
- (id)productSettingsWithPrunedCFBundleEntries;
- (id)productType;
- (id)projectBuildSettings;
- (id)projectDirectory;
- (id)projectHeadermapFilePaths;
- (id)projectName;
- (id)projectOverridingBuildSettings;
- (id)propertyExpansionContext;
- (id)requestedConfigurationName;
- (id)sdk;
- (BOOL)shouldUseDistributedBuilds;
- (id)targetBuildSettings;
- (id)targetHeadermapCreationInfoForAllTargets;
- (id)universalDefaultBuildSettings;
- (id)userProjectBuildSettings;

@end

