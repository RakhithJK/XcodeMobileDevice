//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableDictionary.h>

@class DTMutableOrderedSet;

@interface DTMutableOrderedDictionary : NSMutableDictionary
{
    DTMutableOrderedSet *set;
    CDStruct_f2932e27 keyCallbacks;
    CDStruct_b3b3fc87 objCallbacks;
}

+ (CDStruct_f2932e27)cocoaKeyCallBacks;
+ (CDStruct_b3b3fc87)cocoaValueCallBacks;
- (Class)classForCoder;
- (unsigned long long)count;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyCallbacks:(CDStruct_f2932e27)arg1 andValueCallbacks:(CDStruct_b3b3fc87)arg2;
- (id)initWithObjects:(id)arg1 forKeys:(id)arg2;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end

