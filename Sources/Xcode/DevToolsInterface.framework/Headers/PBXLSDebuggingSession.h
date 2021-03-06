//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXLSLaunchSession.h>

@class NSMutableArray, PBXLSDebuggerAdaptor, PBXLSProcess;
@protocol PBXLSRestartExecutableRequest;

@interface PBXLSDebuggingSession : PBXLSLaunchSession
{
    PBXLSProcess *_process;
    PBXLSDebuggerAdaptor<PBXLSRestartExecutableRequest> *_restartExecAdaptor;
    NSMutableArray *_debuggerAdaptors;
}

+ (id)traceName;
- (void)_addBreakpoints:(id)arg1 forDebugger:(id)arg2;
- (void)_attemptChangeOfBreakpoint:(id)arg1 forDebugger:(id)arg2;
- (void)_attemptCreateOfBreakpoint:(id)arg1 forDebugger:(id)arg2;
- (void)_attemptDeleteOfBreakpoint:(id)arg1 forDebugger:(id)arg2;
- (void)_breakpointWasAdded:(id)arg1;
- (void)_breakpointWillBeDeleted:(id)arg1;
- (id)_debuggerAdaptors;
- (void)_globalBreakpointDidChange:(id)arg1;
- (void)_projectDidOpen:(id)arg1;
- (void)_projectItemsDidChange:(id)arg1;
- (void)_projectWillClose:(id)arg1;
- (void)_removeBreakpoints:(id)arg1 forDebugger:(id)arg2;
- (void)addInitialBreakpointToDebugger:(id)arg1;
- (BOOL)customDataFormattersEnabled;
- (void)dealloc;
- (id)debugSessionModule;
- (id)debuggerAdaptorForExecutableRestart;
- (void)debuggerDidInitialize:(id)arg1;
- (id)initWithSessionModule:(id)arg1 launchConfig:(id)arg2 executable:(id)arg3;
- (id)process;
- (void)registerRestartExecutableAdaptor:(id)arg1;
- (void)restartExecutable;
- (void)sendLogMessageToDebuggers:(id)arg1;
- (void)suspendExecutable;
- (void)syncWithDebugger;

@end

