//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface _DYNSKVCMutableCollectionPropertyInfo : NSObject
{
    Class _class;
    NSMapTable *_selectorBindingsMap;
    NSMapTable *_propertyBindingsMap;
}

+ (void)initialize;
+ (id)mutableCollectionPropertyInfoForClass:(Class)arg1;
- (id)_stringWithCapitalizedFirstLetter:(id)arg1;
- (id)bindingForProperty:(id)arg1;
- (id)bindingForSelector:(SEL)arg1;
- (void)dealloc;
- (void)dy_synthesizeMutableArrayProperty:(id)arg1 withInstanceVariable:(id)arg2;
- (void)dy_synthesizeMutableSetProperty:(id)arg1 withInstanceVariable:(id)arg2;
- (id)initWithClass:(Class)arg1;

@end

