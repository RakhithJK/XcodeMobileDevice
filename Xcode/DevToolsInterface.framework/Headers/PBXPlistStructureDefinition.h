//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray, NSString;

@interface PBXPlistStructureDefinition : NSObject
{
    NSDictionary *_definition;
    NSString *_name;
    NSMutableArray *_fileExtensions;
    NSMutableArray *_fileNames;
}

+ (void)_loadDefinitionsFromPaths:(id)arg1 intoDictionary:(id)arg2;
+ (id)loadNewDefinitionWithContentsOfFile:(id)arg1;
+ (id)plistStructureDefinitionForFile:(id)arg1;
+ (id)plistStructureDefinitions;
+ (id)sortedPlistStructureDefinitionNames;
- (id)allowableValuesForElementDefinitionNamed:(id)arg1;
- (Class)classForElementDefinitionNamed:(id)arg1;
- (void)dealloc;
- (id)defaultValueForElementDefinitionNamed:(id)arg1;
- (id)defaultValueForKey:(id)arg1 inDictionaryElementDefinitionNamed:(id)arg2;
- (id)defaultValueObjectInArrayElementDefinitionNamed:(id)arg1;
- (id)elementDefinitionNameForPlist:(id)arg1 inPlistEditingContext:(id)arg2;
- (id)fileExtensions;
- (id)fileNames;
- (id)init;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isAllowableKey:(id)arg1 inDictionaryElementDefinitionNamed:(id)arg2;
- (id)name;
- (void)setStructureDefinitionDictionary:(id)arg1;
- (id)typeDictionaryForDictionaryElementsInElementDefinitionNamed:(id)arg1;
- (id)typeNameForArrayElementsInElementDefinitionNamed:(id)arg1;

@end

