//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEProvisioningBasicSigningIdentity-Protocol.h>

@class NSString;

@interface IDEProvisioningBasicSigningIdentity : NSObject <IDEProvisioningBasicSigningIdentity>
{
    NSString *_identifier;
    NSString *_userDescription;
}

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithIdentifier:(id)arg1 userDescription:(id)arg2;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSString *userDescription; // @synthesize userDescription=_userDescription;

@end

