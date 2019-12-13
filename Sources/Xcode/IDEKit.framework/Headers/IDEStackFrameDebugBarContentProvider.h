//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEDebugBarContentProvider.h>

#import <IDEKit/IDEPathCellDelegate-Protocol.h>

@class DVTNotificationToken, DVTObservingToken, IDENavigableItem, IDENavigableItemCoordinator, IDEPathControl, NSArray, NSString;

@interface IDEStackFrameDebugBarContentProvider : IDEDebugBarContentProvider <IDEPathCellDelegate>
{
    IDEPathControl *_pathControl;
    IDENavigableItemCoordinator *_navigableItemCoordinator;
    IDENavigableItem *_rootNavigableItem;
    IDENavigableItem *_selectedItem;
    DVTObservingToken *_rootNavigableChildItemsObservingToken;
    DVTObservingToken *_currentStackFrameObserverToken;
    DVTObservingToken *_selectedNavigableItemFrameObserverToken;
    DVTObservingToken *_debugSessionStateObserverToken;
    DVTObservingToken *_launchSessionStateObserverToken;
    DVTObservingToken *_executionEnvironmentObserverToken;
    DVTNotificationToken *_forgetNavigableItemsObserverToken;
    BOOL _handlingSetSelectedItem;
}

+ (BOOL)automaticallyNotifiesObserversOfSelectedItem;
+ (Class)debugSessionControllerClass;
+ (id)keyPathsForValuesAffectingNavigableDebugItems;
- (void).cxx_destruct;
- (void)_forgetNavigableItems:(id)arg1;
- (void)_handleDebugBarSelectedModelItemChanged;
- (void)_retrySetSelectedItem;
- (void)_selectItemBasedOnDebugSessionState;
- (void)_simpleSetSelectedItemWithKVO:(id)arg1;
- (BOOL)_userIsCurrentlyCPUDebugging;
- (struct CGRect)additionalGrabRectOfDebugBar:(id)arg1 inTermsOfView:(id)arg2;
- (void)currentDebugSessionDidChange;
- (void)currentDebugSessionStateDidChange;
- (void)currentStackFrameDidChange:(id)arg1;
@property(readonly) BOOL hasRealDebugSession;
- (id)init;
@property(readonly) NSArray *navigableDebugItems;
@property(readonly) IDENavigableItemCoordinator *navigableItemCoordinator; // @synthesize navigableItemCoordinator=_navigableItemCoordinator;
- (id)pathCell:(id)arg1 childItemsForItem:(id)arg2;
@property(retain) IDEPathControl *pathControl; // @synthesize pathControl=_pathControl;
- (void)removeRootNavigableItemFromCoordinator;
@property(retain, nonatomic) IDENavigableItem *rootNavigableItem; // @synthesize rootNavigableItem=_rootNavigableItem;
@property(retain, nonatomic) IDENavigableItem *selectedItem; // @synthesize selectedItem=_selectedItem;
- (void)wasAttachedToDebugBar:(id)arg1;
- (void)willBeDetachedFromDebugBar:(id)arg1;
- (double)xOffsetForSharedLibrariesPopUpAnchoredOnDebugBar:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
