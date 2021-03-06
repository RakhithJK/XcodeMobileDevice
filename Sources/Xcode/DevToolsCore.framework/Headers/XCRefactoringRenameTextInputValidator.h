//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/XCRefactoringTextInputValidator.h>

@class NSString, PBXProject;

@interface XCRefactoringRenameTextInputValidator : XCRefactoringTextInputValidator
{
    NSString *_originalName;
    int _nameSymbolType;
    PBXProject *_project;
}

- (void)dealloc;
- (id)initWithOriginalName:(id)arg1 nameSymbolType:(int)arg2 project:(id)arg3;
- (BOOL)isStringValid:(id)arg1 otherStrings:(id)arg2 localizedMessage:(id *)arg3 invalidRange:(struct _NSRange *)arg4;
- (id)sameAsExistingSymbol;
- (id)sameAsOriginalLocalizedMessage;

@end

