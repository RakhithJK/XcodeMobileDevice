//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTSourceControlWorkingCopy, DVTStackBacktrace, IDESourceControlWorkingTree, IDEWorkspace, NSArray, NSOperationQueue, NSString, NSWindow;
@protocol DVTSourceControlCancellable;

@interface IDESourceControlOperationInfo : NSObject <DVTInvalidation>
{
    NSOperationQueue *_queue;
    IDESourceControlWorkingTree *_workingTree;
    IDEWorkspace *_workspace;
    NSArray *_itemsToOperateOn;
    NSWindow *_window;
    DVTSourceControlWorkingCopy *_workingCopy;
    id <DVTSourceControlCancellable> _currentCancellable;
}

+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (id)containerFileTypesBlacklistedFromOutlineViewCompression;
+ (void)initialize;
- (void).cxx_destruct;
- (id)calculateContainersForItem:(id)arg1;
@property(retain) id <DVTSourceControlCancellable> currentCancellable; // @synthesize currentCancellable=_currentCancellable;
- (id)init;
@property(retain) NSArray *itemsToOperateOn; // @synthesize itemsToOperateOn=_itemsToOperateOn;
- (void)primitiveInvalidate;
- (id)processInfoWithProgressBlock:(CDUnknownBlockType)arg1 isSingleOperation:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property __weak NSWindow *window; // @synthesize window=_window;
@property(retain) DVTSourceControlWorkingCopy *workingCopy; // @synthesize workingCopy=_workingCopy;
@property(retain) IDESourceControlWorkingTree *workingTree; // @synthesize workingTree=_workingTree;
@property(retain) IDEWorkspace *workspace; // @synthesize workspace=_workspace;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

