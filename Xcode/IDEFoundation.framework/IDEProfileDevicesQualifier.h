//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEProfileQualifier-Protocol.h>

@class IDEProfileQualifierResult, NSArray, NSString;
@protocol DVTProvisioningProfile;

@interface IDEProfileDevicesQualifier : NSObject <IDEProfileQualifier>
{
    IDEProfileQualifierResult *_result;
    id <DVTProvisioningProfile> _profile;
    NSArray *_devices;
}

- (void).cxx_destruct;
- (BOOL)_profileDoesntNeedToMatchDevices;
@property(readonly, nonatomic) NSArray *devices; // @synthesize devices=_devices;
- (id)initWithProfile:(id)arg1 devices:(id)arg2;
@property(readonly, nonatomic) BOOL onlyDisplayOnError;
@property(readonly, nonatomic) id <DVTProvisioningProfile> profile; // @synthesize profile=_profile;
- (BOOL)qualify;
@property(retain, nonatomic) IDEProfileQualifierResult *result; // @synthesize result=_result;
@property(readonly, nonatomic) NSString *userFacingName;

// Remaining properties
@property(readonly, copy, nonatomic) NSString *debugDescription;

@end
