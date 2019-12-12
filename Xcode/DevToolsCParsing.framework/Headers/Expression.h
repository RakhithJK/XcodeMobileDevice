//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCParsing/ASTNode.h>

@class NSMutableArray, SourceLocation, Type;

@interface Expression : ASTNode
{
    Type *_type;
    NSMutableArray *_children;
    int _kind;
    Expression *_parent;
    SourceLocation *_location;
    SourceLocation *_semiLocation;
}

+ (void)initialize;
- (id)_highestMemberParent;
- (void)addChild:(id)arg1;
- (id)allSwitchLabelStatements;
- (id)childAfterLocation:(id)arg1;
- (id)childAtIndex:(long long)arg1;
- (id)childBeforeLocation:(id)arg1;
- (id)children;
- (void)common_finalization;
- (id)containingScope;
- (id)containingStatement;
- (id)containing_loop;
- (id)containing_loop_or_switch;
- (id)containing_switch;
- (BOOL)containsLocalDeclaration:(id)arg1;
- (id)control_entry;
- (id)control_exits;
- (id)control_predecessors;
- (id)control_successors;
- (void)dealloc;
- (BOOL)declaration:(id)arg1 hasReachingUsesOutside:(id)arg2;
- (id)default_control_predecessors_with_parent:(id)arg1;
- (id)default_control_successors_with_parent:(id)arg1;
- (id)description;
- (void)dumpAST;
- (void)dumpASTLevel:(unsigned long long)arg1;
- (id)expressionContainingLocation:(id)arg1;
- (int)expressionKind;
- (id)expressionParent;
- (void)finalize;
- (id)followingStatement;
- (BOOL)hasSideEffects;
- (id)init;
- (BOOL)isChildOf:(id)arg1;
- (BOOL)isChildOfAny:(id)arg1;
- (BOOL)isDef:(id)arg1;
- (BOOL)isDef:(id)arg1 isPartial:(char *)arg2;
- (BOOL)isLValue;
- (BOOL)isResultUnused;
- (BOOL)isStatement;
- (BOOL)isUse:(id)arg1;
- (BOOL)is_control_flow_interesting;
- (id)killed_defs;
- (id)location;
- (id)loopExitsIncludeBreak:(BOOL)arg1 includeContinue:(BOOL)arg2;
- (BOOL)maxHeight;
- (id)nontrivialParent;
- (long long)numberOfChildren;
- (id)overallChildren;
- (id)overallLocation;
- (id)parent;
- (id)parentList;
- (id)prettyPrint;
- (id)reaching_defs;
- (id)reaching_defs_internal_for:(id)arg1;
- (id)reaching_defs_of_decl:(id)arg1;
- (id)reaching_uses_for:(id)arg1;
- (id)referencesTo:(id)arg1;
- (id)searchString;
- (void)setExpressionKind:(int)arg1;
- (void)setLocation:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setSemiLocation:(id)arg1;
- (void)setType:(id)arg1;
- (id)shortDescription;
- (id)transitive_control_successors;
- (id)type;

@end
