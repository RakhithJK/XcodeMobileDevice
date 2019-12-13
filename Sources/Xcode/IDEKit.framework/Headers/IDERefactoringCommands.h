//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDECommandHandler-Protocol.h>
#import <IDEKit/IDECommandHandlerVendor-Protocol.h>

@class IDERefactoringSession, IDERefactoringWindowController, NSMutableDictionary, NSString;
@protocol IDESelectionSource;

@interface IDERefactoringCommands : NSObject <IDECommandHandlerVendor, IDECommandHandler>
{
    Class _selectionValidationClass;
    NSMutableDictionary *_transformationClasses;
    NSMutableDictionary *_viewControllerClasses;
    NSMutableDictionary *_inputValidatorClasses;
    id <IDESelectionSource> _selectionSource;
    IDERefactoringWindowController *_windowController;
    IDERefactoringSession *_session;
}

+ (id)_refactoringForMainWindow;
+ (id)_sharedHandler;
+ (id)handlerForAction:(SEL)arg1 withSelectionSource:(id)arg2;
+ (void)refactoringCommandCompleted;
- (void).cxx_destruct;
- (BOOL)_validateTransformation:(id)arg1 contextMenu:(BOOL)arg2 error:(id *)arg3;
- (void)contextMenu_refactorCreateSuperclass:(id)arg1;
- (void)contextMenu_refactorEncapsulate:(id)arg1;
- (void)contextMenu_refactorExtract:(id)arg1;
- (void)contextMenu_refactorMoveDown:(id)arg1;
- (void)contextMenu_refactorMoveUp:(id)arg1;
- (void)contextMenu_refactorRename:(id)arg1;
- (id)init;
- (void)refactor:(id)arg1 contextMenu:(BOOL)arg2;
- (void)refactorCreateSuperclass:(id)arg1;
- (void)refactorEncapsulate:(id)arg1;
- (void)refactorExtract:(id)arg1;
- (void)refactorMoveDown:(id)arg1;
- (void)refactorMoveUp:(id)arg1;
- (void)refactorRename:(id)arg1;
@property(retain) id <IDESelectionSource> selectionSource; // @synthesize selectionSource=_selectionSource;
@property(retain) IDERefactoringSession *session; // @synthesize session=_session;
@property(retain) IDERefactoringWindowController *windowController; // @synthesize windowController=_windowController;
- (BOOL)validateUserInterfaceItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
