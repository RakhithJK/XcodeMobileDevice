//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@class NSArray, NSMutableSet;

@interface XCSACL : XCSObject
{
}

- (id)_initWithID:(id)arg1 revision:(id)arg2 service:(id)arg3 botCreators:(id)arg4 botViewers:(id)arg5 hostedRepositoryCreators:(id)arg6 validationErrors:(id *)arg7;
- (BOOL)_validateWithAccounts:(id)arg1 identifier:(id)arg2 validationErrors:(id *)arg3;
- (BOOL)_validateWithID:(id)arg1 revision:(id)arg2 service:(id)arg3 botCreators:(id)arg4 botViewers:(id)arg5 hostedRepositoryCreators:(id)arg6 validationErrors:(id *)arg7;
- (BOOL)addBotCreators:(id)arg1 validationErrors:(id *)arg2;
- (BOOL)addBotViewers:(id)arg1 validationErrors:(id *)arg2;
- (BOOL)addHostedRepositoryCreators:(id)arg1 validationErrors:(id *)arg2;
@property(readonly, nonatomic) NSArray *botCreators;
@property(readonly, nonatomic) NSArray *botViewers;
- (void)clearACL;
- (void)clearBotCreators;
- (void)clearBotViewers;
- (void)clearHostedRepositoryCreators;
- (id)description;
- (id)dictionaryRepresentation;
@property(readonly, nonatomic) NSArray *hostedRepositoryCreators;
- (id)initWithBotCreators:(id)arg1 botViewers:(id)arg2 hostedRepositoryCreators:(id)arg3 validationErrors:(id *)arg4;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)patchRepresentation;
- (BOOL)removeBotCreators:(id)arg1 validationErrors:(id *)arg2;
- (BOOL)removeBotViewers:(id)arg1 validationErrors:(id *)arg2;
- (BOOL)removeHostedRepositoryCreators:(id)arg1 validationErrors:(id *)arg2;
- (id)saveRepresentation;
- (id)saveRepresentationHumanReadable:(BOOL)arg1;
- (void)setDefaultACL;
- (void)setDefaultBotCreators;
- (void)setDefaultBotViewers;
- (void)setDefaultHostedRepositoryCreators;

// Remaining properties
@property(retain, nonatomic) NSMutableSet *internalBotCreators; // @dynamic internalBotCreators;
@property(retain, nonatomic) NSMutableSet *internalBotViewers; // @dynamic internalBotViewers;
@property(retain, nonatomic) NSMutableSet *internalHostedRepositoryCreators; // @dynamic internalHostedRepositoryCreators;

@end
