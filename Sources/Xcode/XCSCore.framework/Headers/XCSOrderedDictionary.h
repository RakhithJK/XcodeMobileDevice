//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableDictionary.h>

@class NSMutableArray;

@interface XCSOrderedDictionary : NSMutableDictionary
{
    NSMutableDictionary *_dictionary;
    NSMutableArray *_array;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *array; // @synthesize array=_array;
- (id)copy;
- (unsigned long long)count;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
@property(retain, nonatomic) NSMutableDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 forKey:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)keyAtIndex:(unsigned long long)arg1;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)reverseKeyEnumerator;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end

