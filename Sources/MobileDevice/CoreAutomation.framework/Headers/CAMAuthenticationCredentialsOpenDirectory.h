//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreAutomation/CAMAuthenticationCredentials.h>

@class NSArray, NSString;

@interface CAMAuthenticationCredentialsOpenDirectory : CAMAuthenticationCredentials
{
    NSString *nodeName;
    NSArray *groups;
}

- (void).cxx_destruct;
- (BOOL)authenticateUsername:(id)arg1 withPassword:(id)arg2;
@property(retain) NSArray *groups; // @synthesize groups;
- (id)initWithNodeName:(id)arg1;
@property(copy) NSString *nodeName; // @synthesize nodeName;

@end

