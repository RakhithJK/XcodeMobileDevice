//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXDebugDSModelViewModule.h>

@class NSMutableArray, PBXDebugStackTableHeaderCell, PBXExtendedTableView;

@interface PBXDebugThreadViewModule : PBXDebugDSModelViewModule
{
    PBXExtendedTableView *_stackView;
    long long _selectedStackFrameIndex;
    BOOL _stepDidTimeOut;
    BOOL _waitingForStepTimeOut;
    NSMutableArray *_cachedFunctionNames;
    PBXDebugStackTableHeaderCell *_threadsTablePopUp;
}

- (void)_doubleClickAction:(id)arg1;
- (void)_reloadStackView;
- (void)_singleClickAction:(id)arg1;
- (void)_startKeyboardSelectionTimer;
- (void)_startWaitingForStepTimeOut;
- (void)_stepDidTimeOut;
- (float)_stepTimeOutValue;
- (void)_stopKeyboardSelectionTimer;
- (void)_stopWaitingForStepTimeOut;
- (void)awakeFromNib;
- (void)commonButtonAction;
- (void)continueThread;
- (void)dealloc;
- (void)debugSessionEnded:(id)arg1;
- (id)geometryConfigurationDictionary;
- (id)initWithModuleNibName:(id)arg1;
- (void)moduleWindowWillClose:(id)arg1;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)selectCurrentlySelectedFrame;
- (void)selectFrameAtIndex:(long long)arg1;
- (id)selectedStackFrame;
- (long long)selectedStackFrameIndex;
- (id)selectedStackFrameViewModule;
- (void)setModel:(id)arg1;
- (void)setSelectedStackFrame:(id)arg1;
- (BOOL)shouldReload;
- (id)stackTableThreadsPopUp;
- (id)stackView;
- (void)stepInto;
- (void)stepIntoInstruction;
- (void)stepOut;
- (void)stepOver;
- (void)stepOverInstruction;
- (void)stepUntilLineNumber:(unsigned long long)arg1;
- (void)tableView:(id)arg1 handleReturnKey:(id)arg2 changeFocus:(BOOL)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)takeGeometryConfigurationFromDictionary:(id)arg1;
- (id)thread;
- (BOOL)threadIsRunning;
- (BOOL)threadIsRunningButNotStepping;
- (BOOL)threadIsSteppable;
- (BOOL)threadStepDidTimeout;
- (void)updateUI;
- (void)viewDidLoad;
- (struct CGSize)viewMinSize;

@end

