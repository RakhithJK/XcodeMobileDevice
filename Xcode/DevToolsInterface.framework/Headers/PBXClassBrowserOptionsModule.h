//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXModule.h>

@class NSButton, NSMatrix, NSPopUpButton, PBXClassBrowserOptionsSet;

@interface PBXClassBrowserOptionsModule : PBXModule
{
    NSPopUpButton *_optionsSetsPopUpButton;
    NSButton *_addOptionsSetButton;
    NSButton *_deleteOptionsSetButton;
    NSPopUpButton *_classesPopUpButton;
    NSMatrix *_listOrOutlineRadioMatrix;
    NSPopUpButton *_classesOrProtocolsPupUpButton;
    NSPopUpButton *_categoriesPopUpButton;
    NSButton *_inheritedCheckbox;
    NSPopUpButton *_dataOrMethodsPopUpButton;
    NSPopUpButton *_instanceOrClassPopUpButton;
    NSButton *_okButton;
    PBXClassBrowserOptionsSet *_currentOptionsSet;
    SEL _didEndSelector;
}

+ (id)sharedClassBrowserOptionsModule;
- (void)_loadUIFromClassBrowserOptionsSet:(id)arg1;
- (void)_rebuildOptionsSetsPopUp;
- (void)_saveUIToClassBrowserOptionsSet:(id)arg1;
- (void)_selectCurrentOptionsSetInPopUp;
- (void)_sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)addOptionsSetButtonAction:(id)arg1;
- (void)dealloc;
- (void)deleteOptionsSetButtonAction:(id)arg1;
- (id)initWithModuleNibName:(id)arg1;
- (void)listOrOutlineRadioAction:(id)arg1;
- (Class)moduleWindowClass;
- (id)moduleWindowFrameAutosaveName;
- (unsigned long long)moduleWindowStyleMask;
- (void)okButtonAction:(id)arg1;
- (void)optionsSetPopUpButtonAction:(id)arg1;
- (void)runSheetModalForWindow:(id)arg1 forClassBrowser:(id)arg2 didEndSelector:(SEL)arg3;
- (void)viewDidLoad;
- (struct CGSize)viewMaxSize;
- (struct CGSize)viewMinSize;

@end

