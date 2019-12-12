//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCParsing/Expression.h>

#import <DevToolsCParsing/ScopeLookup-Protocol.h>

@class ASTNode, NSMutableArray;
@protocol ScopeLookup;

@interface DeclarationContainingStatement : Expression <ScopeLookup>
{
    NSMutableArray *_declarations;
    ASTNode<ScopeLookup> *_containingScope;
}

- (void)addDeclaration:(id)arg1 project:(id)arg2;
- (id)containingScope;
- (BOOL)containsLocalDeclaration:(id)arg1;
- (void)dealloc;
- (id)declarations;
- (id)findName:(id)arg1 nameKind:(int)arg2;
- (id)initWithContainingScope:(id)arg1;
- (id)lookupName:(id)arg1 nameKind:(int)arg2;
- (id)lookupNameRecursively:(id)arg1 nameKind:(int)arg2 upTo:(id)arg3;
- (void)setContainingScope:(id)arg1;
- (id)shortDescription;

@end

