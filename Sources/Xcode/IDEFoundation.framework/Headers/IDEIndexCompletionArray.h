//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableArray.h>

@interface IDEIndexCompletionArray : NSMutableArray
{
    NSMutableArray *_array;
    void *_completionResults;
}

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)initWithCodeCompleteResults:(void *)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)removeLastObject;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;

@end
