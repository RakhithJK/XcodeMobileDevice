//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTSourceControl/NSCopying-Protocol.h>
#import <DVTSourceControl/NSSecureCoding-Protocol.h>

@class DVTSourceControlAuthenticationStrategy, NSString, NSURL;

@interface DVTSourceControlAccount : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _enabled;
    BOOL _savingDisabled;
    DVTSourceControlAuthenticationStrategy *_authenticationStrategy;
    NSString *_accountName;
    NSURL *_hostURL;
}

+ (id)knownSSHHostsAndFingerprintsWithCompletionBlock:(CDUnknownBlockType)arg1;
+ (void)registerAccountManager:(id)arg1;
+ (id)sharedAccountManager;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy) NSString *accountName; // @synthesize accountName=_accountName;
@property(retain) DVTSourceControlAuthenticationStrategy *authenticationStrategy; // @synthesize authenticationStrategy=_authenticationStrategy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
@property BOOL enabled; // @synthesize enabled=_enabled;
- (void)encodeWithCoder:(id)arg1;
@property(copy) NSURL *hostURL; // @synthesize hostURL=_hostURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 hostURL:(id)arg2 authenticationStrategy:(id)arg3;
- (id)listRepositoriesWithCompletionBlock:(CDUnknownBlockType)arg1;
@property BOOL savingDisabled; // @synthesize savingDisabled=_savingDisabled;
- (void)updatedExistingStrategy;
- (id)validateAuthenticationWithCompletionBlock:(CDUnknownBlockType)arg1;

@end

