//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/PBXCCScope.h>

@class PBXMemberContainerSymbol;

@interface PBXCCMethodScope : PBXCCScope
{
    PBXMemberContainerSymbol *_containerSymbol;
    BOOL _isInstance;
}

+ (id)methodScopeWithSymbol:(id)arg1 isInstanceMethod:(BOOL)arg2;
- (void)addSymbol:(id)arg1;
- (void)addSymbolsToArray:(id)arg1;
- (id)containerSymbol;
- (void)dealloc;
- (id)description;
- (id)getSymbolWithName:(id)arg1;
- (id)initWithSymbol:(id)arg1 isInstanceMethod:(BOOL)arg2;
- (BOOL)isInstance;

@end

