//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XDBase/XDMappingCompilerCallback-Protocol.h>

@class NSDictionary, NSMutableArray, XDMappingModelManager;

@interface XDMappingCompilerSupport : NSObject <XDMappingCompilerCallback>
{
    XDMappingModelManager *_modelManager;
    NSMutableArray *_errorsAndWarnings;
    id _result;
    BOOL _hasErrors;
    NSDictionary *_options;
}

- (void)addErrorForElement:(id)arg1 prefix:(id)arg2 message:(id)arg3;
- (void)addWarningForElement:(id)arg1 prefix:(id)arg2 message:(id)arg3;
- (BOOL)compileSourcePath:(id)arg1 options:(id)arg2;
- (BOOL)continueGeneration;
- (void)dealloc;
- (id)errorsAndWarnings;
- (void)generateCompileResultForMappingModel:(id)arg1;
- (BOOL)hasErrors;
- (id)init;
- (void)printCompiledObject:(id)arg1;
- (id)printErrorsAndWarnings:(BOOL)arg1;
- (id)result;
- (float)targetVersion;

@end

