//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <DVTKit/DVTSplitViewDelegate-Protocol.h>
#import <DVTKit/DVTTabChooserViewDelegate-Protocol.h>
#import <DVTKit/NSMenuDelegate-Protocol.h>
#import <DVTKit/NSTableViewDataSource-Protocol.h>
#import <DVTKit/NSTableViewDelegate-Protocol.h>
#import <DVTKit/NSWindowDelegate-Protocol.h>

@class DVTBorderedView, DVTDelayedInvocation, DVTDeviceProvisioningProfilesSheetController, DVTDevicesWindowContentAreaViewController, DVTGradientImageButton, DVTGradientImagePopUpButton, DVTLozengeTextField, DVTObservingToken, DVTOnboardingTutorialController, DVTScrollView, DVTSearchField, DVTSplitView, DVTStackView_ML, DVTTabChooserView, DVTTableView, DVTViewController, NSArray, NSArrayController, NSButton, NSIndexSet, NSMenu, NSMenuItem, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSWindow;
@protocol DVTDevicesWindowConsoleViewController;

@interface DVTDevicesWindowController : NSWindowController <DVTSplitViewDelegate, DVTTabChooserViewDelegate, NSTableViewDataSource, NSTableViewDelegate, NSMenuDelegate, NSWindowDelegate>
{
    DVTObservingToken *_devicesObserver;
    NSMutableDictionary *_deviceObservationTokens;
    NSMutableDictionary *_wirelessEnablingFutures;
    DVTDelayedInvocation *_delayedDevicesDisplayUpdateInvocation;
    BOOL _updatingDevicesForDisplay;
    BOOL _promptingForDelete;
    DVTLozengeTextField *_emptyContentView;
    DVTDeviceProvisioningProfilesSheetController *_provisioningProfilesSheet;
    DVTObservingToken *_selectedDeviceProxiedDeviceObserver;
    NSArray *_savedConsoleTabChoices;
    NSString *_savedConsoleTabSelectedChoiceTitle;
    BOOL _consoleVisible;
    BOOL _consoleSplitVisible;
    NSMutableSet *_devices;
    NSArray *_devicesForDisplay;
    NSIndexSet *_devicesTableSelectionIndexes;
    NSString *_filterString;
    DVTTableView *_devicesTable;
    NSArrayController *_devicesArrayController;
    DVTBorderedView *_mainBorderedView;
    DVTSplitView *_mainSplitView;
    DVTSplitView *_contentSplitView;
    DVTBorderedView *_pocketFooterBorderedView;
    DVTTabChooserView *_consoleHeaderTabChooserView;
    DVTBorderedView *_consoleFooterView;
    DVTBorderedView *_contentBorderedView;
    DVTStackView_ML *_consoleAreaStack;
    DVTGradientImagePopUpButton *_addSimulatorButton;
    DVTGradientImagePopUpButton *_gearButton;
    DVTGradientImageButton *_consoleButton;
    NSButton *_consoleClearButton;
    NSButton *_consoleSaveButton;
    DVTSearchField *_searchField;
    NSMenuItem *_ignoreMenuItem;
    NSMenuItem *_unpairMenuItem;
    NSMenuItem *_enableWirelessMenuItem;
    NSMenuItem *_deleteSimMenuItem;
    DVTDevicesWindowContentAreaViewController *_contentAreaViewController;
    DVTScrollView *_scrollView;
    NSMenu *_devicesMenu;
    NSMenu *_addDevicesMenu;
    NSWindow *_tutorialWindow;
    DVTOnboardingTutorialController *_tutorialController;
    DVTViewController<DVTDevicesWindowConsoleViewController> *_consoleViewController;
}

+ (id)sharedDevicesWindowController;
- (void).cxx_destruct;
- (void)_addDevices:(id)arg1;
- (void)_adjustButtonStyling:(id)arg1;
- (id)_borderColor;
- (id)_contextuallySelectedDevice;
- (double)_coordinateOfContentSplitViewDividerWithConsoleVisibile:(BOOL)arg1;
- (id)_detailViewControllerInfoDictionaryForDevice:(id)arg1;
- (id)_deviceWithIdentifier:(id)arg1;
- (void)_hideEmptySelectionView;
- (id)_provisioningProfileTypeIdentifers;
- (id)_purportedSelectedDeviceWithSelectionIndexes:(id)arg1;
- (void)_removeDevices:(id)arg1 updateDisplay:(BOOL)arg2;
- (void)_selectDeviceWithIdentifierInDevicesTable:(id)arg1;
- (id)_selectedDevice;
- (void)_showEmptySelectionView;
- (id)_simulatorLocator;
- (void)_startObservingDeviceAvailabilty;
- (void)_stopObservingDeviceAvailabilty;
- (void)_syncConsoleTabChoicesForSummaryViewController:(id)arg1;
- (void)_syncConsoleTabSelectedChoice;
- (void)_syncSelectionToDeviceIdentifier:(id)arg1;
- (void)_updateDeviceDisplayWithDelay:(BOOL)arg1;
- (void)_updateDevices;
- (void)_verticallyCenterView:(id)arg1;
@property __weak NSMenu *addDevicesMenu; // @synthesize addDevicesMenu=_addDevicesMenu;
- (void)addNewDevice:(id)arg1;
- (void)addSimulator:(id)arg1;
@property(retain) DVTGradientImagePopUpButton *addSimulatorButton; // @synthesize addSimulatorButton=_addSimulatorButton;
- (void)beginOnboardingTutorialSheet;
- (void)clearConsole:(id)arg1;
@property(retain) DVTStackView_ML *consoleAreaStack; // @synthesize consoleAreaStack=_consoleAreaStack;
@property(retain) DVTGradientImageButton *consoleButton; // @synthesize consoleButton=_consoleButton;
@property(retain) NSButton *consoleClearButton; // @synthesize consoleClearButton=_consoleClearButton;
@property(retain) DVTBorderedView *consoleFooterView; // @synthesize consoleFooterView=_consoleFooterView;
@property(retain) DVTTabChooserView *consoleHeaderTabChooserView; // @synthesize consoleHeaderTabChooserView=_consoleHeaderTabChooserView;
@property(retain) NSButton *consoleSaveButton; // @synthesize consoleSaveButton=_consoleSaveButton;
@property(retain) DVTViewController<DVTDevicesWindowConsoleViewController> *consoleViewController; // @synthesize consoleViewController=_consoleViewController;
@property(retain) DVTDevicesWindowContentAreaViewController *contentAreaViewController; // @synthesize contentAreaViewController=_contentAreaViewController;
@property(retain) DVTBorderedView *contentBorderedView; // @synthesize contentBorderedView=_contentBorderedView;
@property(retain) DVTSplitView *contentSplitView; // @synthesize contentSplitView=_contentSplitView;
@property(retain) NSMenuItem *deleteSimMenuItem; // @synthesize deleteSimMenuItem=_deleteSimMenuItem;
- (void)deleteSimulator:(id)arg1;
@property(retain) NSMutableSet *devices; // @synthesize devices=_devices;
@property(retain) NSArrayController *devicesArrayController; // @synthesize devicesArrayController=_devicesArrayController;
@property(retain) NSArray *devicesForDisplay; // @synthesize devicesForDisplay=_devicesForDisplay;
@property __weak NSMenu *devicesMenu; // @synthesize devicesMenu=_devicesMenu;
@property(retain) DVTTableView *devicesTable; // @synthesize devicesTable=_devicesTable;
@property(retain, nonatomic) NSIndexSet *devicesTableSelectionIndexes; // @synthesize devicesTableSelectionIndexes=_devicesTableSelectionIndexes;
@property(retain) NSMenuItem *enableWirelessMenuItem; // @synthesize enableWirelessMenuItem=_enableWirelessMenuItem;
@property(copy, nonatomic) NSString *filterString; // @synthesize filterString=_filterString;
@property(retain) DVTGradientImagePopUpButton *gearButton; // @synthesize gearButton=_gearButton;
@property(retain) NSMenuItem *ignoreMenuItem; // @synthesize ignoreMenuItem=_ignoreMenuItem;
- (id)initWithWindowNibName:(id)arg1;
@property(nonatomic, getter=isConsoleSplitVisible) BOOL consoleSplitVisible; // @synthesize consoleSplitVisible=_consoleSplitVisible;
@property(nonatomic, getter=isConsoleVisible) BOOL consoleVisible; // @synthesize consoleVisible=_consoleVisible;
@property(retain) DVTBorderedView *mainBorderedView; // @synthesize mainBorderedView=_mainBorderedView;
@property(retain) DVTSplitView *mainSplitView; // @synthesize mainSplitView=_mainSplitView;
- (void)menuWillOpen:(id)arg1;
- (BOOL)openFileURL:(id)arg1 withFileType:(id)arg2 error:(id *)arg3;
@property(retain) DVTBorderedView *pocketFooterBorderedView; // @synthesize pocketFooterBorderedView=_pocketFooterBorderedView;
- (void)renameDevice:(id)arg1;
- (void)restoreConsoleDividerPositionState;
- (void)restoreConsoleState;
- (void)restoreConsoleVisibleState;
- (void)saveConsole:(id)arg1;
- (void)saveConsoleDividerPositionState;
- (void)saveConsoleVisibleState;
@property __weak DVTScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain) DVTSearchField *searchField; // @synthesize searchField=_searchField;
@property(copy, nonatomic) NSString *selectedDeviceIdentifier;
@property(retain) DVTOnboardingTutorialController *tutorialController; // @synthesize tutorialController=_tutorialController;
@property(retain) NSWindow *tutorialWindow; // @synthesize tutorialWindow=_tutorialWindow;
@property(retain) NSMenuItem *unpairMenuItem; // @synthesize unpairMenuItem=_unpairMenuItem;
- (void)showProvisioningProfiles:(id)arg1;
- (void)showWindow:(id)arg1;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (struct CGRect)splitView:(id)arg1 effectiveRect:(struct CGRect)arg2 forDrawnRect:(struct CGRect)arg3 ofDividerAtIndex:(long long)arg4;
- (void)splitViewDidEndLiveResize:(id)arg1;
- (void)splitViewDidResizeSubviews:(id)arg1;
@property(readonly) NSSet *supportedFileDataTypeIdentifiers;
- (void)tabChooserView:(id)arg1 userDidChooseChoice:(id)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (void)toggleConsole:(id)arg1;
- (void)toggleDeviceIgnored:(id)arg1;
- (void)toggleEnableWireless:(id)arg1;
- (void)unpairDevice:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (struct CGRect)window:(id)arg1 willPositionSheet:(id)arg2 usingRect:(struct CGRect)arg3;
- (void)windowDidLoad;
- (void)windowWillClose:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

