//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/XCDependencyCommand.h>

@interface XCDependencyShadowCommand : XCDependencyCommand
{
    XCDependencyCommand *_originalCommand;
}

- (id)arguments;
- (id)commandPath;
- (void)dealloc;
- (void)decrementWaitCountsOfDependingNodes;
- (id)description;
- (id)environment;
- (void)incrementWaitCountsOfDependingNodes;
- (id)initWithOriginalCommand:(id)arg1;
- (id)instantiatedCommandOutputParserWithLogSectionRecorder:(id)arg1;
- (BOOL)isReadyForProcessing;
- (id)name;
- (id)originalCommand;
- (id)ruleInfo;
- (id)subprocessCommandLineForProcessing;
- (id)workingDirectoryPath;

@end

