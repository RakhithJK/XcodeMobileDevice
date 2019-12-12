//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <XCSUI/DVTReplacementViewDelegate-Protocol.h>
#import <XCSUI/DVTSplitViewDelegate-Protocol.h>
#import <XCSUI/XCSBotSupportingEditorHostedViewController-Protocol.h>

@class DVTBorderedView, DVTLozengeTextField, DVTObservingToken, DVTSplitView, IDETestReportTestRunFetcher, NSArray, NSError, NSString, XCSBot, XCSBotSupportingEditor, XCSIntegration, XCSUIProgressReplacementView;

@interface XCSUIIntegrationTestsViewController : IDEViewController <DVTSplitViewDelegate, DVTReplacementViewDelegate, XCSBotSupportingEditorHostedViewController>
{
    BOOL _inSetIntegration;
    IDETestReportTestRunFetcher *_testRunFetcher;
    XCSBotSupportingEditor *_botSupportingEditor;
    NSArray *_currentSelectedItems;
    NSArray *_currentSelectedDocumentLocations;
    XCSIntegration *_integration;
    XCSBot *_bot;
    NSError *_error;
    XCSUIProgressReplacementView *_detailReplacementView;
    DVTBorderedView *_borderedView;
    DVTSplitView *_splitView;
    DVTLozengeTextField *_errorTextField;
    DVTObservingToken *_expandedTestItemsObservationToken;
    DVTObservingToken *_expandedTestActivitiesObservationToken;
    NSArray *_currentlyExpandedTestItemIdentifiers;
    NSArray *_currentlyExpandedTestActivityIdentifiers;
}

+ (BOOL)instancesCanContainDocumentLocation:(id)arg1;
+ (id)keyPathsForValuesAffectingCurrentSelectedItems;
- (void).cxx_destruct;
- (void)_configureTestReport;
- (id)_defaultsKeyDateFormatter;
- (void)_restoreExpandedItems;
- (void)_saveExpandedItems;
@property __weak DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property(retain, nonatomic) XCSBot *bot; // @synthesize bot=_bot;
@property(retain, nonatomic) XCSBotSupportingEditor *botSupportingEditor; // @synthesize botSupportingEditor=_botSupportingEditor;
@property(readonly, copy) NSArray *currentSelectedDocumentLocations; // @synthesize currentSelectedDocumentLocations=_currentSelectedDocumentLocations;
@property(readonly, copy) NSArray *currentSelectedItems; // @synthesize currentSelectedItems=_currentSelectedItems;
@property(retain, nonatomic) NSArray *currentlyExpandedTestActivityIdentifiers; // @synthesize currentlyExpandedTestActivityIdentifiers=_currentlyExpandedTestActivityIdentifiers;
@property(retain, nonatomic) NSArray *currentlyExpandedTestItemIdentifiers; // @synthesize currentlyExpandedTestItemIdentifiers=_currentlyExpandedTestItemIdentifiers;
@property __weak XCSUIProgressReplacementView *detailReplacementView; // @synthesize detailReplacementView=_detailReplacementView;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property __weak DVTLozengeTextField *errorTextField; // @synthesize errorTextField=_errorTextField;
@property(retain) DVTObservingToken *expandedTestActivitiesObservationToken; // @synthesize expandedTestActivitiesObservationToken=_expandedTestActivitiesObservationToken;
- (id)expandedTestActivityDefaultsDictionary;
- (id)expandedTestActivityUserDefaultsKey;
- (id)expandedTestItemsDefaultsDictionary;
@property(retain) DVTObservingToken *expandedTestItemsObservationToken; // @synthesize expandedTestItemsObservationToken=_expandedTestItemsObservationToken;
- (id)expandedTestItemsUserDefaultsKey;
@property(retain, nonatomic) XCSIntegration *integration; // @synthesize integration=_integration;
- (void)loadView;
- (void)primitiveInvalidate;
- (void)replacementView:(id)arg1 didInstallViewController:(id)arg2;
- (void)selectDocumentLocations:(id)arg1;
@property __weak DVTSplitView *splitView; // @synthesize splitView=_splitView;
- (id)testReportViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

