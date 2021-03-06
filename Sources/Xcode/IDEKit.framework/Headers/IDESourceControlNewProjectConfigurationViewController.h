//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTObservingToken, NSArray, NSButton, NSError, NSImage, NSPopUpButton, NSString;
@protocol XCSLocalService;

@interface IDESourceControlNewProjectConfigurationViewController : IDEViewController
{
    NSPopUpButton *_serverPopup;
    DVTObservingToken *_serversObservingToken;
    NSButton *_serverWarningButton;
    BOOL _enableCreateLocalRepository;
    BOOL _shouldCreateLocalRepository;
    BOOL _shouldCreateLocalRepositoryTemporaryValue;
    NSString *_repositoryCreationMessage;
    BOOL _shouldHideServerWarningButton;
    BOOL _canCreateQueryComplete;
    BOOL _canCreateRepositoryOnServer;
    id <XCSLocalService> _selectedServer;
    NSArray *_servers;
    NSError *_canCreateError;
    NSImage *_warningImage;
}

+ (id)defaultViewNibName;
+ (id)keyPathsForValuesAffectingServerInErrorState;
+ (id)keyPathsForValuesAffectingShouldHideServerWarningButton;
- (void).cxx_destruct;
- (void)_checkCanCreateRepository;
- (void)_clearServersPopup;
- (void)_updateServersPopup;
- (void)addNewServerAction:(id)arg1;
@property(retain, nonatomic) NSError *canCreateError; // @synthesize canCreateError=_canCreateError;
@property(nonatomic) BOOL canCreateQueryComplete; // @synthesize canCreateQueryComplete=_canCreateQueryComplete;
@property(nonatomic) BOOL canCreateRepositoryOnServer; // @synthesize canCreateRepositoryOnServer=_canCreateRepositoryOnServer;
- (void)createGitRepositoryWithFilePath:(id)arg1 workspaceUIHandler:(id)arg2;
- (void)displayCannotCreateRepositorySheet:(id)arg1;
@property BOOL enableCreateLocalRepository; // @synthesize enableCreateLocalRepository=_enableCreateLocalRepository;
- (void)myMacAction:(id)arg1;
- (void)primitiveInvalidate;
@property(copy) NSString *repositoryCreationMessage; // @synthesize repositoryCreationMessage=_repositoryCreationMessage;
- (void)selectServer:(id)arg1;
@property(retain, nonatomic) id <XCSLocalService> selectedServer; // @synthesize selectedServer=_selectedServer;
@property(readonly, nonatomic) BOOL selectedServerInErrorState; // @dynamic selectedServerInErrorState;
- (void)serverSelectedAction:(id)arg1;
@property(retain, nonatomic) NSArray *servers; // @synthesize servers=_servers;
@property(nonatomic) BOOL shouldCreateLocalRepository; // @synthesize shouldCreateLocalRepository=_shouldCreateLocalRepository;
@property(nonatomic) BOOL shouldHideServerWarningButton; // @synthesize shouldHideServerWarningButton=_shouldHideServerWarningButton;
@property(retain, nonatomic) NSImage *warningImage; // @synthesize warningImage=_warningImage;
- (BOOL)testSelectedServer;
- (void)updateDirectoryURL:(id)arg1;
- (void)viewDidInstall;
- (void)viewWillUninstall;

@end

