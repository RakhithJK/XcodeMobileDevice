//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTObservingToken, DVTSourceControlWorkspaceBlueprint, IDEScheme, IDEWorkspace, IDEWorkspaceTabController, NSArray, NSDictionary, NSError, NSMapTable, NSSet, NSString, NSURL, XCSBot, XCSDeviceSpecification, XCSService, XCSToolchain;

@interface XCSUIBotDefinitionContext : NSObject
{
    XCSBot *_bot;
    id _deviceObserverToken;
    DVTObservingToken *_serviceReachabilityToken;
    BOOL _disableWorkspaceSpecificSettings;
    BOOL _preserveExistingServerBlueprint;
    BOOL _performsAnalyzeAction;
    BOOL _performsTestAction;
    BOOL _performsArchiveAction;
    BOOL _exportsProductFromArchive;
    BOOL _createsThinnedApps;
    BOOL _performsUpgradeIntegration;
    BOOL _schemeSupportsDevices;
    BOOL _hasSufficientSCMInfoToCreateBot;
    BOOL _creationComplete;
    BOOL _needsCommitAndPushUponCompletion;
    BOOL _shareOrCommitScheme;
    BOOL _redefineBot;
    BOOL _consultSchemeForConfiguration;
    IDEWorkspaceTabController *_workspaceTabController;
    NSString *_botName;
    NSString *_defaultBotName;
    XCSService *_service;
    DVTSourceControlWorkspaceBlueprint *_localSCMWorkspaceBlueprint;
    DVTSourceControlWorkspaceBlueprint *_updatedBotSCMWorkspaceBlueprint;
    DVTSourceControlWorkspaceBlueprint *_existingSCMWorkspaceBlueprint;
    NSMapTable *_workingCopiesToRemoteRepositories;
    NSURL *_sshKeyFolderURL;
    NSString *_existingBotID;
    IDEScheme *_scheme;
    NSString *_schemeName;
    unsigned long long _buildsFromCleanSchedule;
    NSString *_buildConfiguration;
    XCSToolchain *_overrideToolchain;
    unsigned long long _codeCoveragePreference;
    long long _initialRepositoryAuthenticationStatus;
    long long _preflightRepositoryAuthenticationStatus;
    NSSet *_preflightIgnoredRepositoryIdentifiers;
    NSArray *_triggers;
    XCSDeviceSpecification *_deviceSpecification;
    unsigned long long _testingDestinationType;
    unsigned long long _scheduleType;
    unsigned long long _periodicScheduleInterval;
    long long _weeklyScheduleDay;
    unsigned long long _hourOfIntegration;
    unsigned long long _minutesAfterHourToIntegrate;
    NSError *_createEditBotError;
    NSArray *_createEditBotValidationErrors;
    long long _rememberAuthenticationChoice;
    NSArray *_selectedTestingDeviceIDs;
    CDUnknownBlockType _blueprintLoadedCallback;
    NSArray *_botRepositories;
    NSArray *_availablePlatforms;
    NSArray *_availableDevices;
    long long _schemeValidity;
    long long _schemeRecoveryType;
    NSDictionary *_buildEnvironmentVariables;
    long long _accountReachability;
    NSString *_hostname;
    NSArray *_availableOverrideToolchains;
    DVTSourceControlWorkspaceBlueprint *_localSCMWorkspaceBlueprintOriginal;
}

+ (id)keyPathsForValuesAffectingCanContinueInDevicePicker;
+ (id)keyPathsForValuesAffectingDefaultBotName;
+ (id)keyPathsForValuesAffectingHasSufficientSCMInfoToCreateBot;
+ (id)keyPathsForValuesAffectingPerformsAnalyzeAction;
+ (id)keyPathsForValuesAffectingPerformsArchiveAction;
+ (id)keyPathsForValuesAffectingPerformsTestAction;
+ (id)keyPathsForValuesAffectingSchemeSupportsAnalyzeAction;
+ (id)keyPathsForValuesAffectingSchemeSupportsArchiveAction;
+ (id)keyPathsForValuesAffectingSchemeSupportsTestAction;
+ (id)keyPathsForValuesAffectingShouldSkipDevicePicker;
+ (id)sourceControlLogAspect;
+ (BOOL)workspace:(id)arg1 matchesBlueprintInBot:(id)arg2;
- (void).cxx_destruct;
- (BOOL)_botConfigurationSpecifiesDevices;
- (BOOL)_botConfigurationSpecifiesMac;
- (void)_listenForDeviceChangesForService:(id)arg1;
- (void)_loadDevicesForService:(id)arg1;
- (void)_loadOverrideToolchainsForService:(id)arg1;
- (void)_loadPlatformsForService:(id)arg1;
- (void)_loadServerHostnameForService:(id)arg1;
- (void)_setupPlatformsToolchainsAndDevicesForService:(id)arg1;
@property(nonatomic) long long accountReachability; // @synthesize accountReachability=_accountReachability;
- (void)addTestingDeviceID:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *allRepositoriesInLocalBlueprint;
- (void)assignDefaultRuleIfNeeded;
@property(retain, nonatomic) NSArray *availableDevices; // @synthesize availableDevices=_availableDevices;
@property(retain, nonatomic) NSArray *availableOverrideToolchains; // @synthesize availableOverrideToolchains=_availableOverrideToolchains;
@property(readonly, nonatomic) NSArray *availableOverrideToolchainsForScheme;
@property(retain, nonatomic) NSArray *availablePlatforms; // @synthesize availablePlatforms=_availablePlatforms;
@property(copy, nonatomic) CDUnknownBlockType blueprintLoadedCallback; // @synthesize blueprintLoadedCallback=_blueprintLoadedCallback;
@property(retain, nonatomic) XCSBot *bot;
@property(copy, nonatomic) NSString *botName; // @synthesize botName=_botName;
@property(readonly, copy, nonatomic) NSArray *botRepositories; // @synthesize botRepositories=_botRepositories;
@property(retain, nonatomic) NSString *buildConfiguration; // @synthesize buildConfiguration=_buildConfiguration;
@property(retain, nonatomic) NSDictionary *buildEnvironmentVariables; // @synthesize buildEnvironmentVariables=_buildEnvironmentVariables;
@property(nonatomic) unsigned long long buildsFromCleanSchedule; // @synthesize buildsFromCleanSchedule=_buildsFromCleanSchedule;
@property(readonly, nonatomic) BOOL canContinueInDevicePicker;
@property(nonatomic) unsigned long long codeCoveragePreference; // @synthesize codeCoveragePreference=_codeCoveragePreference;
@property(nonatomic) BOOL consultSchemeForConfiguration; // @synthesize consultSchemeForConfiguration=_consultSchemeForConfiguration;
@property(retain, nonatomic) NSError *createEditBotError; // @synthesize createEditBotError=_createEditBotError;
@property(retain, nonatomic) NSArray *createEditBotValidationErrors; // @synthesize createEditBotValidationErrors=_createEditBotValidationErrors;
@property(nonatomic) BOOL createsThinnedApps; // @synthesize createsThinnedApps=_createsThinnedApps;
@property(nonatomic) BOOL creationComplete; // @synthesize creationComplete=_creationComplete;
- (void)dealloc;
- (unsigned long long)defaultArchitectureTypeForPlatform:(id)arg1;
@property(copy, nonatomic) NSString *defaultBotName; // @synthesize defaultBotName=_defaultBotName;
- (id)defaultSpecificationForExistingBot;
- (id)defaultSpecificationForNewBot;
@property(readonly, nonatomic) unsigned long long defaultTestingDestinationType;
- (id)deviceFilter;
@property(retain, nonatomic) XCSDeviceSpecification *deviceSpecification; // @synthesize deviceSpecification=_deviceSpecification;
@property(nonatomic) BOOL disableWorkspaceSpecificSettings; // @synthesize disableWorkspaceSpecificSettings=_disableWorkspaceSpecificSettings;
@property(copy, nonatomic) NSString *existingBotID; // @synthesize existingBotID=_existingBotID;
@property(retain, nonatomic) DVTSourceControlWorkspaceBlueprint *existingSCMWorkspaceBlueprint; // @synthesize existingSCMWorkspaceBlueprint=_existingSCMWorkspaceBlueprint;
@property(nonatomic) BOOL exportsProductFromArchive; // @synthesize exportsProductFromArchive=_exportsProductFromArchive;
- (void)fixSchemeProblem;
@property(nonatomic) BOOL hasSufficientSCMInfoToCreateBot; // @synthesize hasSufficientSCMInfoToCreateBot=_hasSufficientSCMInfoToCreateBot;
@property(retain, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
@property(nonatomic) unsigned long long hourOfIntegration; // @synthesize hourOfIntegration=_hourOfIntegration;
- (id)initWithBot:(id)arg1 workspaceTabController:(id)arg2 editingMode:(long long)arg3 disableWorkspaceSpecificSettings:(BOOL)arg4 blueprintLoadedCallback:(CDUnknownBlockType)arg5;
- (id)initWithWorkspaceTabController:(id)arg1 editingMode:(long long)arg2 redefineBot:(id)arg3 blueprintLoadedCallback:(CDUnknownBlockType)arg4;
@property(nonatomic) long long initialRepositoryAuthenticationStatus; // @synthesize initialRepositoryAuthenticationStatus=_initialRepositoryAuthenticationStatus;
@property(readonly, nonatomic, getter=isInvalidTestingDestinationType) BOOL invalidTestingDestinationType;
- (BOOL)isSchemeValid;
@property(retain, nonatomic) DVTSourceControlWorkspaceBlueprint *localSCMWorkspaceBlueprint; // @synthesize localSCMWorkspaceBlueprint=_localSCMWorkspaceBlueprint;
@property(retain, nonatomic) DVTSourceControlWorkspaceBlueprint *localSCMWorkspaceBlueprintOriginal; // @synthesize localSCMWorkspaceBlueprintOriginal=_localSCMWorkspaceBlueprintOriginal;
@property(nonatomic) unsigned long long minutesAfterHourToIntegrate; // @synthesize minutesAfterHourToIntegrate=_minutesAfterHourToIntegrate;
@property(nonatomic) BOOL needsCommitAndPushUponCompletion; // @synthesize needsCommitAndPushUponCompletion=_needsCommitAndPushUponCompletion;
@property(retain, nonatomic) XCSToolchain *overrideToolchain; // @synthesize overrideToolchain=_overrideToolchain;
@property(nonatomic) BOOL performsAnalyzeAction; // @synthesize performsAnalyzeAction=_performsAnalyzeAction;
@property(nonatomic) BOOL performsArchiveAction; // @synthesize performsArchiveAction=_performsArchiveAction;
@property(nonatomic) BOOL performsTestAction; // @synthesize performsTestAction=_performsTestAction;
@property(nonatomic) BOOL performsUpgradeIntegration; // @synthesize performsUpgradeIntegration=_performsUpgradeIntegration;
@property(nonatomic) unsigned long long periodicScheduleInterval; // @synthesize periodicScheduleInterval=_periodicScheduleInterval;
@property(retain, nonatomic) NSSet *preflightIgnoredRepositoryIdentifiers; // @synthesize preflightIgnoredRepositoryIdentifiers=_preflightIgnoredRepositoryIdentifiers;
@property(nonatomic) long long preflightRepositoryAuthenticationStatus; // @synthesize preflightRepositoryAuthenticationStatus=_preflightRepositoryAuthenticationStatus;
@property(nonatomic) BOOL preserveExistingServerBlueprint; // @synthesize preserveExistingServerBlueprint=_preserveExistingServerBlueprint;
@property(nonatomic) BOOL redefineBot; // @synthesize redefineBot=_redefineBot;
- (void)redefineSCMBlueprintsFromLocalBlueprint;
@property(nonatomic) long long rememberAuthenticationChoice; // @synthesize rememberAuthenticationChoice=_rememberAuthenticationChoice;
- (void)removeTestingDeviceID:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *repositoriesInBotBlueprintAndInWorkspace;
@property(readonly, copy, nonatomic) NSArray *repositoriesInBotBlueprintButNotInWorkspace;
@property(readonly, copy, nonatomic) NSArray *repositoriesInWorkspaceButNotInBotBlueprint;
@property(nonatomic) unsigned long long scheduleType; // @synthesize scheduleType=_scheduleType;
@property(retain, nonatomic) IDEScheme *scheme; // @synthesize scheme=_scheme;
@property(retain, nonatomic) NSString *schemeName; // @synthesize schemeName=_schemeName;
@property(nonatomic) long long schemeRecoveryType; // @synthesize schemeRecoveryType=_schemeRecoveryType;
@property(readonly, nonatomic) NSSet *schemeSupportedPlatforms;
@property(readonly, nonatomic) BOOL schemeSupportsAnalyzeAction;
@property(readonly, nonatomic) BOOL schemeSupportsAppThinning;
@property(readonly, nonatomic) BOOL schemeSupportsArchiveAction;
@property(nonatomic) BOOL schemeSupportsDevices; // @synthesize schemeSupportsDevices=_schemeSupportsDevices;
@property(readonly, nonatomic) BOOL schemeSupportsMac;
@property(readonly, nonatomic) BOOL schemeSupportsMac32BitArchitecture;
@property(readonly, nonatomic) BOOL schemeSupportsTestAction;
@property(nonatomic) long long schemeValidity; // @synthesize schemeValidity=_schemeValidity;
@property(readonly, nonatomic) NSArray *selectablePlatforms;
@property(copy, nonatomic) NSArray *selectedTestingDeviceIDs; // @synthesize selectedTestingDeviceIDs=_selectedTestingDeviceIDs;
@property(retain, nonatomic) XCSService *service; // @synthesize service=_service;
@property(nonatomic) BOOL shareOrCommitScheme; // @synthesize shareOrCommitScheme=_shareOrCommitScheme;
@property(retain, nonatomic) NSURL *sshKeyFolderURL; // @synthesize sshKeyFolderURL=_sshKeyFolderURL;
@property(nonatomic) unsigned long long testingDestinationType; // @synthesize testingDestinationType=_testingDestinationType;
@property(retain, nonatomic) NSArray *triggers; // @synthesize triggers=_triggers;
@property(retain, nonatomic) DVTSourceControlWorkspaceBlueprint *updatedBotSCMWorkspaceBlueprint; // @synthesize updatedBotSCMWorkspaceBlueprint=_updatedBotSCMWorkspaceBlueprint;
@property(nonatomic) long long weeklyScheduleDay; // @synthesize weeklyScheduleDay=_weeklyScheduleDay;
@property(retain, nonatomic) NSMapTable *workingCopiesToRemoteRepositories; // @synthesize workingCopiesToRemoteRepositories=_workingCopiesToRemoteRepositories;
@property(retain, nonatomic) IDEWorkspaceTabController *workspaceTabController; // @synthesize workspaceTabController=_workspaceTabController;
- (BOOL)shouldResetDeviceSpecification;
@property(readonly, nonatomic) BOOL shouldSkipDevicePicker;
@property(readonly, nonatomic) NSArray *supportedBuildConfigurationsForScheme;
@property(readonly, nonatomic) IDEWorkspace *workspace;

@end

