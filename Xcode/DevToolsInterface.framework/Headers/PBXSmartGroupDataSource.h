//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsInterface/XCSelectionSource-Protocol.h>

@class NSString, PBXProject, PBXProjectModule, PBXSmartGroup;

@interface PBXSmartGroupDataSource : NSObject <XCSelectionSource>
{
    PBXProjectModule *_owningModule;
    PBXProject *_projectNotRetained;
    PBXSmartGroup *_owningSmartGroupNotRetained;
}

- (BOOL)addCornerView:(id)arg1;
- (void)applySelection:(id)arg1;
- (void)clearProject;
- (id)configurationIdentifier;
- (id)currentSelection;
- (id)detailView;
- (void)disconnect;
- (void)editSelection:(id)arg1;
- (id)iconImage;
- (id)initWithOwningModule:(id)arg1;
- (id)initWithOwningModule:(id)arg1 smartGroup:(id)arg2;
- (BOOL)isConnected;
- (id)keyTabView;
- (void)nextDetail:(id)arg1;
- (BOOL)openInSeparateEditorOrWithFinder;
- (id)owningModule;
- (id)owningSmartGroup;
- (id)pathForItem:(id)arg1;
- (void)previousDetail:(id)arg1;
- (id)project;
- (void)refresh;
- (void)removeCornerView;
- (BOOL)restore;
- (void)revealItems:(id)arg1 select:(BOOL)arg2;
- (void)save;
- (void)selectCurrentDetail:(id)arg1;
- (id)selectedProjectItemPaths;
- (id)selectedProjectItems;
- (void)showDetailFor:(id)arg1;
- (id)sourceControlManager;
- (id)status;
- (id)summary;
- (BOOL)wantsToRetainFocusDuringSelection;
- (double)widthOfString:(id)arg1 inFont:(id)arg2;
- (id)windowOfSelection;
- (id)workspace;
- (id)xcSelection;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

