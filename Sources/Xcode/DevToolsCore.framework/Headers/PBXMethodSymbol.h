//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/PBXMemberSymbol.h>

#import <DevToolsCore/PBXSignatureSymbol-Protocol.h>

@class NSArray, NSString;

@interface PBXMethodSymbol : PBXMemberSymbol <PBXSignatureSymbol>
{
    NSString *_cachedInvocation;
    NSString *_cachedUniqueName;
    NSArray *_cachedParameters;
    int _completionType;
}

+ (BOOL)canRepresentSymbolType:(int)arg1;
- (id)_basicParametersStringUsingSelector:(SEL)arg1;
- (id)_cDeclarationString;
- (id)_cInvocationString;
- (id)_javaDeclarationString;
- (id)_javaInvocationStringIncludeTarget:(BOOL)arg1;
- (id)_objcDeclarationString;
- (id)_objcInvocationStringIncludeTarget:(BOOL)arg1;
- (id)_parametersStringWithFullClassNames:(BOOL)arg1;
- (id)codeCompletionInvocationString;
@property int completionType; // @synthesize completionType=_completionType;
- (void)dealloc;
- (id)declarationString;
- (BOOL)displayNameAllowsIndent;
- (id)displayNameIncludingClassInfo:(BOOL)arg1;
- (id)helpMarkerSymbolType;
- (id)helpMarkerSymbolValue;
- (id)invocationString;
- (id)invocationStringIncludeTarget:(BOOL)arg1;
- (BOOL)isClassMember;
- (BOOL)isConstructor;
- (BOOL)isDestructor;
- (BOOL)isInstanceMember;
- (BOOL)isOperator;
- (id)javaParameters;
- (id)parameters;
- (id)uniqueName;

@end

