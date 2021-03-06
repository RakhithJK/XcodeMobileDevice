//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXProjectModule.h>

#import <DevToolsInterface/NSTableViewDataSource-Protocol.h>
#import <DevToolsInterface/PBXLSViewControllerProtocol-Protocol.h>

@class NSButton, NSPopUpButton, NSSearchField, NSString, NSTextField, PBXExecutable, PBXExtendedTableView, PBXLSDynamicLinkerImageController, XCExtendedArrayController;

@interface PBXLSDynamicLinkerImageModule : PBXProjectModule <NSTableViewDataSource, PBXLSViewControllerProtocol>
{
    PBXLSDynamicLinkerImageController *_controller;
    PBXExtendedTableView *_tableView;
    NSButton *_addButton;
    NSButton *_deleteButton;
    NSButton *_resetButton;
    NSButton *_helpButton;
    NSTextField *_executablePath;
    NSTextField *_nameTextField;
    NSTextField *_pathTextField;
    XCExtendedArrayController *_selectedShlibsController;
    NSPopUpButton *_systemLevelPopUp;
    NSPopUpButton *_userLevelPopUp;
    NSSearchField *_searchField;
    PBXExecutable *_executable;
}

+ (id)defaultModuleNibName;
- (id)_controllerExecutable;
- (void)activeExecutableDidChange:(id)arg1;
- (void)addObjectFile:(id)arg1;
- (void)closeModule;
- (void)currentSymbolLevelChanged:(id)arg1;
- (void)dealloc;
- (void)debugSessionEnded:(id)arg1;
- (void)deleteSelection:(id)arg1;
- (void)didAddImageController;
- (void)dsModelDidUpdate:(id)arg1;
- (void)dsModelWillDealloc:(id)arg1;
- (id)dynamicLinkerImageController;
- (id)executable;
- (unsigned long long)moduleWindowStyleMask;
- (id)newObjectBasedOnObject:(id)arg1 fromController:(id)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)openPanelDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)reload:(id)arg1;
- (void)resetShlibsAction:(id)arg1;
- (void)selectSymbolPopupsForExecutable:(id)arg1;
- (void)setDefaultSystemSymbolLevel:(id)arg1;
- (void)setDefaultUserSymbolLevel:(id)arg1;
- (void)setDynamicLinkerImageController:(id)arg1;
- (void)setExecutable:(id)arg1;
- (void)setSymbolLevel:(int)arg1 forImage:(id)arg2;
- (id)symbolLevelArray;
- (void)tableView:(id)arg1 deleteRows:(id)arg2;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 shouldSelectTableColumn:(id)arg2;
- (void)update;
- (void)updateDefaultTitleForExecutableSymbolLevelPopups:(id)arg1;
- (void)updateWindowTitle:(id)arg1;
- (void)viewDidLoad;
- (struct CGSize)viewMinSize;
- (void)willAddImageController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

