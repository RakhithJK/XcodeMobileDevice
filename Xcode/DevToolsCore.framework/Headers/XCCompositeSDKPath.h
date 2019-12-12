//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/XCSDKPath.h>

#import <DevToolsCore/XCPosixTaskBackgroundParsing-Protocol.h>

@class NSMutableArray, NSMutableString, NSString, XCPosixTask;

@interface XCCompositeSDKPath : XCSDKPath <XCPosixTaskBackgroundParsing>
{
    NSString *_originalSDKROOT;
    NSMutableArray *_sourcePaths;
    BOOL _isCompositeSDK;
    BOOL _isUpdating;
    BOOL _ended;
    XCPosixTask *_task;
    NSString *_taskDescriptionString;
    NSMutableString *_results;
    NSMutableString *_errors;
    id _taskStatus;
    id _project;
}

- (BOOL)_compositeNeedsUpdating;
- (void)_constructCompositeSDKPath:(id)arg1;
- (id)_errorStrippedStringForString:(id)arg1;
- (id)_getArguments;
- (id)_initWithSDKString:(id)arg1 withBuildContext:(id)arg2;
- (void)_rebuild;
- (void)_verify:(id)arg1;
- (void)dealloc;
- (id)errors;
- (id)getSetTaskDescriptionString:(id)arg1;
- (BOOL)isCompositeSDK;
- (id)project;
- (BOOL)removeCompositeSDKDirectory;
- (id)results;
- (long long)runMKSDK;
- (void)setTaskStatus:(id)arg1;
- (void)task:(id)arg1 hasSpawnStatus:(int)arg2;
- (void)task:(id)arg1 receivedStderrObjectInBackground:(id)arg2;
- (void)task:(id)arg1 receivedStdoutObjectInBackground:(id)arg2;
- (id)taskDescriptionString;
- (void)taskDidTerminate:(id)arg1;
- (id)taskStatus;
- (BOOL)taskStopRunning;

@end

