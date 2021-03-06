//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSSet, NSString;

@interface IDERefactoringBuildSettings : NSObject
{
    int _status;
    NSDictionary *_headerMappings;
}

+ (id)dataModelFileSettings;
+ (id)fileInNoIndexables;
+ (id)nibFileSettings;
+ (id)noBuildSettingsFound;
+ (id)plistFileSettings;
- (void).cxx_destruct;
@property(readonly) BOOL alwaysSearchUserPaths;
@property(readonly) NSNumber *arcMode;
@property(readonly) NSArray *frameworkSearchPaths;
@property(readonly) NSDictionary *headerMappings; // @synthesize headerMappings=_headerMappings;
- (id)init;
@property(readonly) NSString *languageDialect;
- (id)pathForFileName:(id)arg1 includedByFiles:(id)arg2 usingQuotes:(BOOL)arg3;
@property(readonly) NSSet *plistFilePaths;
@property(readonly) NSArray *predefinedMacroNamesAndDefs;
@property(readonly) NSArray *preincludeFiles;
@property int status; // @synthesize status=_status;
@property(readonly) NSArray *systemIncludePaths;
@property(readonly) NSArray *undefinedMacroNames;
@property(readonly) NSArray *userIncludePaths;

@end

