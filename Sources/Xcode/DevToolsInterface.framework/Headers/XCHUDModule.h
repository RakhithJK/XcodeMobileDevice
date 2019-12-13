//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXProjectModule.h>

@class PBXDebugSessionModule, PBXNavigatorGroup, XCHUDView, XCMouseOverButton;

@interface XCHUDModule : PBXProjectModule
{
    XCMouseOverButton *masterPauseButton;
    id enableBreakpointsButton;
    XCMouseOverButton *showXcodeButton;
    XCMouseOverButton *closeHUDButton;
    XCMouseOverButton *stopButton;
    id executableName;
    XCHUDView *hudView;
    id sourceView;
    PBXDebugSessionModule *_debugSessionModule;
    PBXNavigatorGroup *_editorModule;
    struct CGRect _editorModuleFrame;
    int _mode;
    BOOL _shouldAnimateMode;
    struct CGRect _runningFrame;
    struct CGRect _pausedFrame;
}

- (void)_delayedSetMode;
- (void)_removeObserversAndBindings;
- (void)becomeActive;
- (BOOL)breakpointsButtonEnabled;
- (void)closeModule;
- (struct CGRect)constrainHudFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)debuggingWillStop:(id)arg1;
- (struct CGRect)getHUDRect;
- (void)hide;
- (void)hudDebuggerAction:(id)arg1;
- (void)hudEnableBreakpoints:(id)arg1;
- (void)hudHideAction:(id)arg1;
- (void)hudPauseAction:(id)arg1;
- (void)hudRestartAction:(id)arg1;
- (void)hudShowProjectAction:(id)arg1;
- (void)hudStopAction:(id)arg1;
- (void)isRunningNotification:(id)arg1;
- (void)isSteppableNotification:(id)arg1;
- (Class)moduleWindowClass;
- (id)moduleWindowFrameAutosaveName;
- (void)movedHUDFrames:(struct CGRect)arg1;
- (id)navigatorGroup;
- (void)saveHUDRect:(struct CGRect)arg1;
- (void)setBreakpointsButtonEnabled:(BOOL)arg1;
- (void)setDebugSessionModule:(id)arg1;
- (void)setMode:(int)arg1 animate:(BOOL)arg2;
- (void)setWantsModuleWindow:(BOOL)arg1;
- (void)show;
- (void)switchPauseToRestart;
- (void)switchRestartToPause;
- (void)updateHUDFrames:(struct CGRect)arg1;
- (void)viewDidLoad;
- (void)viewWillBeRemoved;

@end
