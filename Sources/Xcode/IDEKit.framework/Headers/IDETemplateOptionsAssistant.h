//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDETemplateInstantiationAssistant.h>

#import <IDEKit/NSComboBoxDataSource-Protocol.h>

@class IDETemplateOptionsView, NSArray, NSMutableDictionary, NSString, NSTextField;

@interface IDETemplateOptionsAssistant : IDETemplateInstantiationAssistant <NSComboBoxDataSource>
{
    IDETemplateOptionsView *_mainView;
    NSArray *_classNames;
    NSMutableDictionary *_controlsForOptionIds;
    BOOL _canGoForward;
    NSTextField *_firstTextField;
    NSArray *_sortedPrimaryOptions;
}

- (void).cxx_destruct;
- (struct CGRect)_frameForControl:(id)arg1 option:(id)arg2 mainViewBounds:(struct CGRect)arg3 minLabelWidth:(double)arg4;
- (void)_setControl:(id)arg1 forOptionIdentifier:(id)arg2;
- (id)_valueProvidingOptionForOption:(id)arg1 fromOptionArray:(id)arg2;
- (id)additionalOptions;
- (id)additionalSortedOptions;
- (id)assistantTitle;
@property BOOL canGoForward; // @synthesize canGoForward=_canGoForward;
- (id)classNamesForComboBox:(id)arg1;
- (id)comboBox:(id)arg1 completedString:(id)arg2;
- (unsigned long long)comboBox:(id)arg1 indexOfItemWithStringValue:(id)arg2;
- (id)comboBox:(id)arg1 objectValueForItemAtIndex:(long long)arg2;
- (id)controlForOptionIdentifier:(id)arg1;
- (id)createControlForOption:(id)arg1 withOptionArray:(id)arg2;
- (id)createLabelForOption:(id)arg1;
@property(retain) NSTextField *firstTextField; // @synthesize firstTextField=_firstTextField;
- (void)loadView;
- (id)nextAssistantIdentifier;
- (long long)numberOfItemsInComboBox:(id)arg1;
- (void)primitiveInvalidate;
- (double)requiredViewSpacingForOption:(id)arg1;
- (void)restoreSelectionFromUserDefaults;
- (void)setAssistantContext:(id)arg1;
- (void)setupOptionViews;
@property(readonly) NSArray *sortedPrimaryOptions; // @synthesize sortedPrimaryOptions=_sortedPrimaryOptions;
- (void)updateOptions:(id)arg1;
- (void)viewDidInstall;
- (void)viewWillUninstall;
- (void)writeStateToUserDefaults;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

