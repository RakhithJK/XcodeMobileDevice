//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXCodeAssistantStrategy.h>

@class NSArray, PBXFileReference, PBXHeaderFileSearchContext, PBXNativeTarget;

@interface PBXCodeAssistantHeaderSearchPathsBasedStrategy : PBXCodeAssistantStrategy
{
    PBXFileReference *_associatedFileReference;
    PBXNativeTarget *_associatedTarget;
    PBXHeaderFileSearchContext *_headerFileSearchContext;
    NSArray *_userHeaderSearchPaths;
    NSArray *_systemHeaderSearchPaths;
}

- (id)_completionItemsFromSubPath:(id)arg1 usingUserPaths:(BOOL)arg2;
- (id)_importLineStringUnderCursor;
- (BOOL)alwaysSearchUserPaths;
- (id)associatedFileReference;
- (id)associatedProject;
- (id)associatedTarget;
- (void)dealloc;
- (BOOL)getItems:(id *)arg1 withInfoString:(id)arg2;
- (id)headerFileSearchContext;
- (id)systemHeaderSearchPaths;
- (id)uniqueCompletionItemsAtPath:(id)arg1 withBasePriority:(long long)arg2;
- (id)userHeaderSearchPaths;

@end
