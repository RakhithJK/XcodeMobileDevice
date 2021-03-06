//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFirstLaunchPackageInstallationHelper, NSArray;

@interface IDEPackageInstallerHelper : NSObject
{
    BOOL _backgroundDownloadInProgress;
    BOOL _needToQuitApps;
    DVTFirstLaunchPackageInstallationHelper *_dvtFLEPackageInstallationHelper;
}

+ (void)initialize;
- (void).cxx_destruct;
- (id)_badPackageErrorMessage;
- (id)_errorAttributes;
- (id)_genericErrorMessage;
- (id)_notEnoughSpaceErrorMessage;
@property(readonly) NSArray *appsThatNeedToBeQuitBeforeInstallCanProceed;
@property(readonly) BOOL backgroundDownloadInProgress; // @synthesize backgroundDownloadInProgress=_backgroundDownloadInProgress;
- (id)errorMessageForError:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)installPackagesWithAuthRef:(struct AuthorizationOpaqueRef *)arg1;
- (BOOL)needToInstallPackages;
@property(readonly) NSArray *packagesToInstall;

@end

