//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, XCBuildPhaseSpecification, XCTargetDGSnapshot;

@interface XCBuildPhaseDGSnapshot : NSObject
{
    XCTargetDGSnapshot *_targetSnapshot;
    XCBuildPhaseSpecification *_type;
    NSString *_name;
    NSDictionary *_buildSettings;
    NSArray *_allBuildRules;
    NSArray *_buildFileRefs;
    BOOL _runOnlyForDeploymentPostprocessing;
}

+ (id)defaultName;
- (id)allBuildRules;
- (id)applyBuildRulesToFileReference:(id)arg1 forArchitecture:(id)arg2 inTargetBuildContext:(id)arg3;
- (id)buildFileRefs;
- (id)buildFilesToCountBaseNames;
- (id)buildRuleForFileNamed:(id)arg1 ofType:(id)arg2 architecture:(id)arg3;
- (id)buildRuleForReference:(id)arg1 architecture:(id)arg2;
- (id)buildSettings;
- (void)computeDependenciesForAllBuildFileReferencesInTargetBuildContext:(id)arg1;
- (void)computeDependenciesForBuildFileReference:(id)arg1 inTargetBuildContext:(id)arg2;
- (void)computeDependenciesInTargetBuildContext:(id)arg1;
- (id)customBuildRules;
- (void)dealloc;
- (void)enqueueCommandsOntoWorkQueue:(id)arg1;
- (id)filteredBuildFileReferencesForTargetBuildContext:(id)arg1;
- (id)init;
- (id)initWithInformationFromBuildPhase:(id)arg1 forTargetSnapshot:(id)arg2;
- (id)initWithTargetSnapshot:(id)arg1;
- (id)name;
- (void)printForDebugging;
- (BOOL)runOnlyForDeploymentPostprocessing;
- (id)targetSnapshot;
- (id)type;

@end

