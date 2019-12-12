//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXPreferencesPaneModule.h>

@class NSButton, NSPopUpButton, NSTextField;

@interface PBXNavigationPrefsModule : PBXPreferencesPaneModule
{
    NSButton *indexingCheckbox;
    NSButton *codeCompletionShowSuggestionsCheckbox;
    NSButton *codeCompletionInsertPlaceholdersCheckbox;
    NSButton *codeCompletionShowArgsCheckbox;
    NSPopUpButton *codeCompletionAutoSuggestPopUp;
    NSButton *functionDeclCheckbox;
    NSButton *functionSortCheckbox;
    NSTextField *suggestionDelayTextField;
    NSTextField *suggestionLabelPrefix;
    NSTextField *suggestionLabelSuffix;
    NSPopUpButton *autoHighlightTokenOptionPopUp;
    NSTextField *autoHighlightTokenDelayTextField;
    NSTextField *autoHighlightTokenLabelPrefix;
    NSTextField *autoHighlightTokenLabelSuffix;
}

+ (void)_enableIndexingSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
+ (void)runNeedsIndexingEnabledSheetForFeature:(id)arg1 modalForWindow:(id)arg2;
- (void)checkBoxAction:(id)arg1;
- (void)colorWellAction:(id)arg1;
- (void)didChange;
- (void)initializeFromDefaults;
- (struct CGSize)minModuleSize;
- (void)popUpAction:(id)arg1;
- (void)saveChanges;
- (void)textFieldAction:(id)arg1;

@end

