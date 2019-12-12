//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JavaKit/JKJavaMember.h>

@class JKJavaType, NSArray;

@interface JKJavaMethod : JKJavaMember
{
    JKJavaType *_returnType;
    NSArray *_argumentTypes;
}

+ (BOOL)_parseMethodSignature:(id)arg1 methodReturnType:(id *)arg2 methodArguments:(id *)arg3;
+ (BOOL)parseMethodSignature:(id)arg1 methodReturnType:(id *)arg2 methodArguments:(id *)arg3;
- (id)argumentTypeAtIndex:(unsigned long long)arg1;
- (id)arguments;
- (void)dealloc;
- (id)description;
- (id)exceptions;
- (id)initWithName:(id)arg1 signature:(id)arg2 accessMask:(unsigned long long)arg3 attributes:(id)arg4;
- (BOOL)isAbstract;
- (BOOL)isNative;
- (BOOL)isSynchronized;
- (unsigned long long)numberOfArguments;
- (id)returnType;
- (id)shortDescription;

@end
