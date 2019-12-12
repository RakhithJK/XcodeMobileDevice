//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <IDEKit/DVTInvalidation-Protocol.h>
#import <IDEKit/NSSearchFieldDelegate-Protocol.h>

@class DVTMutableOrderedDictionary, DVTSearchField, DVTStackBacktrace, IDEAppChooserModelObject, IDERunDestination, IDEScheme, IDESchemeCommand, NSArray, NSArrayController, NSButton, NSIndexSet, NSLock, NSMutableArray, NSMutableSet, NSObject, NSProgressIndicator, NSString, NSTableView, NSWindow;
@protocol OS_dispatch_queue;

@interface IDEAppChooserWindowController : NSWindowController <DVTInvalidation, NSSearchFieldDelegate>
{
    NSLock *_foundAppsLock;
    CDUnknownBlockType _completionHandler;
    NSMutableArray *_sortedFoundApplications;
    NSMutableSet *_foundApplicationURLs;
    NSObject<OS_dispatch_queue> *_appChooserQueue;
    unsigned long long _type;
    NSWindow *_sheet;
    BOOL _haveFoundAtLeastOneUserAppOnDevice;
    NSWindow *_parentWindow;
    BOOL _runDestinationIsMac;
    NSArray *_orderedChooserApplications;
    NSString *_filterString;
    IDEAppChooserModelObject *_selectedApplicationModelObject;
    NSArrayController *_applicationsArrayController;
    NSIndexSet *_applicationsSelectionIndexes;
    DVTSearchField *_filterField;
    NSTableView *_tableView;
    NSButton *_runLaunchButton;
    NSButton *_cancelButton;
    NSButton *_browseButton;
    NSProgressIndicator *_progressIndicator;
    IDERunDestination *_runDestination;
    IDEScheme *_scheme;
    IDESchemeCommand *_schemeCommand;
    NSArray *_suggestedApps;
    NSArray *_installedApplications;
    DVTMutableOrderedDictionary *_orderedRecentsByURL;
    NSArray *_recentApplicationItems;
}

+ (void)initialize;
- (void).cxx_destruct;
- (id)_addApplicationsAndReturnUniqueURLs:(id)arg1;
- (void)_applyFilesystemPropertiesIfPossibleToModelObject:(id)arg1;
- (id)_attachToExistingBundleIDPathExtension;
- (id)_displayNameFromURL:(id)arg1;
- (void)_findInstalledApplications;
- (void)_findLaunchersForDevice:(id)arg1;
- (void)_findRecentAppsFromRecentItems:(id)arg1;
- (void)_findSystemApplicationsForDevice:(id)arg1;
- (void)_findUserApplicationsForDevice:(id)arg1;
- (id)_getRecentApplicationsFromUserDefaults;
- (id)_imageFromURL:(id)arg1;
- (id)_modelObjectFromApplication:(id)arg1;
- (id)_modelObjectFromURL:(id)arg1 displayName:(id)arg2 bundleID:(id)arg3;
- (id)_predicateFromFilterString:(id)arg1;
- (id)_realBundleIDForModelObject:(id)arg1;
- (id)_recentAppsKey;
- (id)_sentinelApplicationsForDebuggingAppExtensionsOnDevice:(id)arg1;
- (void)_updateOrderedChooserApplications;
- (void)_updateRecentApplicationsWithApp:(id)arg1;
- (void)_updateSuggestedAppsForTargetExtensionIfAppropriateForSchemeCommand:(id)arg1;
@property(retain) NSArrayController *applicationsArrayController; // @synthesize applicationsArrayController=_applicationsArrayController;
@property(retain, nonatomic) NSIndexSet *applicationsSelectionIndexes; // @synthesize applicationsSelectionIndexes=_applicationsSelectionIndexes;
- (void)awakeFromNib;
- (void)beginSheetOnWindow:(id)arg1 runDestination:(id)arg2 scheme:(id)arg3 command:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)browseAction:(id)arg1;
@property __weak NSButton *browseButton; // @synthesize browseButton=_browseButton;
- (void)cancelAction:(id)arg1;
@property __weak NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
@property __weak DVTSearchField *filterField; // @synthesize filterField=_filterField;
@property(retain, nonatomic) NSString *filterString; // @synthesize filterString=_filterString;
- (id)initWithChooserType:(unsigned long long)arg1;
@property(retain, nonatomic) NSArray *installedApplications; // @synthesize installedApplications=_installedApplications;
@property(retain) NSArray *orderedChooserApplications; // @synthesize orderedChooserApplications=_orderedChooserApplications;
@property(retain, nonatomic) DVTMutableOrderedDictionary *orderedRecentsByURL; // @synthesize orderedRecentsByURL=_orderedRecentsByURL;
- (void)primitiveInvalidate;
@property __weak NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(readonly) NSArray *recentApplicationItems; // @synthesize recentApplicationItems=_recentApplicationItems;
@property __weak IDERunDestination *runDestination; // @synthesize runDestination=_runDestination;
@property __weak NSButton *runLaunchButton; // @synthesize runLaunchButton=_runLaunchButton;
- (void)runOrLaunch:(id)arg1;
@property __weak IDEScheme *scheme; // @synthesize scheme=_scheme;
@property(retain) IDESchemeCommand *schemeCommand; // @synthesize schemeCommand=_schemeCommand;
@property(retain) IDEAppChooserModelObject *selectedApplicationModelObject; // @synthesize selectedApplicationModelObject=_selectedApplicationModelObject;
- (id)selectedRunnable;
@property(copy) NSArray *suggestedApps; // @synthesize suggestedApps=_suggestedApps;
@property __weak NSTableView *tableView; // @synthesize tableView=_tableView;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
@property(readonly) unsigned long long type; // @synthesize type=_type;
- (void)windowDidLoad;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
