//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXProjectModule.h>

#import <DevToolsInterface/XCRefactoringTransformationSetUpModule-Protocol.h>

@class XCRefactoringTransformationSetUpModule;

@interface XCRefactoringTransformationSetUpRow2Module : PBXProjectModule <XCRefactoringTransformationSetUpModule>
{
    XCRefactoringTransformationSetUpModule *_transformationSetUpModule;
}

+ (Class)classForTransformKey:(id)arg1;
- (void)addToUserInput:(id)arg1;
- (id)initWithModule:(id)arg1;
- (id)localizedMessage;
- (void)notifyOfTextField:(id)arg1 withFormatter:(id)arg2;
- (void)setSnapshot:(id)arg1;
- (void)setTextInputValidator:(id)arg1 forField:(id)arg2;
- (id)textInputValidatorForField:(id)arg1;
- (id)transformationSetUpModule;

@end
