//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/XCBuildPhaseDGSnapshot.h>

@class NSString;

@interface XCCompileAndLinkMachOBuildPhaseDGSnapshot : XCBuildPhaseDGSnapshot
{
    NSString *_variant;
    NSString *_arch;
}

+ (id)defaultName;
- (void)computeDependenciesForBuildFileReference:(id)arg1 inTargetBuildContext:(id)arg2;
- (void)computeDependenciesInTargetBuildContext:(id)arg1;
- (id)initWithTargetSnapshot:(id)arg1;

@end

