//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDECodesignIssueResolutionOption.h>

@class DVTDeveloperAccount, DVTSigningCertificate, IDEProvisioningPortal, NSSet, NSString;

@interface IDECodesignIssueResolutionAbstractGenerateProfileOption : IDECodesignIssueResolutionOption
{
    IDEProvisioningPortal *_portal;
    DVTDeveloperAccount *_account;
    DVTSigningCertificate *_signingCertificate;
    NSString *_platformIdentifier;
    NSSet *_bundleIdentifiers;
}

- (void).cxx_destruct;
@property(retain) DVTDeveloperAccount *account; // @synthesize account=_account;
@property(copy) NSSet *bundleIdentifiers; // @synthesize bundleIdentifiers=_bundleIdentifiers;
- (id)initWithPortal:(id)arg1 account:(id)arg2 signingCertificate:(id)arg3 platformIdentifier:(id)arg4 bundleIdentifiers:(id)arg5 logAspect:(id)arg6;
- (id)name;
@property(copy) NSString *platformIdentifier; // @synthesize platformIdentifier=_platformIdentifier;
@property(retain) IDEProvisioningPortal *portal; // @synthesize portal=_portal;
- (BOOL)requiresUserInteraction;
@property(retain) DVTSigningCertificate *signingCertificate; // @synthesize signingCertificate=_signingCertificate;

@end

