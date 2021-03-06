//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

@class DVTCopyTextField, DVTFilePathField, DVTSourceControlAccount, DVTSourceControlAuthenticationStrategy, DVTSourceControlBasicAuthenticationStrategy, DVTSourceControlSSHKeysAuthenticationStrategy, NSButton, NSPopUpButton, NSSecureTextField, NSString, NSTextField, NSURL, NSView, NSWindow;
@protocol DVTSourceControlCancellable, IDESourceControlCredentialViewDelegate;

@interface IDESourceControlCredentialViewController : DVTViewController
{
    BOOL _sshAllowed;
    BOOL _showingSSHStrategy;
    BOOL _urlValid;
    BOOL _showingAnonymousStrategy;
    BOOL _enableAnonymousStrategy;
    BOOL _showingNewKeysStrategy;
    BOOL _enableNewKeysStrategy;
    unsigned long long _disableCount;
    DVTSourceControlAccount *_account;
    DVTSourceControlBasicAuthenticationStrategy *_basicStrategy;
    DVTSourceControlSSHKeysAuthenticationStrategy *_newKeysStrategy;
    DVTSourceControlSSHKeysAuthenticationStrategy *_existingKeysStrategy;
    NSString *_sshKeyComment;
    BOOL _liveUpdate;
    BOOL _liveReflight;
    BOOL _someSSHEligable;
    id <IDESourceControlCredentialViewDelegate> _delegate;
    NSURL *_sshKeyFolderURL;
    NSString *_urlUsername;
    NSString *_urlPassword;
    id <DVTSourceControlCancellable> _validateToken;
    NSTextField *_usernameLabel;
    NSTextField *_usernameField;
    NSTextField *_passwordField;
    DVTCopyTextField *_sshGeneratedKeyField;
    DVTCopyTextField *_sshFilePublicKeyField;
    DVTFilePathField *_sshFilePrivateKeyPathField;
    NSTextField *_sshFileKeyPasswordField;
    NSPopUpButton *_credentialTypeButton;
    NSView *_replacementView;
    NSView *_passwordView;
    NSView *_sshNewView;
    NSView *_sshFileView;
    NSWindow *_createKeysWindow;
    NSSecureTextField *_createKeysPassphraseField;
    NSButton *_createKeysCancelButton;
    NSButton *_createKeysGenerateButton;
}

- (void).cxx_destruct;
- (void)DVTFilePathFieldCell:(id)arg1 chooserSelectedPath:(id)arg2;
- (void)_disableView;
- (void)_enableView;
- (void)_updateAnonymousStrategyDisplay;
- (void)_updateNewKeysStrategyDisplay;
- (void)_updateWithURL:(id)arg1;
- (void)cancelGenerateKeys:(id)arg1;
- (void)changeCredentialType:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
@property __weak NSButton *createKeysCancelButton; // @synthesize createKeysCancelButton=_createKeysCancelButton;
@property __weak NSButton *createKeysGenerateButton; // @synthesize createKeysGenerateButton=_createKeysGenerateButton;
@property __weak NSSecureTextField *createKeysPassphraseField; // @synthesize createKeysPassphraseField=_createKeysPassphraseField;
@property(retain) NSWindow *createKeysWindow; // @synthesize createKeysWindow=_createKeysWindow;
@property __weak NSPopUpButton *credentialTypeButton; // @synthesize credentialTypeButton=_credentialTypeButton;
@property __weak id <IDESourceControlCredentialViewDelegate> delegate; // @synthesize delegate=_delegate;
@property BOOL enableAnonymousStrategy;
@property BOOL enableNewKeysStrategy;
- (void)focusPasswordField;
- (void)generateKeys:(id)arg1;
- (void)generateNewSSHKeys;
@property(getter=isEnabled) BOOL enabled;
@property BOOL liveReflight; // @synthesize liveReflight=_liveReflight;
@property BOOL liveUpdate; // @synthesize liveUpdate=_liveUpdate;
@property __weak NSTextField *passwordField; // @synthesize passwordField=_passwordField;
@property(retain) NSView *passwordView; // @synthesize passwordView=_passwordView;
- (void)primitiveInvalidate;
@property __weak NSView *replacementView; // @synthesize replacementView=_replacementView;
- (void)setAccount:(id)arg1;
- (void)setNewSSHKeyFolder:(id)arg1;
- (void)setSSHKeyComment:(id)arg1;
@property BOOL someSSHEligable; // @synthesize someSSHEligable=_someSSHEligable;
@property BOOL sshAllowed;
@property __weak NSTextField *sshFileKeyPasswordField; // @synthesize sshFileKeyPasswordField=_sshFileKeyPasswordField;
@property __weak DVTFilePathField *sshFilePrivateKeyPathField; // @synthesize sshFilePrivateKeyPathField=_sshFilePrivateKeyPathField;
@property __weak DVTCopyTextField *sshFilePublicKeyField; // @synthesize sshFilePublicKeyField=_sshFilePublicKeyField;
@property(retain) NSView *sshFileView; // @synthesize sshFileView=_sshFileView;
@property __weak DVTCopyTextField *sshGeneratedKeyField; // @synthesize sshGeneratedKeyField=_sshGeneratedKeyField;
@property(retain) NSURL *sshKeyFolderURL; // @synthesize sshKeyFolderURL=_sshKeyFolderURL;
@property(retain) NSView *sshNewView; // @synthesize sshNewView=_sshNewView;
- (void)setURL:(id)arg1;
@property(retain) NSString *urlPassword; // @synthesize urlPassword=_urlPassword;
@property(retain) NSString *urlUsername; // @synthesize urlUsername=_urlUsername;
@property __weak NSTextField *usernameField; // @synthesize usernameField=_usernameField;
@property __weak NSTextField *usernameLabel; // @synthesize usernameLabel=_usernameLabel;
@property(retain) id <DVTSourceControlCancellable> validateToken; // @synthesize validateToken=_validateToken;
@property(readonly) DVTSourceControlAuthenticationStrategy *strategy;
- (void)updateURL:(id)arg1;
- (void)validateAuthentication;
- (void)viewDidLoad;

@end

