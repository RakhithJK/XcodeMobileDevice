//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXLSPlugableClass.h>

@class NSArray, NSDictionary, NSString, PBXLSLaunchAction, PBXLSLaunchStartAction, PBXLSLaunchStdioStyle, PBXLSLaunchStyle, PBXRuntimeSystemSpecification;

@interface PBXLSLaunchConfig : PBXLSPlugableClass
{
    NSString *_identifier;
    PBXLSLaunchAction *_launchAction;
    NSString *_displayName;
    NSArray *_requiredAdaptorNames;
    NSArray *_additionalAdaptorNames;
    NSArray *_allowableLaunchStyles;
    PBXLSLaunchStyle *_launchStyle;
    NSArray *_allowableLaunchStartActions;
    PBXLSLaunchStartAction *_launchStartAction;
    NSArray *_allowableLaunchStdioStyles;
    PBXLSLaunchStdioStyle *_launchStdioStyle;
    NSString *_remoteHostInfo;
    NSString *_startActionInfo;
    NSDictionary *_environment;
    NSArray *_commandLineArgs;
    NSArray *_fileTypes;
    PBXRuntimeSystemSpecification *_rtsSpec;
    NSString *_pid;
    NSString *_coreFile;
    PBXLSLaunchStartAction *_previousLaunchStartAction;
    BOOL _attached;
    BOOL _shouldContinueAfterAttach;
}

+ (id)config;
+ (id)launchConfigFromDictionary:(id)arg1;
+ (unsigned long long)updateLaunchConfigs:(id)arg1 fromDictionary:(id)arg2;
- (id)_validateValue:(id)arg1 inAllowableValues:(id)arg2;
- (id)adaptorNames;
- (id)additionalAdaptorNames;
- (id)allowableLaunchStartActions;
- (id)allowableLaunchStdioStyles;
- (id)allowableLaunchStyles;
- (BOOL)allowsRemoteLaunching;
- (id)commandLineArgs;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)coreFile;
- (void)dealloc;
- (void)decodeState:(id)arg1;
- (id)description;
- (id)displayName;
- (id)encodeState;
- (id)environment;
- (id)executableFileTypes;
- (id)identifier;
- (id)init;
- (BOOL)isAttached;
- (BOOL)isEqualTo:(id)arg1;
- (id)launchAction;
- (id)launchStartAction;
- (id)launchStdioStyle;
- (id)launchStyle;
- (BOOL)mustLaunchExecutableImmediately;
- (id)newExecutableLauncher;
- (id)pid;
- (id)primaryRuntimeSystemSpecification;
- (id)remoteHostInfo;
- (id)requiredAdaptorNames;
- (void)resetAttachState;
- (void)resetTemporaryLaunchStartAction;
- (void)setAdditionalAdaptorNames:(id)arg1;
- (void)setAllowableLaunchStartActions:(id)arg1;
- (void)setAllowableLaunchStdioStyles:(id)arg1;
- (void)setAllowableLaunchStyles:(id)arg1;
- (void)setAttached:(BOOL)arg1;
- (void)setCommandLineArgs:(id)arg1;
- (void)setCoreFile:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setExecutableFileTypes:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLaunchAction:(id)arg1;
- (void)setLaunchStartAction:(id)arg1;
- (void)setLaunchStdioStyle:(id)arg1;
- (void)setLaunchStyle:(id)arg1;
- (void)setPid:(id)arg1;
- (void)setPrimaryRuntimeSystemSpecification:(id)arg1;
- (void)setRemoteHostInfo:(id)arg1;
- (void)setRequiredAdaptorNames:(id)arg1;
- (void)setShouldContinueAfterAttach:(BOOL)arg1;
- (void)setStartActionInfo:(id)arg1;
- (void)setTemporaryLaunchStartAction:(id)arg1;
- (BOOL)shouldContinueAfterAttach;
- (id)startActionInfo;
- (BOOL)supportsSymbolLevels;
- (id)validateLaunchStartAction:(id)arg1;
- (id)validateLaunchStdioStyle:(id)arg1;
- (id)validateLaunchStyle:(id)arg1;

@end

