//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSButton, NSMatrix, NSTextField, NSTextView;

@interface PBXGotoPanelController : NSWindowController
{
    NSTextField *textField;
    NSButton *gotoButton;
    NSMatrix *radioButtons;
    NSButton *autoupdateCheckbox;
    NSTextView *autoupdateTextView;
    BOOL autoupdateFlag;
}

+ (struct _NSRange)rangeFromRangeSpecification:(id)arg1;
+ (id)rangeSpecificationFromRange:(struct _NSRange)arg1;
+ (id)sharedGotoPanelController;
- (void)_applicationWillUpdate:(id)arg1;
- (void)autoupdateAction:(id)arg1;
- (void)changeRangeTypeAction:(id)arg1;
- (void)dealloc;
- (void)gotoAction:(id)arg1;
- (id)init;
- (void)selectRangeText;
- (void)textFieldAction:(id)arg1;
- (void)textViewSelectionChanged:(id)arg1;
- (void)updateFieldFromTextView:(id)arg1;
- (void)windowDidLoad;

@end

