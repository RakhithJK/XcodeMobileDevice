//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEProvisioningRepairStep.h>

@class DVTPortalCertificateType;

@interface IDEProvisioningCreateCertificateRepairStep : IDEProvisioningRepairStep
{
    DVTPortalCertificateType *_type;
}

+ (id)createCertificateRepairStepWithCertificateType:(id)arg1;
- (void).cxx_destruct;
- (id)activityDescription;
- (BOOL)handleExecutionWithContext:(id)arg1 ledgerEntry:(id)arg2 error:(id *)arg3;
- (id)initWithType:(id)arg1;
- (BOOL)preflightWithContext:(id)arg1 error:(id *)arg2;
- (id)stepDescription;
@property(readonly, nonatomic) DVTPortalCertificateType *type; // @synthesize type=_type;

@end

