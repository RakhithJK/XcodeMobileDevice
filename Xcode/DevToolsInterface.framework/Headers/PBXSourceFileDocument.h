//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXTextFileDocument.h>

@class NSMutableArray, NSMutableSet, _PBXSpeculativeCompilationInfo;

@interface PBXSourceFileDocument : PBXTextFileDocument
{
    NSMutableSet *_debugSessionModules;
    _PBXSpeculativeCompilationInfo *_speculativeCompilationInfo;
    NSMutableArray *_breakpointsInFile;
}

+ (Class)defaultFileEditorSubclass;
+ (id)emptySourceFileDocumentNamed:(id)arg1 withContents:(id)arg2;
+ (BOOL)isAnythingBeingSpeculativelyCompiled;
- (void)_breakpointsChanged:(id)arg1;
- (id)_breakpointsForProject:(id)arg1;
- (void)_finishSpeculativeCompilationInSeparateThreadWithSpecCompInfo:(id)arg1;
- (id)bestFileReferenceForSpeculativeCompilaton;
- (id)breakpointForLineNumber:(unsigned long long)arg1;
- (id)breakpoints;
- (BOOL)canBeSpeculativelyCompiled;
- (BOOL)canHaveBreakpoints;
- (void)cancelSpeculativeCompilation;
- (void)close;
- (void)dealloc;
- (struct _NSRange)findImportsRange;
- (void)finishSpeculativeCompilation;
- (BOOL)hasBreakpointsFromProject:(id)arg1;
- (BOOL)hasInstructionPointers;
- (id)importsFromScannerItem:(id)arg1;
- (id)init;
- (id)instructionPointers;
- (BOOL)isBeingSpeculativelyCompiled;
- (void)noteEditingOccurredInRange:(struct _NSRange)arg1;
- (void)setBreakpointInContainerProjectAndAtLineNumber:(unsigned long long)arg1;
- (void)setHasInstructionPointers:(BOOL)arg1 fromDebugSessionModule:(id)arg2;
- (void)startSpeculativeCompilationWithEditedRange:(struct _NSRange)arg1;
- (id)userScriptEnvironment;
- (BOOL)usesProgrammingLanguageBreaks;
- (BOOL)writeToFile:(id)arg1 ofType:(id)arg2;

@end

