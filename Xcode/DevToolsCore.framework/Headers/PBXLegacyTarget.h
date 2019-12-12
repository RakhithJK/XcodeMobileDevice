//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/PBXTarget.h>

@class NSString;

@interface PBXLegacyTarget : PBXTarget
{
    NSString *_buildToolPath;
    NSString *_buildArgumentsString;
    NSString *_buildWorkingDirectory;
    BOOL _passBuildSettingsInEnvironment;
    unsigned long long _settingsToExpand;
    unsigned long long _settingsToPassInEnvironment;
    unsigned long long _settingsToPassOnCommandLine;
}

+ (id)archivableAttributes;
+ (id)buildSystemDefaultBuildSettings;
+ (id)buildSystemDefaultBuildSettings_asPropertyValues;
+ (id)categorizedTargetName;
+ (id)standardBuildPhaseClasses;
+ (id)targetTypeDisplayName;
- (void)_setSettingsToPassInEnvironment:(id)arg1;
- (id)_settingsToExpand;
- (id)_settingsToPassInEnvironment;
- (id)_settingsToPassOnCommandLine;
- (id)buildArgumentsString;
- (id)buildSettingsPanes;
- (id)buildToolPath;
- (id)buildWorkingDirectory;
- (BOOL)canInstallHeaders;
- (id)commandsForCleaningInBuildContext:(id)arg1;
- (void)dealloc;
- (Class)dependencyGraphSnapshotClass;
- (id)dynamicallyComputedTargetBuildSettingsWithAction:(id)arg1 configurationName:(id)arg2;
- (id)initWithName:(id)arg1 productTypeIdentifier:(id)arg2 templateDictionary:(id)arg3 baseDirectoryPath:(id)arg4;
- (BOOL)isJambased;
- (BOOL)passesBuildSettingsInEnvironment;
- (void)setBuildArgumentsString:(id)arg1;
- (void)setBuildToolPath:(id)arg1;
- (void)setBuildWorkingDirectory:(id)arg1;
- (void)setPassesBuildSettingsInEnvironment:(BOOL)arg1;
- (BOOL)shouldWriteAuxiliaryFilesForBuildAction:(id)arg1;
- (BOOL)wantsProductSettings;
- (id)workQueueForBuildingWithBuildOperation:(id)arg1 buildLogRecorder:(id)arg2;

@end

