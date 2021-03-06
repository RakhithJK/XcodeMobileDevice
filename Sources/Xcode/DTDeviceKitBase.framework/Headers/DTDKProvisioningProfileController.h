//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDispatchLock, NSArray, NSMapTable, NSMutableSet, NSSet;
@protocol OS_dispatch_queue;

@interface DTDKProvisioningProfileController : NSObject
{
    DVTDispatchLock *_profilesLock;
    NSMapTable *_UUIDToProfile;
    NSObject<OS_dispatch_queue> *_scanQueue;
    NSMutableSet *_allProfiles;
    BOOL _hasCompletedInitialScan;
    NSArray *_provisioningProfileSearchPaths;
}

+ (id)controller;
+ (id)controllerWithProvisioningProfileSearchPaths:(id)arg1;
+ (id)keyPathsForValuesAffectingAllUsableProfiles;
+ (id)mobileDeviceSupportSearchPaths;
+ (id)standardProvisioningProfileSearchPaths;
- (void).cxx_destruct;
- (void)_profilePathsOrDirectoriesChanged:(id)arg1;
- (void)_updateProfilesWithAdditions:(id)arg1 andRemovals:(id)arg2;
- (BOOL)_writeProfiles:(id)arg1 error:(id *)arg2;
@property(readonly, copy) NSSet *allProfiles;
- (id)allProfiles_sync;
@property(readonly, copy) NSSet *allUsableProfiles;
- (id)certificateUtilities;
- (void)deleteProvisioningProfiles:(id)arg1;
- (void)fsEventReceived:(id)arg1;
@property(readonly) BOOL hasCompletedInitialScan; // @synthesize hasCompletedInitialScan=_hasCompletedInitialScan;
- (id)initWithProvisioningProfileSearchPaths:(id)arg1;
- (void)installProvisioningProfiles:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)profileMatchingUUID:(id)arg1;
- (id)profilesMatchingApplicationID:(id)arg1;
- (id)profilesMatchingCertificate:(struct OpaqueSecCertificateRef *)arg1;
- (id)profilesMatchingPredicate:(id)arg1;
@property(readonly) NSArray *provisioningProfileSearchPaths; // @synthesize provisioningProfileSearchPaths=_provisioningProfileSearchPaths;
- (void)startScanIfNeeded:(BOOL)arg1;

@end

