//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXPreferencesPaneModule.h>

@class NSArray, NSArrayController, NSButton, NSMenuItem, NSPanel, NSPopUpButton, NSSecureTextField, NSString, NSTabView, NSTableView, NSTextField, NSTextView, NSView, SCMRepositorySettingsEditor;

@interface XCRepositoriesPrefsModule : PBXPreferencesPaneModule
{
    NSButton *_addRepositoryButton;
    NSButton *_removeRepositoryButton;
    NSButton *_cancelButton;
    NSView *_contentView;
    NSTabView *_infoTabView;
    NSTextView *_infoTextView;
    NSTextField *_newRepositoryNameTextField;
    NSPanel *_newRepositoryPanel;
    NSButton *_okButton;
    NSTableView *_repositoriesTable;
    NSTableView *_keyTable;
    NSPopUpButton *_scmSystemPopup;
    NSArrayController *_repositoryController;
    SCMRepositorySettingsEditor *_repositorySettingsEditor;
    NSView *_settingsView;
    NSArray *_sortDescriptors;
    NSSecureTextField *_sshPasswordTextField;
    NSPopUpButton *compareToolPopUpButton;
    NSMenuItem *compareDisplayLeftOrRightPopUpButtonLeftMenuItem;
    NSMenuItem *compareDisplayLeftOrRightPopUpButtonRightMenuItem;
    NSMenuItem *compareToolPopUpButtonXcodeMenuItem;
    NSMenuItem *compareToolPopUpButtonFileMergeMenuItem;
    NSMenuItem *compareToolPopUpButtonP4MergeMenuItem;
    NSMenuItem *compareToolPopUpButtonBBEditMenuItem;
    NSMenuItem *compareToolPopUpButtonOtherMenuItem;
    NSPopUpButton *compareDisplayLeftOrRightPopUpButton;
    NSButton *saveFilesCheckbox;
    NSButton *configureSCMAutomaticallyCheckBox;
    NSPopUpButton *diffOutputFormatPopUpButton;
    NSMenuItem *diffOutputFormatPopUpButtonSideBySideItem;
    NSMenuItem *diffOutputFormatPopUpButtonContextualItem;
    NSMenuItem *diffOutputFormatPopUpButtonUnifiedItem;
    NSMenuItem *diffOutputFormatPopUpButtonDefaultItem;
    NSTextField *diffLinesOfContextTextField;
    NSTextField *diffLinesOfContextLabel;
    NSButton *diffIgnoresWhitespaceCheckbox;
    NSButton *diffIgnoresBlankLinesCheckbox;
    NSString *_compareLeftOrRight;
    NSString *_compareToolSelection;
    NSString *_compareToolLocation;
    NSString *_diffOutputFormat;
}

+ (void)initialize;
- (void)_addRepositorySheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_scmCompareToolOtherSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)addRepositoryAction:(id)arg1;
- (id)agent;
- (void)applyChanges;
- (void)compareDisplayLeftOrRightPopUpButtonDidChange:(id)arg1;
- (void)compareDisplayLeftOrRightPopUpButtonDidSelectLeft:(id)arg1;
- (void)compareDisplayLeftOrRightPopUpButtonDidSelectRight:(id)arg1;
- (id)compareLeftOrRight;
- (id)compareToolLocation;
- (void)compareToolPopUpButtonDidChange:(id)arg1;
- (void)compareToolPopUpDidSelectBBEdit:(id)arg1;
- (void)compareToolPopUpDidSelectFileMerge:(id)arg1;
- (void)compareToolPopUpDidSelectOther:(id)arg1;
- (void)compareToolPopUpDidSelectP4Merge:(id)arg1;
- (void)compareToolPopUpDidSelectXcode:(id)arg1;
- (id)compareToolSelection;
- (void)configureAutomaticallyDidChange:(id)arg1;
- (void)dealloc;
- (void)diffIgnoresBlankLinesCheckboxDidChange:(id)arg1;
- (void)diffIgnoresWhitespaceCheckboxDidChange:(id)arg1;
- (void)diffLinesOfContextTextFieldDidChange:(id)arg1;
- (id)diffOutputFormat;
- (void)diffOutputFormatPopUpButtonDidSelectContextual:(id)arg1;
- (void)diffOutputFormatPopUpButtonDidSelectDefault:(id)arg1;
- (void)diffOutputFormatPopUpButtonDidSelectSideBySide:(id)arg1;
- (void)diffOutputFormatPopUpButtonDidSelectUnified:(id)arg1;
- (void)dismissSheet:(id)arg1;
- (void)initializeFromDefaults;
- (struct CGSize)minModuleSize;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeRepositoryAction:(id)arg1;
- (id)repositorySortDescriptors;
- (void)saveChanges;
- (void)saveFilesCheckboxDidChange:(id)arg1;
- (id)scmManager;
- (void)selectRepository:(id)arg1;
- (void)setCompareLeftOrRight:(id)arg1;
- (void)setCompareToolLocation:(id)arg1;
- (void)setCompareToolSelection:(id)arg1;
- (void)setDiffOutputFormat:(id)arg1;
- (void)setRepositorySortDescriptors:(id)arg1;
- (void)showRepositoriesTab;
- (void)updateEditorView;
- (void)viewDidLoad;

@end

