//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/PBXCCScope.h>

@class NSArray, NSMutableDictionary, NSString, PBXProjectIndex;

@interface XCJavaCCImportsScope : PBXCCScope
{
    PBXProjectIndex *_projIndex;
    NSString *_package;
    NSArray *_imports;
    NSMutableDictionary *_importsDict;
}

+ (id)importsScopeWithIndex:(id)arg1 packageName:(id)arg2 imports:(id)arg3;
- (void)addClassImport:(id)arg1;
- (void)addClassImportWithName:(id)arg1;
- (void)addDefaultPackageSymbols;
- (void)addSymbol:(id)arg1;
- (void)addSymbolsFromPackageDot:(id)arg1;
- (void)addSymbolsToArray:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)getSymbolWithName:(id)arg1;
- (id)importsDict;
- (id)initWithIndex:(id)arg1 packageName:(id)arg2 imports:(id)arg3;

@end

