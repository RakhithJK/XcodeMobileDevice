//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/XCFileBuildOperation.h>

@class NSMutableDictionary;

@interface XCPreprocessFileBuildOperation : XCFileBuildOperation
{
    NSMutableDictionary *_sourceFilePathsToPreprocessedFilePaths;
}

- (int)cleanupAfterRunning;
- (id)createDependenciesForProcessingSourceFileReference:(id)arg1 inTargetBuildContext:(id)arg2;
- (void)dealloc;

@end

