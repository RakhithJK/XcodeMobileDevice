//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEProvisioningBasicTeam.h>

@class NSString;

@interface IDEProvisioningDisambiguatableBasicTeam : IDEProvisioningBasicTeam
{
    NSString *_teamType;
    NSString *_username;
    NSString *_disambiguatedName;
}

- (void).cxx_destruct;
- (id)description;
@property(retain, nonatomic) NSString *disambiguatedName; // @synthesize disambiguatedName=_disambiguatedName;
- (id)initWithTeamID:(id)arg1 teamName:(id)arg2;
@property(readonly, nonatomic) NSString *originalName;
@property(retain, nonatomic) NSString *teamType; // @synthesize teamType=_teamType;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (id)teamName;

@end
