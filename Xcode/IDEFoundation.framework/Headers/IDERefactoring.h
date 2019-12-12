//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>

@class DVTNotificationToken, DVTStackBacktrace, IDEWorkspace, NSString;

@interface IDERefactoring : NSObject <DVTInvalidation>
{
    IDEWorkspace *_workspace;
    DVTNotificationToken *_willIndexNotificationObservingToken;
    DVTNotificationToken *_didIndexNotificationObservingToken;
    BOOL _refactoringAllowed;
    id _domainObject;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(retain) id domainObject; // @synthesize domainObject=_domainObject;
- (id)initWithWorkspace:(id)arg1;
- (BOOL)isFileObjCCompilationUnitOrHeader:(id)arg1 error:(id *)arg2;
- (id)objCOrCCompilationUnitIndexablesForMainFile:(id)arg1 indexableObjects:(id)arg2;
- (void)primitiveInvalidate;
@property(readonly) IDEWorkspace *workspace; // @synthesize workspace=_workspace;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
