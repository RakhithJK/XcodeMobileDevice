//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCParsing/Expression.h>

@class SourceLocation;

@interface FunctionCallExpression : Expression
{
    Expression *_functionExpr;
    SourceLocation *_lparen;
    SourceLocation *_rparen;
}

- (void)dealloc;
- (id)expressionContainingLocation:(id)arg1;
- (id)functionExpr;
- (id)init;
- (id)leftParenLocation;
- (id)overallChildren;
- (id)overallLocation;
- (id)prettyPrint;
- (id)rightParenLocation;
- (id)searchString;
- (void)setFunctionExpr:(id)arg1;
- (void)setLeftParenLoc:(id)arg1;
- (void)setRightParenLoc:(id)arg1;
- (id)shortDescription;

@end

