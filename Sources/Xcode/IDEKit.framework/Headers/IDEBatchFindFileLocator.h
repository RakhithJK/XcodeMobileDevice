//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPredicate, NSString;

@interface IDEBatchFindFileLocator : NSObject
{
    NSString *_path;
    NSPredicate *_predicate;
}

- (void).cxx_destruct;
- (id)initWithPath:(id)arg1 andPredicate:(id)arg2;
- (id)locationOperationForWorkspace:(id)arg1 nameTreeResolver:(id)arg2 withResultsBlock:(CDUnknownBlockType)arg3;
@property(readonly) NSString *path; // @synthesize path=_path;
@property(readonly) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(readonly) BOOL requiresMainThread;

@end

