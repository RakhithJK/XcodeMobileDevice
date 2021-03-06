//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, XDProject;

@interface XDModelManager : NSObject
{
    XDProject *_xdproject;
    NSMutableDictionary *_models;
    NSString *_name;
    NSMutableArray *_modelReferences;
}

+ (id)managerTypeString;
+ (Class)modelClassType;
+ (id)sharedInstanceInProject:(id)arg1;
+ (id)sharedModelInProject:(id)arg1;
- (void)addModel:(id)arg1;
- (void)addModelReference:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 inProject:(id)arg2;
- (id)modelForName:(id)arg1;
- (id)modelReferenceForName:(id)arg1;
- (id)modelReferences;
- (id)models;
- (id)name;
- (id)newModelWithName:(id)arg1;
- (void)removeModel:(id)arg1;
- (void)removeModelReference:(id)arg1;
- (void)setName:(id)arg1;
- (id)xdproject;

@end

