//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXProjectModule.h>

#import <DevToolsInterface/XCSelectionSource-Protocol.h>

@class DVMainController, NSString;

@interface XCDocSetAccessModule : PBXProjectModule <XCSelectionSource>
{
    BOOL _performanceTestsEnabled;
    double _time;
    double _lastSortTime;
    DVMainController *m_cachedDocSetViewingController;
    CDUnknownBlockType userInterfaceSearching;
}

+ (BOOL)docSetAccessModuleHasBeenInitialized;
+ (void)initialize;
+ (id)sharedDocSetAccessModule;
+ (void)showAPIAssistantInTextView:(id)arg1;
- (void)_createDocViewingMainController;
- (void)_perfWebViewDidFinishLoading:(id)arg1;
- (void)_performanceMeasurementWithState:(int)arg1 comment:(id)arg2;
- (BOOL)_showDocumentAtAppleRef:(id)arg1 inDocSet:(id)arg2;
- (void)addDocumentationBookmark;
@property(retain, nonatomic) DVMainController *cachedDocSetViewingController; // @synthesize cachedDocSetViewingController=m_cachedDocSetViewingController;
- (void)docSetConfigurationDidChange;
- (BOOL)docSetUpdateIsInProgress;
- (id)docViewingMainController;
- (id)documentURLForSymbol:(id)arg1;
- (void)fullTextSearchForString:(id)arg1;
- (id)initWithModuleNibName:(id)arg1;
- (BOOL)isSearchFieldVisible;
- (void)loadDocumentWithURL:(id)arg1;
- (void)loadDocumentWithURL:(id)arg1 fromDocSet:(id)arg2;
- (id)localizedHelpTopicsName;
- (id)localizedString:(id)arg1 description:(id)arg2;
- (id)localizedTitlesForItem:(id)arg1;
- (id)localizedTitlesForShowAllHelpTopics;
- (void)moduleViewWasInstalled:(id)arg1;
- (void)moduleWasDisplayed;
- (BOOL)openDocSetAtURL:(id)arg1;
- (BOOL)openDocSetAtURL:(id)arg1 withDisplay:(BOOL)arg2;
- (void)openURL:(id)arg1 fromDocSet:(id)arg2 inSeparateEditor:(BOOL)arg3;
- (void)openURL:(id)arg1 inSeparateEditor:(BOOL)arg2;
- (id)pathForDocumentWithAppleRef:(id)arg1;
- (id)pathForDocumentWithUUID:(id)arg1;
- (id)pathForXcodeHelp;
- (id)pathForXcodeReleaseNoteWithName:(id)arg1;
- (void)performActionForItem:(id)arg1;
- (id)project;
- (void)revealItems:(id)arg1 select:(BOOL)arg2;
- (void)searchForAPIString:(id)arg1;
- (void)searchForItemsWithSearchString:(id)arg1 resultLimit:(long long)arg2 matchedItemHandler:(CDUnknownBlockType)arg3;
- (void)searchLibraryForString:(id)arg1;
- (void)selectSearchField;
- (void)showAllHelpTopicsForSearchString:(id)arg1;
- (void)showDocWindow;
- (BOOL)showDocumentAtPath:(id)arg1;
- (BOOL)showDocumentContainingAppleRef:(id)arg1;
- (BOOL)showDocumentContainingUUID:(id)arg1;
- (void)showDocumentForBookmark:(id)arg1;
- (BOOL)showDocumentForSymbol:(id)arg1;
- (void)showGettingStartedWithXcode;
- (void)showManPagePanel:(id)arg1;
- (void)showXcodeHelp;
- (BOOL)showXcodeHelpAtAppleRef:(id)arg1;
- (void)showXcodeHomePage;
- (void)showXcodeReleaseNoteWithName:(id)arg1;
- (void)showXcodeReleaseNotes;
- (void)useSelectionForSearchFieldAndExecuteSearch;
- (void)userInterfaceSearch:(id)arg1;
- (void)viewDidLoad;
- (BOOL)wantsToRetainFocusDuringSelection;
- (void)windowDidBecomeKey:(id)arg1;
- (id)windowOfSelection;
- (id)workspaceForSelection;
- (id)xcSelection;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

