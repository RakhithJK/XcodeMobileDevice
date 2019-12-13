//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXBuildSettingsAspectModule.h>

#import <DevToolsInterface/NSOutlineViewDataSource-Protocol.h>
#import <DevToolsInterface/NSOutlineViewDelegate-Protocol.h>

@class NSButton, NSMutableArray, NSString, NSTableColumn, NSTextField, PBXExtendedOutlineView;

@interface PBXBSExpertAspectModule : PBXBuildSettingsAspectModule <NSOutlineViewDataSource, NSOutlineViewDelegate>
{
    PBXExtendedOutlineView *_settingsOutline;
    NSTextField *_descriptionField;
    NSButton *_addSettingButton;
    NSButton *_removeSettingButton;
    double _viewHeightSansOutline;
    long long _numRowsOutlineSizedTo;
    NSMutableArray *_sortedSettingsKeys;
    unsigned long long _cachedChangeCount;
    unsigned long long _cachedKeyChangeCount;
    NSString *_keyBeingEdited;
    NSTableColumn *_tableColumnBeingEdited;
}

- (id)_nameForNewBuildSetting;
- (void)_recacheSortedBuildSettingsKeys;
- (void)_resizeViewIfNeeded;
- (void)_setKeyBeingEdited:(id)arg1 tableColumnBeingEdited:(id)arg2;
- (void)_updateButtonState;
- (void)_updateDescriptionField;
- (void)addSetting:(id)arg1;
- (BOOL)checkValidityOfValue:(id)arg1 forBuildSetting:(id)arg2;
- (BOOL)control:(id)arg1 textShouldEndEditing:(id)arg2;
- (void)createItem:(id)arg1;
- (void)dealloc;
- (id)initWithBuildSettings:(id)arg1;
- (BOOL)isValidBuildSettingName:(id)arg1;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 createItemsFromPasteboard:(id)arg2;
- (void)outlineView:(id)arg1 deleteItems:(id)arg2;
- (void)outlineView:(id)arg1 didStartEditingColumn:(long long)arg2 row:(long long)arg3;
- (void)outlineView:(id)arg1 handleReturnKey:(id)arg2 changeFocus:(BOOL)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (BOOL)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3;
- (void)outlineView:(id)arg1 willAbortEditingColumn:(long long)arg2 row:(long long)arg3;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (void)outlineView:(id)arg1 willEndEditingColumn:(long long)arg2 row:(long long)arg3 textMovement:(unsigned long long)arg4;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)outlineViewSelectionIsChanging:(id)arg1;
- (void)redo:(id)arg1;
- (void)removeSetting:(id)arg1;
- (void)undo:(id)arg1;
- (id)undoManager;
- (void)update;
- (BOOL)validateMenuItem:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
