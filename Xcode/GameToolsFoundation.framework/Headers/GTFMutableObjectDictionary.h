//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableDictionary.h>

@class NSMapTable;

@interface GTFMutableObjectDictionary : NSMutableDictionary
{
    NSMapTable *_table;
    BOOL _strong;
}

+ (id)dictionary;
+ (id)dictionaryWithCapacity:(unsigned long long)arg1;
+ (id)dictionaryWithObjects:(id)arg1 forKeys:(id)arg2;
+ (id)weakKeyDictionary;
+ (id)weakKeyDictionaryWithCapacity:(unsigned long long)arg1;
+ (id)weakKeyDictionaryWithObjects:(id)arg1 forKeys:(id)arg2;
- (void).cxx_destruct;
- (id)_strongDictionaryMapTableWithCapacity:(unsigned long long)arg1;
- (id)_weakDictionaryMapTableWithCapacity:(unsigned long long)arg1;
- (id)allKeys;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWeak;
- (id)initWeakTableWithCapacity:(unsigned long long)arg1;
- (id)initWeakTableWithObjects:(id)arg1 forKeys:(id)arg2;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjects:(id)arg1 forKeys:(id)arg2;
@property(readonly, nonatomic, getter=isStrong) BOOL strong; // @synthesize strong=_strong;
- (id)keyEnumerator;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end

