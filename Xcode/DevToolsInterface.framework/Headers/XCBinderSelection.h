//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/XCSelection.h>

@class XCOrganizerDeviceNodeInfo, XCOrganizerFileSystemNodeInfo, XCOrganizerNodeInfo;

@interface XCBinderSelection : XCSelection
{
    XCOrganizerFileSystemNodeInfo *_selectedNode;
}

+ (id)keyPathsForValuesAffectingDeviceNode;
+ (id)keyPathsForValuesAffectingFileSystemNode;
- (void)_performBinderAction:(id)arg1 ofType:(int)arg2;
- (void)_performDefaultOrganizerActionForActionType:(int)arg1;
- (id)binderItemOfSelectedNode;
- (id)binderModule;
- (void)cleanBuild:(id)arg1;
- (void)dealloc;
- (void)debugTaskToggleEnableBreakpoints:(id)arg1;
- (id)initWithBinderModule:(id)arg1;
- (void)invalidate;
- (void)makeSnapshot:(id)arg1;
- (void)makeSnapshotFromMainMenu:(id)arg1;
- (void)performOrganizerBuildAction:(id)arg1;
- (void)performOrganizerCleanAction:(id)arg1;
- (void)performOrganizerOtherAction:(id)arg1;
- (void)performOrganizerRunAction:(id)arg1;
- (void)performSelectedOrganizerAction:(id)arg1;
- (id)project;
- (id)projectDocument;
@property(readonly) XCOrganizerDeviceNodeInfo *selectedDeviceNode; // @dynamic selectedDeviceNode;
@property(readonly) XCOrganizerFileSystemNodeInfo *selectedFileSystemNode; // @dynamic selectedFileSystemNode;
@property(retain) XCOrganizerNodeInfo *selectedNode; // @synthesize selectedNode=_selectedNode;
- (BOOL)selectedNodeCanBeDebugged;
- (BOOL)selectedNodeCanBeSnapshotted;
- (BOOL)selectedNodeContainsActionsOfType:(int)arg1;
- (void)showBuildResults:(id)arg1;
- (void)showConsole:(id)arg1;
- (void)showDebugger:(id)arg1;
- (void)showFindTab:(id)arg1;
- (void)showSnapshots:(id)arg1;
- (void)toggleBuild:(id)arg1;
- (void)toggleGo:(id)arg1;
- (void)toggleGoBreakpointsOff:(id)arg1;
- (void)toggleGoBreakpointsOn:(id)arg1;
- (int)validateMenuItem_cleanBuild:(id)arg1;
- (int)validateMenuItem_debugTaskToggleEnableBreakpoints:(id)arg1;
- (int)validateMenuItem_makeSnapshot:(id)arg1;
- (int)validateMenuItem_makeSnapshotFromMainMenu:(id)arg1;
- (int)validateMenuItem_showBuildResults:(id)arg1;
- (int)validateMenuItem_showConsole:(id)arg1;
- (int)validateMenuItem_showDebugger:(id)arg1;
- (int)validateMenuItem_showFindTab:(id)arg1;
- (int)validateMenuItem_showSnapshots:(id)arg1;
- (int)validateMenuItem_toggleBuild:(id)arg1;
- (int)validateMenuItem_toggleGo:(id)arg1;
- (int)validateMenuItem_toggleGoBreakpointsOff:(id)arg1;
- (int)validateMenuItem_toggleGoBreakpointsOn:(id)arg1;

@end
