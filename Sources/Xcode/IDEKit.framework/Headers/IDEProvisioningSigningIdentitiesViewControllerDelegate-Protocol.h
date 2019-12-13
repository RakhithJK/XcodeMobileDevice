//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class IDEProvisioningSigningIdentitiesViewController;
@protocol IDEProvisioningLocalIdentityState, IDEProvisioningSigningIdentity;

@protocol IDEProvisioningSigningIdentitiesViewControllerDelegate <NSObject>
- (BOOL)signingIdentitiesViewController:(IDEProvisioningSigningIdentitiesViewController *)arg1 authorizedToManageIdentity:(id <IDEProvisioningSigningIdentity>)arg2;
- (void)signingIdentitiesViewController:(IDEProvisioningSigningIdentitiesViewController *)arg1 createSigningIdentity:(id <IDEProvisioningSigningIdentity>)arg2;
- (void)signingIdentitiesViewController:(IDEProvisioningSigningIdentitiesViewController *)arg1 exportSigningIdentity:(id <IDEProvisioningLocalIdentityState>)arg2;
- (void)signingIdentitiesViewController:(IDEProvisioningSigningIdentitiesViewController *)arg1 resetSigningIdentity:(id <IDEProvisioningSigningIdentity>)arg2;
@end
