//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableString, NSString, NSTimer;

@interface DTTypeCompletionHandler : NSObject
{
    BOOL delegateImplementsTypeCompletionStringForObject;
    BOOL delegateImplementsCompletionWillExpire;
    BOOL delegateImplementsCompletionDisplayShouldExpire;
    NSMutableString *completionString;
    NSTimer *completionWillExpireTimer;
    NSTimer *completionDisplayShouldExpireTimer;
    NSString *runLoopMode;
    id delegate;
}

+ (id)typeCompletionHandlerWithDelegate:(id)arg1;
+ (id)typeCompletionHandlerWithDelegate:(id)arg1 runLoopMode:(id)arg2;
- (void)clearAndRenewCompletionDisplayShouldExpireTimer;
- (void)clearAndRenewCompletionString;
- (void)clearAndRenewCompletionWillExpireTimer;
- (void)clearCompletionDisplayShouldExpireTimer;
- (void)clearCompletionWillExpireTimer;
- (id)currentTypeCompletionString;
- (void)dealloc;
- (id)delegate;
- (void)expireCompletion:(id)arg1;
- (void)expireCompletionDisplay:(id)arg1;
- (id)initWithDelegate:(id)arg1 runLoopMode:(id)arg2;
- (void)invalidate;
- (id)processTypeSelectionInput:(id)arg1 objects:(id)arg2 index:(unsigned long long *)arg3;
- (id)processTypeSelectionInput:(id)arg1 objects:(id)arg2 index:(unsigned long long *)arg3 startingAtObject:(id)arg4;
- (void)setDelegate:(id)arg1;

@end

