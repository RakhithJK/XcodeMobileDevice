//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDENavigationHUDAbstractWorkspaceWindowLayer.h>

#import <IDEKit/CALayoutManager-Protocol.h>
#import <IDEKit/IDENavigationHUDSelectionDrivenLayer-Protocol.h>

@class CAScrollLayer, IDENavigationHUDSelection, IDENavigationHUDTabBarLayer, IDEWorkspaceWindowController, NSArray, NSDictionary, NSMapTable, NSString;

@interface IDENavigationHUDWorkspaceWindowLayer : IDENavigationHUDAbstractWorkspaceWindowLayer <CALayoutManager, IDENavigationHUDSelectionDrivenLayer>
{
    NSMapTable *_strongWorkspaceTabControllerToStrongTabLayerMap;
    IDEWorkspaceWindowController *_workspaceWindowController;
    NSMapTable *_strongDividerLayerToLastKnownBoundsMap;
    NSMapTable *_strongTabLayerToStrongDividerLayerMap;
    IDENavigationHUDTabBarLayer *_tabBarLayer;
    IDENavigationHUDSelection *_selection;
    CAScrollLayer *_mainTabScrollLayer;
    NSArray *_orderedTabLayers;
    NSDictionary *_options;
}

- (void).cxx_destruct;
@property(readonly) BOOL canCreateNewTab;
- (id)dividerLayerForTabLayer:(id)arg1;
- (id)initWithNavigationHUDController:(id)arg1 workspaceWindowController:(id)arg2 initialSelection:(id)arg3 options:(id)arg4;
- (struct CGRect)lastKnownBoundsForDividerLayer:(id)arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)primitiveInvalidate;
- (id)representativeSelection;
- (void)scrollSelectedTabVisible;
- (id)selectedTabLayer;
@property(copy) IDENavigationHUDSelection *selection; // @synthesize selection=_selection;
- (id)selectionForNavigatingDown;
- (id)selectionForNavigatingLeft;
- (id)selectionForNavigatingLeftOneTab;
- (id)selectionForNavigatingRight;
- (id)selectionForNavigatingRightOneTab;
- (id)selectionForNavigatingUp;
- (void)setLastKnownBounds:(struct CGRect)arg1 forDividerLayer:(id)arg2;
@property(readonly) BOOL shouldOnlySelectInitialTab;
@property(readonly) BOOL shouldShowTabBar;
- (id)tabLayerForWorkspaceTabController:(id)arg1;
@property(readonly) IDEWorkspaceWindowController *workspaceWindowController; // @synthesize workspaceWindowController=_workspaceWindowController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

