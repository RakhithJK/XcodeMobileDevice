//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface XCRefactoringTransformationSpecificLogic : NSObject
{
}

+ (Class)classForTransformKey:(id)arg1;
- (BOOL)allowOnlyObjectiveCCompilationUnits:(id)arg1;
- (BOOL)getClass:(Class *)arg1 declaration:(id *)arg2 fromASTNode:(id)arg3 mainThreadArguments:(id)arg4 error:(id *)arg5;
- (id)localizedSnapshotTitle:(id)arg1;
- (id)localizedStringFrom:(id)arg1;
- (BOOL)mainThreadArgumentsAreAvailable:(id)arg1 error:(id *)arg2;
- (BOOL)modifyAllFiles:(id)arg1 mainThreadArguments:(id)arg2 error:(id *)arg3;
- (BOOL)modifyFileChangeSets:(id)arg1 parseThreadArguments:(id)arg2 error:(id *)arg3;
- (BOOL)modifyProblems:(id)arg1 parseThreadArguments:(id)arg2 error:(id *)arg3;
- (BOOL)parseUnsavedFiles:(id)arg1;
- (id)postInitialFileInfo:(id)arg1 newSelectionLineInfo:(struct _XCRefactoringLineInfo *)arg2 error:(id *)arg3;
- (id)preliminaryRelatedNames:(id)arg1;
- (id)setUpInfo:(id)arg1;
- (id)transformParamDict:(id)arg1;
- (BOOL)userInputIsAvailable:(id)arg1 error:(id *)arg2;

@end

