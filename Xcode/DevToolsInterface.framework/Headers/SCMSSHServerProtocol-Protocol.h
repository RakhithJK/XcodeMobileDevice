//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString;

@protocol SCMSSHServerProtocol
- (BOOL)getPermissionToAddCertificate:(NSString *)arg1;
- (BOOL)getPermissionToAddHostKey:(NSString *)arg1;
- (BOOL)getPermissionToRetrievePasswordForHost:(NSString *)arg1 user:(NSString *)arg2 port:(long long *)arg3;
@end

