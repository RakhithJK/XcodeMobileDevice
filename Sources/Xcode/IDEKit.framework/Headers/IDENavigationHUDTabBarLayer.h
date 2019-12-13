//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import <IDEKit/CALayoutManager-Protocol.h>
#import <IDEKit/DVTInvalidation-Protocol.h>
#import <IDEKit/IDENavigationHUDSelectionDrivenLayer-Protocol.h>
#import <IDEKit/IDENavigationHUDWindowLevelNavigableLayer-Protocol.h>

@class CAGradientLayer, CAScrollLayer, DVTStackBacktrace, IDENavigationHUDSelection, IDENavigationHUDTabBarNewTabLayer, IDENavigationHUDTabBarTabLayer, IDENavigationHUDWorkspaceWindowLayer, IDEWorkspaceWindowController, NSDictionary, NSMapTable, NSString;

@interface IDENavigationHUDTabBarLayer : CALayer <CALayoutManager, IDENavigationHUDSelectionDrivenLayer, IDENavigationHUDWindowLevelNavigableLayer, DVTInvalidation>
{
    IDENavigationHUDWorkspaceWindowLayer *_workspaceWindowLayer;
    NSMapTable *_strongTabControllerToStrongTabLayerMap;
    IDENavigationHUDTabBarNewTabLayer *_newTabButton;
    BOOL _shouldScrollSelectedTabVisibleInLayout;
    IDENavigationHUDSelection *_initialSelection;
    IDENavigationHUDSelection *_selection;
    CAGradientLayer *_rightOverflowLayer;
    CAGradientLayer *_leftOverflowLayer;
    CAScrollLayer *_tabsScrollLayer;
    NSDictionary *_options;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(readonly) BOOL canCreateNewTab;
- (id)initWithWorkspaceWindowLayer:(id)arg1 initialSelection:(id)arg2 options:(id)arg3;
- (void)layoutSublayersOfLayer:(id)arg1;
- (id)navigationHUDController;
- (id)orderedTabLayers;
- (void)primitiveInvalidate;
@property(readonly) IDENavigationHUDTabBarTabLayer *selectedTabLayer;
@property(copy) IDENavigationHUDSelection *selection; // @synthesize selection=_selection;
- (id)selectionForNavigatingDown;
- (id)selectionForNavigatingLeft;
- (id)selectionForNavigatingLeftOneTab;
- (id)selectionForNavigatingRight;
- (id)selectionForNavigatingRightOneTab;
- (id)selectionForNavigatingUp;
@property(readonly) BOOL shouldOnlySelectInitialTab;
- (id)tabLayerForTabController:(id)arg1;
@property(readonly) IDEWorkspaceWindowController *workspaceWindowController;
@property(readonly) IDENavigationHUDWorkspaceWindowLayer *workspaceWindowLayer; // @synthesize workspaceWindowLayer=_workspaceWindowLayer;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
