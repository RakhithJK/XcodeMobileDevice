//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXLSExecutableLauncher.h>

#import <DevToolsInterface/PBXTSTaskDelegate-Protocol.h>

@class NSArray, NSString, PBXTSPTYDeviceByteStream, PBXTSTask;

@interface PBXLSTaskExecutableLauncher : PBXLSExecutableLauncher <PBXTSTaskDelegate>
{
    PBXTSTask *_task;
    PBXTSPTYDeviceByteStream *_ptyStream;
    NSArray *_preferredArchitectures;
}

+ (void)initialize;
- (BOOL)activeArchIsValidForLaunch;
- (void)adaptorsSetTaskIsRunning:(BOOL)arg1;
- (id)byteStreamConsumerToExecutable;
- (id)byteStreamConsumerToTask;
- (id)byteStreamFromExecutable;
- (id)byteStreamFromTask;
- (void)cleanup;
- (BOOL)cpuSupports64Bit;
- (void)dealloc;
- (BOOL)disableArchCheck;
- (int)executablePlatformExitInformation;
- (int)executableProcessID;
- (int)executableTerminationStatus;
- (id)init;
- (BOOL)launch;
- (void)launchAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (id)preferredArchitectures;
- (void)setPreferredArchitectures:(id)arg1;
- (void)setupLauncher;
- (void)stop;
- (void)stopImmediately;
- (BOOL)supportsCrashCatching;
- (BOOL)supportsRosetta;
- (id)task;
- (void)task:(id)arg1 failureMessage:(id)arg2;
- (void)task:(id)arg1 outputData:(id)arg2;
- (void)taskAllocate;
- (id)taskArguments;
- (void)taskConfigureExecutionContext;
- (void)taskConfigureStdIO;
- (void)taskDidStart:(id)arg1;
- (void)taskDidStop:(id)arg1 stopRequested:(BOOL)arg2;
- (id)taskDirectory;
- (id)taskEnvironment;
- (id)taskPath;
- (int)taskProcessID;
- (void)userInterfaceWillBeRemoved;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

