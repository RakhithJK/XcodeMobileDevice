//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/PBXObject.h>

#import <DevToolsCore/PBXChangeNotification-Protocol.h>

@class NSMutableDictionary, NSString;

@interface PBXContainerItem : PBXObject <PBXChangeNotification>
{
    NSString *_comments;
    NSMutableDictionary *_uiContext;
}

+ (id)archivableAttributes;
+ (id)archivableUserAttributes;
+ (id)archiveNameForKey:(id)arg1;
- (int)changeMask;
- (id)comments;
- (id)container;
- (id)copyWithZone:(struct _NSZone *)arg1 getUnretainedObjectMappings:(id *)arg2;
- (void)dealloc;
- (void)handleMoveCommand:(id)arg1;
- (id)init;
- (id)objectForUserInterfaceContextKey:(id)arg1;
- (id)project;
- (void)removeObjectForUserInterfaceContextKey:(id)arg1;
- (void)setComments:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setObject:(id)arg1 forUserInterfaceContextKey:(id)arg2;
- (void)setProject:(id)arg1;
- (void)setUserInterfaceContext:(id)arg1;
- (BOOL)shouldArchiveComments;
- (BOOL)shouldArchiveUserInterfaceContext;
- (id)userInterfaceContext;
- (void)willChange;
- (void)willChangeWithArchivePriority:(int)arg1;

@end

