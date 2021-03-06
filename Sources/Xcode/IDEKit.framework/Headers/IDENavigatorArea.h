//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/DVTReplacementViewDelegate-Protocol.h>
#import <IDEKit/DVTStatefulObject-Protocol.h>

@class DVTBorderedView, DVTChooserView, DVTExtension, DVTObservingToken, DVTReplacementView, DVTStateToken, IDENavigator, IDENavigatorFilterControlBar, NSArrayController, NSMutableDictionary, NSString;
@protocol DVTCancellable;

@interface IDENavigatorArea : IDEViewController <DVTReplacementViewDelegate, DVTStatefulObject>
{
    DVTChooserView *_chooserView;
    DVTObservingToken *_workspaceActivityObservingToken;
    DVTObservingToken *_editorSelectedItemObservingToken;
    DVTObservingToken *_currentNavigatorObservingToken;
    id <DVTCancellable> _updateFocusedEditorSelectedItemToken;
    NSMutableDictionary *_perNavigatorCache;
    BOOL _isInvalidating;
    IDENavigatorFilterControlBar *_filterControlBar;
    DVTReplacementView *_replacementView;
    NSArrayController *_extensionsController;
    DVTExtension *_currentExtension;
    DVTBorderedView *_borderedView;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)keyPathsForValuesAffectingCurrentNavigator;
+ (id)keyPathsForValuesAffectingWorkspace;
+ (id)navigatorsForContext:(id)arg1;
+ (long long)version;
- (void).cxx_destruct;
- (void)_clearPerNavigatorCache;
- (id)_currentExtensionIdentifier;
- (void)_handleCurrentNavigatorChanged;
- (id)_imageForNavigator:(id)arg1 withName:(id)arg2;
- (id)_playgroundExcludedNavigators;
- (void)_rebuildNavigatorOptions;
- (void)_setCurrentExtensionIdentifier:(id)arg1;
- (void)activateFilterFieldForFocus;
@property __weak DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
- (id)cacheDictionaryForNavigatorID:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
@property(retain, nonatomic) DVTExtension *currentExtension; // @synthesize currentExtension=_currentExtension;
@property(readonly) IDENavigator *currentNavigator;
@property(readonly) NSString *currentNavigatorIdentifier;
- (BOOL)delegateFirstResponder;
@property(retain) NSArrayController *extensionsController; // @synthesize extensionsController=_extensionsController;
@property(readonly) IDENavigatorFilterControlBar *filterControlBar; // @synthesize filterControlBar=_filterControlBar;
- (void)installFilterControlBarForNavigator:(id)arg1;
- (void)loadView;
- (double)minimumContentWidth;
- (id)perNavigatorCacheKeyForNavigator:(id)arg1;
- (void)primitiveInvalidate;
@property(retain) DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
- (void)replacementView:(id)arg1 didInstallViewController:(id)arg2;
- (void)replacementView:(id)arg1 willCloseViewController:(id)arg2;
- (void)replacementView:(id)arg1 willInstallViewController:(id)arg2;
- (void)revertStateWithDictionary:(id)arg1;
- (void)showNavigatorWithIdentifier:(id)arg1;
- (id)supportedContext;
- (void)viewDidInstall;
- (void)viewWillUninstall;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain) DVTStateToken *stateToken; // @dynamic stateToken;
@property(readonly) Class superclass;

@end

