//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDERefactoringViewController.h>

#import <IDEKit/NSTextFieldDelegate-Protocol.h>

@class IDEIndexSymbol, IDERefactoringInputValidator, NSDictionary, NSString;
@protocol IDERefactoringReservedWordChecking;

@interface IDERefactoringTransformationViewController : IDERefactoringViewController <NSTextFieldDelegate>
{
    IDEIndexSymbol *_originalSymbol;
    IDERefactoringInputValidator *_inputValidator;
    Class _inputValidatorClass;
    BOOL _checkForReservedWords;
    id <IDERefactoringReservedWordChecking> _reservedWordChecker;
}

- (void).cxx_destruct;
- (void)controlTextDidChange:(id)arg1;
@property(retain) IDERefactoringInputValidator *inputValidator; // @synthesize inputValidator=_inputValidator;
- (id)nibBundle;
@property(retain) IDEIndexSymbol *originalSymbol; // @synthesize originalSymbol=_originalSymbol;
@property(readonly) NSString *previewSummary;
@property(retain) id <IDERefactoringReservedWordChecking> reservedWordChecker; // @synthesize reservedWordChecker=_reservedWordChecker;
- (void)setInitialData:(id)arg1;
@property(readonly) NSDictionary *userInput;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
