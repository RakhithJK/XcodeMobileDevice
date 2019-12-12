//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Declaration, NSMutableArray, NSMutableDictionary, NSMutableSet, Type;

@interface GlobalProjectData : NSObject
{
    Declaration *_globalScope;
    NSMutableArray *_allFunctionBodies;
    NSMutableDictionary *_allInstanceMethods;
    NSMutableDictionary *_allClassMethods;
    NSMutableSet *_allClassesSet;
    NSMutableArray *_allClassesList;
    NSMutableArray *_protocols;
    NSMutableDictionary *_declsInFileDict;
    NSMutableDictionary *_duplicateDeclarations;
    Type *_unsignedType;
    Type *_intType;
    Type *_voidType;
    Type *_longType;
    Type *_unsignedLongType;
    Type *_classType;
    Declaration *_classDecl;
    Declaration *_classStructDecl;
}

- (id)_propertyForMessageName:(id)arg1 inContainer:(id)arg2;
- (void)addClass:(id)arg1;
- (void)addFunctionBody:(id)arg1;
- (void)addProtocol:(id)arg1;
- (id)allClassMethods;
- (id)allClasses;
- (id)allClassesWithInterface;
- (id)allFunctionBodies;
- (id)allInstanceMethods;
- (id)bodyForFunctionDecl:(id)arg1;
- (id)classType;
- (void)dealloc;
- (id)duplicateDeclarations;
- (id)expressionAtLocation:(id)arg1;
- (id)expressionAtLocation:(id)arg1 inDecls:(id)arg2;
- (id)expressionOrDeclAtLocation:(id)arg1 inTree:(id)arg2;
- (void)finalize;
- (id)findProtocol:(id)arg1;
- (id)globalScope;
- (id)init;
- (void)initializeClassType;
- (id)intType;
- (id)longType;
- (id)lookupObjcMethodWithReceiverType:(id)arg1 messageName:(id)arg2;
- (id)methodForExpression:(id)arg1;
- (id)nodeAtLocation:(id)arg1;
- (id)nodeInBodyOfDeclaration:(id)arg1 atLocation:(id)arg2;
- (id)nodeInDeclaration:(id)arg1 atLocation:(id)arg2;
- (id)nodeRangeAtLocation:(id)arg1;
- (id)propertyForClass:(id)arg1 messageName:(id)arg2;
- (id)propertyForExpression:(id)arg1;
- (id)protocols;
- (void)releaseCompileResources;
- (void)setupCompileResources;
- (id)unsignedLongType;
- (id)unsignedType;
- (id)voidType;

@end
