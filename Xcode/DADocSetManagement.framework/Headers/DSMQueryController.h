//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DSMQueryController : NSObject
{
}

+ (id)sharedQueryController;
+ (id)tokenQueryDictionaryFromQuery:(id)arg1;
- (void)cancelQuery:(id)arg1 delegate:(id)arg2 contextInfo:(void *)arg3;
- (void)runAsynchronousAPIQuery:(id)arg1 delegate:(id)arg2 contextInfo:(void *)arg3;
- (void)runAsynchronousFullTextQuery:(id)arg1 delegate:(id)arg2 contextInfo:(void *)arg3;
- (id)runSynchronousAPIQuery:(id)arg1 returnManagedObjects:(BOOL)arg2;
- (id)runSynchronousFullTextQuery:(id)arg1 maximumRelevance:(double *)arg2;
- (id)runSynchronousTitleQuery:(id)arg1;

@end

