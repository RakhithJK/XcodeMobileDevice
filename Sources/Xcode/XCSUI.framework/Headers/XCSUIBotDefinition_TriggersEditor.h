//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <XCSUI/DVTOutlineViewDelegate-Protocol.h>
#import <XCSUI/NSOutlineViewDataSource-Protocol.h>
#import <XCSUI/NSTextFieldDelegate-Protocol.h>

@class DVTBorderedView, DVTGradientImageButton, DVTOutlineView, NSMenu, NSMutableArray, NSString, NSTextField, NSView, XCSUIBotDefinitionContext;

@interface XCSUIBotDefinition_TriggersEditor : IDEViewController <NSOutlineViewDataSource, DVTOutlineViewDelegate, NSTextFieldDelegate>
{
    BOOL _viewIsInstalled;
    XCSUIBotDefinitionContext *_botDefinitionContext;
    NSMutableArray *_triggers;
    DVTOutlineView *_triggersOutlineView;
    NSView *_triggerDetailCustomView;
    DVTBorderedView *_triggersBorderedView;
    DVTGradientImageButton *_addTriggerButton;
    DVTGradientImageButton *_removeTriggerButton;
    NSMenu *_triggersMenu;
    NSTextField *_noTriggersLabel;
    NSMutableArray *_preIntegrationTriggerScripts;
    NSMutableArray *_postIntegrationTriggerScripts;
    NSMutableArray *_triggerEmails;
    NSMutableArray *_reportEmails;
}

+ (id)keyPathsForValuesAffectingCanGoForward;
- (void).cxx_destruct;
- (void)addNewEmailReportTrigger;
- (void)addNewIssueEmailTrigger;
- (void)addNewPostScriptTrigger;
- (void)addNewPreScriptTrigger;
- (void)addTrigger:(id)arg1;
@property __weak DVTGradientImageButton *addTriggerButton; // @synthesize addTriggerButton=_addTriggerButton;
- (BOOL)alwaysShowFinish;
@property(retain, nonatomic) XCSUIBotDefinitionContext *botDefinitionContext; // @synthesize botDefinitionContext=_botDefinitionContext;
- (BOOL)canGoForward;
- (void)commitChanges;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)duplicateTrigger;
- (void)loadView;
@property __weak NSTextField *noTriggersLabel; // @synthesize noTriggersLabel=_noTriggersLabel;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (void)outlineViewSelectionDidChange:(id)arg1;
@property(retain, nonatomic) NSMutableArray *postIntegrationTriggerScripts; // @synthesize postIntegrationTriggerScripts=_postIntegrationTriggerScripts;
@property(retain, nonatomic) NSMutableArray *preIntegrationTriggerScripts; // @synthesize preIntegrationTriggerScripts=_preIntegrationTriggerScripts;
- (void)primitiveInvalidate;
- (void)reloadOutlineView;
- (void)removeTrigger:(id)arg1;
@property __weak DVTGradientImageButton *removeTriggerButton; // @synthesize removeTriggerButton=_removeTriggerButton;
@property(retain, nonatomic) NSMutableArray *reportEmails; // @synthesize reportEmails=_reportEmails;
- (void)rightMouseDown:(id)arg1;
@property __weak NSView *triggerDetailCustomView; // @synthesize triggerDetailCustomView=_triggerDetailCustomView;
@property(retain, nonatomic) NSMutableArray *triggerEmails; // @synthesize triggerEmails=_triggerEmails;
@property(retain, nonatomic) NSMutableArray *triggers; // @synthesize triggers=_triggers;
@property __weak DVTBorderedView *triggersBorderedView; // @synthesize triggersBorderedView=_triggersBorderedView;
@property(retain) NSMenu *triggersMenu; // @synthesize triggersMenu=_triggersMenu;
@property __weak DVTOutlineView *triggersOutlineView; // @synthesize triggersOutlineView=_triggersOutlineView;
@property(nonatomic) BOOL viewIsInstalled; // @synthesize viewIsInstalled=_viewIsInstalled;
- (void)updateLayout;
- (void)viewDidInstall;
- (void)viewWillUninstall;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

