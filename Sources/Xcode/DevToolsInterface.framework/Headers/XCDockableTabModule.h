//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXProjectModule.h>

#import <DevToolsInterface/NSTabViewDelegate-Protocol.h>
#import <DevToolsInterface/XCDockableDragSource-Protocol.h>

@class NSString, XCBorderView, XCExtendedTabView;

@interface XCDockableTabModule : PBXProjectModule <NSTabViewDelegate, XCDockableDragSource>
{
    XCExtendedTabView *_tabView;
    XCBorderView *_offsettingBox;
    BOOL _isDockTarget;
}

- (void)_chooseTab:(id)arg1;
- (void)becomeActive;
- (BOOL)canOrderFrontWindow;
- (void)closeIfAppropriate;
- (void)dealloc;
- (id)dockMenuItems;
- (id)dragSourceModule;
- (id)initWithLayout:(id)arg1 forModule:(id)arg2;
- (BOOL)isDockTarget;
- (id)keyModules;
- (id)layout;
- (BOOL)loadView;
- (id)mainEditor;
- (void)module:(id)arg1 didAddSubmodule:(id)arg2;
- (BOOL)moduleAtIndex:(long long)arg1 releasedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)moduleDidChangeLabel:(id)arg1;
- (void)moduleWasDisplayed;
- (void)moduleWillBeHidden;
- (void)openModuleInNewDockWindow:(id)arg1 styleMask:(unsigned long long)arg2 isFloating:(BOOL)arg3 isTransparent:(BOOL)arg4 withRect:(struct CGRect)arg5;
- (id)owningModuleForView:(id)arg1;
- (id)project;
- (void)removeSubmodule:(id)arg1;
- (id)removeSubmoduleAtIndex:(long long)arg1;
- (void)selectModule:(id)arg1;
- (id)selectedModule;
- (void)setIsDockTarget:(BOOL)arg1;
- (void)setupTabs;
- (void)showModule:(id)arg1;
- (struct CGSize)sizeOfSourceModule:(long long)arg1;
- (id)slideOutTabIconImage;
- (id)submodules;
- (void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

