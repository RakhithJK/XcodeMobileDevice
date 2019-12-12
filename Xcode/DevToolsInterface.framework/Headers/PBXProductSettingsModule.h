//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXProjectModule.h>

@class NSBox, NSMatrix, PBXModule, PBXProductSettingsPlistEditorModule, PBXTarget, PBXViewListModule;

@interface PBXProductSettingsModule : PBXProjectModule
{
    PBXTarget *_target;
    PBXModule *_activeModule;
    NSMatrix *_editingModeCellMatrix;
    NSBox *_editorViewBox;
    PBXViewListModule *_guiEditorModule;
    PBXProductSettingsPlistEditorModule *_plistEditorModule;
}

- (void)addUIConfigurationToMutableDictionary:(id)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1;
- (void)moduleViewWasInstalled:(id)arg1;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)setTarget:(id)arg1;
- (void)takeEditingModeFromCellMatrix:(id)arg1;
- (void)takeUIConfigurationFromDictionary:(id)arg1;
- (id)target;

@end

