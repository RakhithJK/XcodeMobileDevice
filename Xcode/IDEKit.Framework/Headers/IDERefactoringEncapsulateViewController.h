//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDERefactoringTransformationViewController.h>

@class IDERefactoringEncapsulateInputValidator, NSTextField;

@interface IDERefactoringEncapsulateViewController : IDERefactoringTransformationViewController
{
    NSTextField *_getterField;
    NSTextField *_setterField;
    IDERefactoringEncapsulateInputValidator *_getterInputValidator;
    IDERefactoringEncapsulateInputValidator *_setterInputValidator;
}

- (void).cxx_destruct;
- (void)allowUserInput:(BOOL)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)loadView;
- (id)nibName;
- (id)previewSummary;
- (void)setOriginalSymbol:(id)arg1;
- (void)setWindowController:(id)arg1;
- (id)userInput;

@end
