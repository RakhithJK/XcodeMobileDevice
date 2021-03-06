//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <XCSUI/NSOutlineViewDataSource-Protocol.h>
#import <XCSUI/NSOutlineViewDelegate-Protocol.h>
#import <XCSUI/NSTabViewDelegate-Protocol.h>
#import <XCSUI/NSTableViewDataSource-Protocol.h>
#import <XCSUI/NSTableViewDelegate-Protocol.h>
#import <XCSUI/XCSUICreateBotRepositoryTableCellViewDelegate-Protocol.h>

@class DVTBorderedView, DVTColoredSpinner, DVTOutlineViewWithCustomGridDrawing, IDESourceControlCredentialWindowController, NSArray, NSButton, NSImageView, NSString, NSTextField, NSView, XCSListBranchesResult, XCSUIBotDefinitionContext;
@protocol XCSUIBotDefinition_SCMEditor_AssistantCallback;

@interface XCSUIBotDefinition_SCMEditor : IDEViewController <NSTableViewDataSource, NSTableViewDelegate, NSTabViewDelegate, XCSUICreateBotRepositoryTableCellViewDelegate, NSOutlineViewDataSource, NSOutlineViewDelegate>
{
    BOOL _skippingPreflight;
    BOOL _viewIsInstalled;
    BOOL _reflightFailureAddressed;
    BOOL _preflightOrReflightInProcess;
    XCSUIBotDefinitionContext *_botDefinitionContext;
    id <XCSUIBotDefinition_SCMEditor_AssistantCallback> _assistantCallback;
    unsigned long long _repositoriesWithUnaddressedIssues;
    unsigned long long _viewState;
    NSView *_currentTopLevelView;
    NSArray *_repositoryIssues;
    NSView *_preflightProgressView;
    DVTColoredSpinner *_preflightProgressSpinner;
    NSImageView *_preflightStatusImageView;
    NSTextField *_preflightStatusMessageField;
    NSTextField *_preflightStatusDetailsField;
    DVTBorderedView *_workspaceInfoBorderedView;
    NSImageView *_workspaceImageView;
    NSTextField *_workspaceNameField;
    NSTextField *_workspacePathField;
    NSButton *_replaceButton;
    NSView *_repositoriesHostView;
    DVTOutlineViewWithCustomGridDrawing *_repositoriesOutlineView;
    NSArray *_repositories;
    IDESourceControlCredentialWindowController *_credentialSheetController;
    XCSListBranchesResult *_listBranchesResult;
}

- (void).cxx_destruct;
- (void)_updateWorkspaceView;
@property(retain) id <XCSUIBotDefinition_SCMEditor_AssistantCallback> assistantCallback; // @synthesize assistantCallback=_assistantCallback;
@property(retain) XCSUIBotDefinitionContext *botDefinitionContext; // @synthesize botDefinitionContext=_botDefinitionContext;
- (void)certificateSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)createRepositoryIssues:(id)arg1;
@property(retain) IDESourceControlCredentialWindowController *credentialSheetController; // @synthesize credentialSheetController=_credentialSheetController;
@property(retain) NSView *currentTopLevelView; // @synthesize currentTopLevelView=_currentTopLevelView;
- (void)displayFailureMessage:(id)arg1 withDetails:(id)arg2;
- (void)displayStatusMessage:(id)arg1 withDetails:(id)arg2;
- (void)extractAndDiplayErrorsFromBlueprintResult:(id)arg1;
- (void)goNextOrFinishDismissingPreflightReflightAlert;
- (BOOL)isFingerprintEnforcementAvailable;
- (BOOL)isListBranchesXCSCoreEndpointAvailable;
- (void)listBranches;
@property(retain) XCSListBranchesResult *listBranchesResult; // @synthesize listBranchesResult=_listBranchesResult;
- (void)loadView;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (id)outlineView:(id)arg1 rowViewForItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
@property(nonatomic) BOOL preflightOrReflightInProcess; // @synthesize preflightOrReflightInProcess=_preflightOrReflightInProcess;
@property __weak DVTColoredSpinner *preflightProgressSpinner; // @synthesize preflightProgressSpinner=_preflightProgressSpinner;
@property(retain) NSView *preflightProgressView; // @synthesize preflightProgressView=_preflightProgressView;
@property __weak NSTextField *preflightStatusDetailsField; // @synthesize preflightStatusDetailsField=_preflightStatusDetailsField;
@property __weak NSImageView *preflightStatusImageView; // @synthesize preflightStatusImageView=_preflightStatusImageView;
@property __weak NSTextField *preflightStatusMessageField; // @synthesize preflightStatusMessageField=_preflightStatusMessageField;
- (void)redefineBlueprint:(id)arg1;
- (void)reflightBranches;
@property BOOL reflightFailureAddressed; // @synthesize reflightFailureAddressed=_reflightFailureAddressed;
- (void)refreshStatus:(id)arg1;
- (void)reloadRepositoriesOutlineView;
@property __weak NSButton *replaceButton; // @synthesize replaceButton=_replaceButton;
- (id)repoIssueForRepo:(id)arg1;
@property(copy, nonatomic) NSArray *repositories; // @synthesize repositories=_repositories;
@property(retain) NSView *repositoriesHostView; // @synthesize repositoriesHostView=_repositoriesHostView;
@property __weak DVTOutlineViewWithCustomGridDrawing *repositoriesOutlineView; // @synthesize repositoriesOutlineView=_repositoriesOutlineView;
@property unsigned long long repositoriesWithUnaddressedIssues; // @synthesize repositoriesWithUnaddressedIssues=_repositoriesWithUnaddressedIssues;
@property(retain) NSArray *repositoryIssues; // @synthesize repositoryIssues=_repositoryIssues;
- (void)resetRepositoryIssues;
@property BOOL viewIsInstalled; // @synthesize viewIsInstalled=_viewIsInstalled;
@property unsigned long long viewState; // @synthesize viewState=_viewState;
@property __weak NSImageView *workspaceImageView; // @synthesize workspaceImageView=_workspaceImageView;
@property __weak DVTBorderedView *workspaceInfoBorderedView; // @synthesize workspaceInfoBorderedView=_workspaceInfoBorderedView;
@property __weak NSTextField *workspaceNameField; // @synthesize workspaceNameField=_workspaceNameField;
@property __weak NSTextField *workspacePathField; // @synthesize workspacePathField=_workspacePathField;
@property(readonly) BOOL skippingPreflight; // @synthesize skippingPreflight=_skippingPreflight;
- (void)transitionToViewState:(unsigned long long)arg1;
- (void)updateCredentialsToResolveIssue:(id)arg1;
- (void)viewDidInstall;
- (void)viewWillUninstall;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

