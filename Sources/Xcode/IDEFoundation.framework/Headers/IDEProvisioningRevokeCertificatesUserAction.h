//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEProvisioningUserAction.h>

@class NSArray;

@interface IDEProvisioningRevokeCertificatesUserAction : IDEProvisioningUserAction
{
    BOOL _forPreExistingMachineSpecificCertificate;
    NSArray *_certificates;
}

+ (id)revokeCertificatesUserActionWithCertificates:(id)arg1 context:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *certificates; // @synthesize certificates=_certificates;
- (id)initWithCertificates:(id)arg1 context:(id)arg2;
@property(nonatomic, getter=isForPreExistingMachineSpecificCertificate) BOOL forPreExistingMachineSpecificCertificate; // @synthesize forPreExistingMachineSpecificCertificate=_forPreExistingMachineSpecificCertificate;
- (id)userActionMessage;
- (id)userActionName;
- (id)userActionTitle;

@end
