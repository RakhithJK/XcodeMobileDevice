//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsInterface/NSMenuDelegate-Protocol.h>

@class NSMutableArray, NSString;

@interface PBXWindowMenuHelper : NSObject <NSMenuDelegate>
{
    BOOL needsUniqueNames;
    NSMutableArray *projectArray;
}

+ (id)fileDirTitleSeparator;
+ (id)sharedWindowMenuHelper;
+ (id)stringByReplacingChar:(unsigned short)arg1 withChar:(unsigned short)arg2 inString:(id)arg3;
+ (id)titleFromFullPathComponents:(id)arg1 displayCount:(long long)arg2;
- (void)_updateAllWindowMenus;
- (void)addProjectsToMenu:(id)arg1 withUniqueNames:(BOOL)arg2 invokingSelector:(SEL)arg3;
- (id)addWMProjectArrayItem:(id)arg1;
- (id)addWMProjectWindowArrayItem:(id)arg1;
- (void)dealloc;
- (id)getWMProjectArrayItem:(id)arg1;
- (id)getWMProjectWindowArrayItem:(id)arg1;
- (BOOL)getWMWindowInfo:(id)arg1 setProjectArrayItem:(id *)arg2 setIndexOfProjectArrayItem:(long long *)arg3 setWindowArrayItem:(id *)arg4 setIndexOfWindowArrayItem:(long long *)arg5;
- (long long)indexOfProjectArrayItem:(id)arg1;
- (id)init;
- (void)logTheMenuHelperProjectArrayContents;
- (void)makeUniqueProjectNames;
- (void)menuNeedsUpdate:(id)arg1;
- (BOOL)needsUniqueNames;
- (id)projectArray;
- (id)projectArrayItemForIndex:(long long)arg1;
- (long long)projectCount;
- (id)projectDocumentForWindow:(id)arg1;
- (BOOL)removeWMProjectArrayItemForIndex:(long long)arg1;
- (BOOL)removeWMProjectWindowArrayItem:(id)arg1;
- (void)setNeedsUniqueNames:(BOOL)arg1;
- (id)uniqueMenuItemNamesForFullPaths:(id)arg1;
- (void)updateAllWindowMenus;
- (BOOL)updateWMProjectWindowArrayItem:(id)arg1;
- (void)updateWindowMenu:(id)arg1 withUniqueNames:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

