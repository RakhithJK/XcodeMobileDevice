//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XDBase/XDUMLBehavioralFeature-Protocol.h>
#import <XDBase/XDUMLNamespace-Protocol.h>

@class NSArray, NSString;
@protocol XDUMLClass, XDUMLParameter, XDUMLType;

@protocol XDUMLOperation <XDUMLBehavioralFeature, XDUMLNamespace>
- (BOOL)isOrdered;
- (BOOL)isQuery;
- (BOOL)isUnique;
- (long long)lower;
- (id <XDUMLParameter>)newParameterWithName:(NSString *)arg1;
- (id <XDUMLParameter>)newReturnParameterWithType:(id <XDUMLType>)arg1;
- (NSArray *)ownedParameters;
- (id <XDUMLClass>)ownerClass;
- (NSArray *)raisedExceptions;
- (NSArray *)redefinedOperations;
- (void)setIsLeaf:(BOOL)arg1;
- (void)setIsQuery:(BOOL)arg1;
- (void)setOwnedParameters:(NSArray *)arg1;
- (id <XDUMLType>)type;
- (long long)upper;
@end

