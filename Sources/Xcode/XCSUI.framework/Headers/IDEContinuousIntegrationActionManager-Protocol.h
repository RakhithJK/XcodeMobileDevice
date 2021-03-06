//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSUI/NSObject-Protocol.h>

@class IDEWorkspace, IDEWorkspaceTabController, NSString, NSURL;

@protocol IDEContinuousIntegrationActionManager <NSObject>
- (void)canCreateHostedRepositoriesOnService:(id)arg1 completionHandler:(void (^)(BOOL, NSError *))arg2;
- (BOOL)canUserCreateAndDeleteBotsOnServiceForBotOrIntegration:(id)arg1;
- (BOOL)canUserDuplicateBot:(id)arg1;
- (void)cancelIntegration:(id)arg1 withCompletionBlock:(void (^)(BOOL, NSError *, NSString *, NSString *))arg2;
- (void)createHostedRepositoryWithName:(NSString *)arg1 onService:(id)arg2 completionHandler:(void (^)(BOOL, NSError *, DVTSourceControlRemoteRepository *))arg3;
- (void)deleteBot:(id)arg1 workspace:(IDEWorkspace *)arg2 withCompletionBlock:(void (^)(BOOL, NSError *, NSString *, NSString *))arg3;
- (void)deleteIntegration:(id)arg1 withCompletionBlock:(void (^)(BOOL, NSError *, NSString *, NSString *))arg2;
- (void)fetchBotForBotId:(NSString *)arg1 onService:(id)arg2 withCompletionBlock:(void (^)(BOOL, NSError *, id))arg3;
- (void)fetchIntegrationForId:(NSString *)arg1 onService:(id)arg2 withCompletionBlock:(void (^)(BOOL, NSError *, id))arg3;
- (void)fetchMostRecentIntegrationForBot:(id)arg1 onService:(id)arg2 withCompletionBlock:(void (^)(BOOL, NSError *, id))arg3;
- (void)findBotInServicesForXCBotUrlWithBotId:(NSString *)arg1 hostname:(NSString *)arg2 andCompletionBlock:(void (^)(BOOL, NSError *, id, id))arg3;
- (void)hostedRepositoriesOnService:(id)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)integrateBot:(id)arg1 cleanFirst:(BOOL)arg2 completionHandler:(void (^)(BOOL, NSError *, NSString *, NSString *))arg3;
- (void)integrationsForBot:(id)arg1 max:(unsigned long long)arg2 sortNewestFirst:(BOOL)arg3 completionHandler:(void (^)(NSArray *, NSError *))arg4;
- (void)populateIntegrations:(unsigned long long)arg1 forBot:(id)arg2 andIntegrationId:(NSString *)arg3 onService:(id)arg4 withCompletionBlock:(void (^)(BOOL, NSError *, id))arg5;
- (NSString *)projectNameInBlueprintForBot:(id)arg1;
- (void)serviceMatchingHostName:(NSString *)arg1 withTimeout:(double)arg2 completionBlock:(void (^)(BOOL, NSError *, id))arg3;
- (void)showBotEditorForWorkspaceTabController:(IDEWorkspaceTabController *)arg1 bot:(id)arg2 editingMode:(long long)arg3 completionBlock:(void (^)(BOOL, NSError *, NSArray *))arg4;
- (NSURL *)webURLForBot:(id)arg1;
- (NSURL *)webURLForIntegration:(id)arg1;
@end

