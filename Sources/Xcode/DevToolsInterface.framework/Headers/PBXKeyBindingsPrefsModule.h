//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXPreferencesPaneModule.h>

@class NSButton, NSMutableArray, NSPanel, NSPopUpButton, NSTextField, PBXKeyBindingSet, PBXMenuKeyBindingsController, PBXTextKeyBindingsController;

@interface PBXKeyBindingsPrefsModule : PBXPreferencesPaneModule
{
    NSPopUpButton *_keyBindingsPopup;
    NSButton *_deleteButton;
    NSPanel *_newItemSheet;
    NSButton *_newItemSheetOK;
    NSTextField *_newItemSheetText;
    PBXMenuKeyBindingsController *_menuBindingsController;
    PBXTextKeyBindingsController *_textBindingsController;
    PBXKeyBindingSet *_selectedKeyBindingSet;
    NSMutableArray *_keyBindingSets;
    NSMutableArray *_deletedKeyBindingPaths;
    BOOL _keyBindingsHaveChanges;
}

- (void)_copySelectedKeyBindings;
- (void)_finishDelete:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_newKeyBindingDidEnd:(id)arg1 userAccept:(long long)arg2 keyBindingSetToCopy:(id)arg3;
- (void)_reloadPopUp;
- (long long)_requestSaveIfNeeded;
- (void)_saveSelectedKeyBindings;
- (id)_uniqueKeyBindingSetNameWithString:(id)arg1;
- (void)copyKeyBindingSet:(id)arg1;
- (void)dealloc;
- (void)deleteKeyBindingSet:(id)arg1;
- (void)initializeFromDefaults;
- (id)keyBindingSetWithLocalizedName:(id)arg1;
- (void)keyBindings:(id)arg1 didSetKeyEquivalent:(id)arg2;
- (void)keyBindingsDidChange;
- (id)menuKeyBindingsController;
- (struct CGSize)minModuleSize;
- (void)newItemCancel:(id)arg1;
- (void)newItemOK:(id)arg1;
- (void)newItemTextDidChange:(id)arg1;
- (void)saveChanges;
- (void)selectKeyBindingSet:(id)arg1;
- (id)selectedKeyBindingSet;
- (void)setSelectedKeyBindingSet:(id)arg1;
- (BOOL)shouldEditKeyBindings;
- (void)takeKeyBindingSelectionFrom:(id)arg1;
- (id)textKeyBindingsController;
- (void)viewDidLoad;

@end

