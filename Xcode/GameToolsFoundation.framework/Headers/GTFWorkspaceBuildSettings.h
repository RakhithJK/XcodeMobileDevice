//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableSet, NSSet;

@interface GTFWorkspaceBuildSettings : NSObject
{
    NSMutableSet *_buildables;
    NSMapTable *_buildableToConfigBuildParameters;
}

+ (id)buildSettingsForWorkspace:(id)arg1;
- (void).cxx_destruct;
- (void)_buildSettingsSnapshotForWorkspace:(id)arg1;
- (void)_setBuildParameters:(id)arg1 forConfiguration:(id)arg2 inBuildable:(id)arg3;
@property(readonly, nonatomic) NSSet *iOSDeploymentTargets;
- (id)initWithWorkspace:(id)arg1;
@property(readonly, nonatomic) NSSet *macOSXDeploymentTargets;
- (id)valuesForBuildSetting:(id)arg1;

@end

