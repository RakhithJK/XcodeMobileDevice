//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXSmartGroup.h>

@class NSMutableArray;

@interface PBXBreakpointsSmartGroup : PBXSmartGroup
{
    NSMutableArray *_breakpointChildren;
}

+ (id)flattenIntoBreakpoints:(id)arg1;
+ (id)globalID;
- (void)_breakpointDidChange:(id)arg1;
- (void)_flushCacheNotification:(id)arg1;
- (void)_flushCacheNotificationProjectClosing:(id)arg1;
- (BOOL)allowsEditingOfChildren;
- (id)breakpointBucketProxyForProjects:(id)arg1;
- (id)children;
- (id)datasource;
- (Class)datasourceClass;
- (void)dealloc;
- (void)deleteApplicableElements:(id)arg1 fromOutlineView:(id)arg2;
- (void)flushCache;
- (id)initWithBinding:(id)arg1;
- (BOOL)openWithProjectDocument:(id)arg1;

@end

