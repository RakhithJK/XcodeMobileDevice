//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/XCTargetDGSnapshot.h>

@interface XCNativeTargetDGSnapshot : XCTargetDGSnapshot
{
}

- (BOOL)checkConsistencyOfTargetBuildContext:(id)arg1;
- (void)computeDependenciesInTargetBuildContext:(id)arg1;
- (id)initWithInformationFromTarget:(id)arg1 withBuildState:(id)arg2;
- (BOOL)isJambased;
- (BOOL)isNative;

@end

