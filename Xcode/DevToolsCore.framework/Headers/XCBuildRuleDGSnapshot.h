//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString, PBXFileType, XCCompilerSpecification;

@interface XCBuildRuleDGSnapshot : NSObject
{
    NSString *_name;
    PBXFileType *_fileType;
    NSString *_filePatterns;
    XCCompilerSpecification *_compilerSpec;
    NSString *_script;
    NSArray *_outputFilePaths;
}

+ (id)compilerSpecIsScriptProxy;
+ (id)fileTypeIsPatternProxy;
+ (void)initialize;
- (BOOL)_appliesToFileType:(id)arg1 architecture:(id)arg2;
- (BOOL)_filePath:(const char *)arg1 matchesPatternInPatternString:(id)arg2;
- (BOOL)appliesToReference:(id)arg1 architecture:(id)arg2;
- (id)compilerSpec;
- (id)compilerSpecForIdentifier:(id)arg1;
- (id)computeDependenciesForBuildFileReference:(id)arg1 inTargetBuildContext:(id)arg2;
- (id)computeDependenciesForFilePath:(id)arg1 ofType:(id)arg2 forBuildFileReference:(id)arg3 withOutputDirectory:(id)arg4 additionalProperties:(id)arg5 inTargetBuildContext:(id)arg6;
- (id)computeDependenciesForFilePath:(id)arg1 ofType:(id)arg2 forBuildFileReference:(id)arg3 withOutputDirectory:(id)arg4 inTargetBuildContext:(id)arg5;
- (void)dealloc;
- (id)description;
- (id)filePatterns;
- (id)fileType;
- (id)fileTypeForIdentifier:(id)arg1;
- (id)init;
- (id)initWithInformationFromBuildRule:(id)arg1 platform:(id)arg2;
- (id)name;
- (id)outputFiles;
- (void)printForDebugging;
- (id)script;

@end

