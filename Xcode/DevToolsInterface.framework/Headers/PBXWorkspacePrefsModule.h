//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXPreferencesPaneModule.h>

@class NSButton, NSPopUpButton, NSTabView;

@interface PBXWorkspacePrefsModule : PBXPreferencesPaneModule
{
    NSTabView *layoutTabView;
    NSPopUpButton *layoutPopUp;
    NSButton *counterpartCheckBox;
    NSButton *autoOpenCheckBox;
    NSButton *shouldSaveWorkspaceConfigurationCheckBox;
    NSButton *shouldReopenProjectDocumentsCheckBox;
}

- (void)_projectDidOpenOrClose:(id)arg1;
- (void)_setLayoutPopupIsEnabled:(BOOL)arg1;
- (void)addNotificationObservers;
- (void)checkBoxAction:(id)arg1;
- (void)choiceAction:(id)arg1;
- (void)initializeFromDefaults;
- (struct CGSize)minModuleSize;
- (void)moduleWillBeRemoved;
- (void)removeNotificationObservers;
- (void)saveChanges;

@end

