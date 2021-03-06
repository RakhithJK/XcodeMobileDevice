//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

@class DVTStackView_AppKitAutolayout, DVTToolchain, IDEWorkspaceTabController, NSArray, NSButton, NSButtonCell, NSImageView, NSMatrix, NSTextField, NSView, NSWindow;
@protocol IDEAttachToProcessSheetDelegate;

@interface IDEAttachToProcessSheet : DVTViewController
{
    IDEWorkspaceTabController *_workspaceTabController;
    id <IDEAttachToProcessSheetDelegate> _delegate;
    NSArray *_toolchains;
    DVTToolchain *_selectedToolchain;
    unsigned int _debugProcessAsUID;
    NSButton *_attachButton;
    NSButton *_cancelButton;
    NSWindow *_sheetWindow;
    NSTextField *_pidTextField;
    NSImageView *_invalidPIDImage;
    NSImageView *_applicationImage;
    NSView *_debuggerSlice;
    NSView *_debugProcessAsSlice;
    DVTStackView_AppKitAutolayout *_slicesStackView;
    NSMatrix *_debugProcessAsMatrix;
    NSButtonCell *_debugProcessAsMeButtonCell;
    NSTextField *_debugProcessAsRootText;
}

+ (void)showAttachToProcessSheetForWorkspaceTabController:(id)arg1 delegate:(id)arg2;
- (void).cxx_destruct;
- (void)_attachToProcessUsingProcessInformations:(id)arg1;
- (id)_initWithWorkspaceTabControler:(id)arg1 delegate:(id)arg2;
- (id)_processInformationForPID:(int)arg1 processInformations:(id)arg2;
- (id)_processInformationForProcessName:(id)arg1 processInformations:(id)arg2;
- (id)_processInformationForUserEnteredText:(id)arg1;
- (void)_rememberDebugProcessAsSelection;
- (void)_rememberEnteredProcessNameIfNecessary;
- (void)_rememberToolchain;
- (BOOL)_runOnPairedDevice;
- (void)_setupDebugProcessAsSlice;
- (void)_showAttachToProcessSheet;
- (BOOL)_supportsDebugAs;
- (void)_updateUIBasedOnPIDTextField;
- (void)_updateUIBasedOnPIDTextFieldAfterDelay;
- (void)_updateUIBasedOnPIDTextFieldUsingProcessInformations:(id)arg1;
- (void)attachToProcess:(id)arg1;
- (void)cancel:(id)arg1;
@property unsigned int debugProcessAsUID; // @synthesize debugProcessAsUID=_debugProcessAsUID;
- (id)defaultDebuggerSpecifier;
- (void)loadView;
- (void)primitiveInvalidate;
@property(readonly) DVTToolchain *selectedToolchain; // @synthesize selectedToolchain=_selectedToolchain;
- (void)setSelectedToolchain:(id)arg1;
@property(readonly) NSArray *toolchainSpecifiers; // @synthesize toolchainSpecifiers=_toolchains;

@end

