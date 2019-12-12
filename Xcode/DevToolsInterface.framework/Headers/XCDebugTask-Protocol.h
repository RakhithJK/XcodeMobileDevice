//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXTrackableDebugTask-Protocol.h>

@class NSString, XCMenuBreakpointController;

@protocol XCDebugTask <PBXTrackableDebugTask>
- (void)debugTaskClearLogs:(id)arg1;
- (void)debugTaskContinue;
- (BOOL)debugTaskContinueIsValid;
- (void)debugTaskContinueToCallSymbol:(NSString *)arg1 inFile:(NSString *)arg2 lineNumber:(unsigned long long)arg3;
- (void)debugTaskContinueToFile:(NSString *)arg1 lineNumber:(unsigned long long)arg2;
- (void)debugTaskContinueToSymbol:(NSString *)arg1;
- (void)debugTaskExecUntilToFile:(NSString *)arg1 lineNumber:(unsigned long long)arg2;
- (void)debugTaskNextInstruction;
- (BOOL)debugTaskNextInstructionIsValid;
- (void)debugTaskNextThread;
- (BOOL)debugTaskNextThreadIsValid;
- (void)debugTaskPause;
- (BOOL)debugTaskPauseIsValid;
- (void)debugTaskPreviousThread;
- (BOOL)debugTaskPreviousThreadIsValid;
- (void)debugTaskRestart;
- (BOOL)debugTaskRestartIsValid;
- (void)debugTaskSetCurrentStopOnDebuggerDebugStrState;
- (void)debugTaskShowConsole:(id)arg1;
- (void)debugTaskShowExpressions:(id)arg1;
- (void)debugTaskShowGlobalVariables:(id)arg1;
- (void)debugTaskShowHUD;
- (void)debugTaskShowMemoryBrowsers:(id)arg1;
- (void)debugTaskShowSharedLibraries:(id)arg1;
- (void)debugTaskStepInstruction;
- (BOOL)debugTaskStepInstructionIsValid;
- (void)debugTaskStepInto;
- (BOOL)debugTaskStepIntoIsValid;
- (void)debugTaskStepOut;
- (BOOL)debugTaskStepOutIsValid;
- (void)debugTaskStepOver;
- (BOOL)debugTaskStepOverIsValid;
- (void)debugTaskSync;
- (BOOL)debugTaskSyncIsValid;
- (void)debugTaskToggleDisassemblyDisplay:(long long)arg1;
- (void)debugTaskToggleEnableBreakpoints:(BOOL)arg1;
- (void)debugTaskToggledMenuBreakpoint:(XCMenuBreakpointController *)arg1 toState:(BOOL)arg2;
- (void)debugTaskUndoToCheckpoint;
- (BOOL)debugTaskUndoToCheckpointIsValid;
- (BOOL)isCustomizedDataDisplayEnabled;
- (BOOL)isDebugStrEnabled;
- (BOOL)isDebugging;
- (BOOL)isLibgmallocEnabled;
- (void)toggleCustomizedDataDisplayEnabled:(id)arg1;
- (void)toggleShowTypeColumn:(id)arg1;
- (BOOL)toggleShowTypeColumnIsValid;
@end

