//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/XCApplicationPropertiesInspectorPane.h>

@class NSButton, NSMutableArray, NSMutableDictionary, NSTableView, PBXAddVariantPanel, XCExtendedArrayController, XCExtendedObjectController;

@interface XCAutomatorActionPropertiesInspectorPane : XCApplicationPropertiesInspectorPane
{
    NSButton *removeLocalizationButton;
    NSTableView *localizationsTableView;
    XCExtendedArrayController *_generalController;
    XCExtendedArrayController *_descriptionController;
    XCExtendedObjectController *_inputController;
    XCExtendedArrayController *_inputTypesController;
    XCExtendedObjectController *_outputController;
    XCExtendedArrayController *_outputTypesController;
    XCExtendedArrayController *_parametersController;
    XCExtendedArrayController *_keywordsController;
    XCExtendedArrayController *_resourcesController;
    XCExtendedArrayController *_warningsController;
    XCExtendedArrayController *_relatedActionsController;
    XCExtendedArrayController *_localizationsController;
    PBXAddVariantPanel *_addVariantPanel;
    NSMutableArray *_generalSettings;
    NSMutableArray *_descriptionSettings;
    NSMutableDictionary *_input;
    NSMutableArray *_inputTypes;
    NSMutableDictionary *_output;
    NSMutableArray *_outputTypes;
    NSMutableArray *_parameters;
    NSMutableArray *_keywords;
    NSMutableArray *_requiredResources;
    NSMutableArray *_warningSettings;
    NSMutableArray *_relatedActions;
    NSMutableArray *_localizations;
    long long _selectedTabViewIndex;
}

+ (BOOL)canInspectItems:(id)arg1;
+ (void)initialize;
+ (id)inspectableClasses;
- (void)_addVariantSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)addLocalization:(id)arg1;
- (id)containerTypes;
- (void)contentDidChangeForArrayController:(id)arg1;
- (void)contentDidChangeForObjectController:(id)arg1;
- (void)currentInspectedItemsChanged:(id)arg1;
- (void)dealloc;
- (id)descriptionSettings;
- (id)generalSettings;
- (id)input;
- (id)inputTypes;
- (id)keywords;
- (id)localizations;
- (id)newObjectBasedOnObject:(id)arg1 fromController:(id)arg2;
- (void)openInfoPList:(id)arg1;
- (void)openInfoPlistStringsFile:(id)arg1;
- (id)output;
- (id)outputTypes;
- (id)parameters;
- (void)rebuildAllSettingsWithProductSettings:(id)arg1;
- (void)rebuildDescriptionSettingsWithProductSettings:(id)arg1;
- (void)rebuildGeneralSettingsWithProductSettings:(id)arg1;
- (void)rebuildInputTypesWithProductSettings:(id)arg1;
- (void)rebuildInputWithProductSettings:(id)arg1;
- (void)rebuildKeywordsWithProductSettings:(id)arg1;
- (void)rebuildLocalizationsWithProductSettings:(id)arg1;
- (void)rebuildOutputTypesWithProductSettings:(id)arg1;
- (void)rebuildOutputWithProductSettings:(id)arg1;
- (void)rebuildParametersWithProductSettings:(id)arg1;
- (void)rebuildRelatedActionsWithProductSettings:(id)arg1;
- (void)rebuildRequiredResourcesWithProductSettings:(id)arg1;
- (void)rebuildWarningSettingsWithProductSettings:(id)arg1;
- (id)relatedActions;
- (void)removeLocalization:(id)arg1;
- (id)requiredResources;
- (long long)selectedTabViewIndex;
- (void)setDescriptionSettings:(id)arg1;
- (void)setGeneralSettings:(id)arg1;
- (void)setInput:(id)arg1;
- (void)setInputTypes:(id)arg1;
- (void)setKeywords:(id)arg1;
- (void)setLocalizations:(id)arg1;
- (void)setOutput:(id)arg1;
- (void)setOutputTypes:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)setRelatedActions:(id)arg1;
- (void)setRequiredResources:(id)arg1;
- (void)setWarningSettings:(id)arg1;
- (id)stringsFileItemForLocalization:(id)arg1;
- (void)tabView:(id)arg1 willSelectTabViewItem:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldTrackCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)viewDidLoad;
- (id)warningSettings;

@end

