//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSComboBox.h>

#import <DVTKit/DVTFindPatternField-Protocol.h>

@class DVTFindPatternAttachmentCell, NSString;
@protocol DVTFindPatternManager;

@interface DVTFindPatternComboBox : NSComboBox <DVTFindPatternField>
{
    id <DVTFindPatternManager> findPatternManager;
    DVTFindPatternAttachmentCell *selectedAttachment;
}

- (void).cxx_destruct;
- (BOOL)_eventIsInsertPatternKeyEquivalent:(id)arg1;
- (id)_fieldEditor;
- (id)_findPatternAttachmentForFindPattern:(id)arg1;
- (void)_insertFindPattern:(id)arg1;
- (void)_insertFindPatternAttachment:(id)arg1;
- (void)_invalidateLayout;
- (BOOL)_isFindField;
- (id)_rangesOfFindPattern:(id)arg1;
- (void)_selectedFindPattern:(id)arg1;
- (void)_uniqueFindPatternsInAttributedStringAttachments:(id)arg1;
- (id)_uniquePatterns;
- (void)_updateFindPatternsWithNewPatterns:(id)arg1;
- (void)_updateReplacePatternsWithNewPatterns:(id)arg1;
- (id)findField;
- (id)findPatternArray;
@property id <DVTFindPatternManager> findPatternManager; // @synthesize findPatternManager;
- (id)findPatternPropertyList;
- (BOOL)hasFindPattern;
- (void)insertNewFindPattern:(id)arg1;
- (id)menuForFindPatternAttachment:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (id)plainTextValue;
- (id)regularExpression;
- (BOOL)removeFindPattern:(id)arg1;
- (id)replaceField;
- (id)replacementExpression;
- (void)setAttributedStringValue:(id)arg1;
- (void)setFindPatternArray:(id)arg1;
- (void)setFindPatternPropertyList:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)textView:(id)arg1 clickedOnCell:(id)arg2 inRect:(struct CGRect)arg3 atIndex:(unsigned long long)arg4;
- (void)textView:(id)arg1 doubleClickedOnCell:(id)arg2 inRect:(struct CGRect)arg3 atIndex:(unsigned long long)arg4;
- (id)textView:(id)arg1 shouldChangeTypingAttributes:(id)arg2 toAttributes:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

