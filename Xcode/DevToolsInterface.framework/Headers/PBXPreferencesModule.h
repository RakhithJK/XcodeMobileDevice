//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXModule.h>

#import <DevToolsInterface/NSWindowDelegate-Protocol.h>

@class NSBox, NSButtonCell, NSMatrix, NSMutableArray, NSMutableDictionary, NSString;

@interface PBXPreferencesModule : PBXModule <NSWindowDelegate>
{
    NSBox *_preferenceBox;
    NSMatrix *_moduleMatrix;
    NSButtonCell *_okButton;
    NSButtonCell *_cancelButton;
    NSButtonCell *_applyButton;
    NSMutableArray *_preferenceTitles;
    NSMutableArray *_preferenceModules;
    NSMutableDictionary *_masterPreferenceViews;
    NSMutableDictionary *_currentSessionPreferenceViews;
    NSBox *_originalContentView;
    BOOL _isModal;
    double _constrainedWidth;
    id _currentModule;
    id _currentOwner;
}

+ (Class)defaultPreferencesClass;
+ (void)setDefaultPreferencesClass:(Class)arg1;
+ (id)sharedPreferences;
- (void)_addItemWithName:(id)arg1 owner:(id)arg2;
- (void)_setupUI;
- (void)addPreferenceNamed:(id)arg1 owner:(id)arg2;
- (void)apply:(id)arg1;
- (void)cancel:(id)arg1;
- (void)confirmCloseSheetIsDone:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (id)currentModule;
- (void)dealloc;
- (id)init;
- (void)ok:(id)arg1;
- (struct CGSize)preferencesContentSize;
- (struct CGSize)preferencesModuleContentSize;
- (void)selectModule:(id)arg1;
- (void)setApplyButtonHidden:(BOOL)arg1;
- (long long)showModalPreferencesPanel;
- (long long)showModalPreferencesPanelForOwner:(id)arg1;
- (void)showPreferencesPanel;
- (void)showPreferencesPanelForOwner:(id)arg1;
- (void)switchToModuleAtIndex:(long long)arg1;
- (BOOL)usesButtons;
- (BOOL)usesNewLayout;
- (void)windowDidResignKey:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (id)windowTitle;
- (struct CGSize)windowWillResize:(id)arg1 toSize:(struct CGSize)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

