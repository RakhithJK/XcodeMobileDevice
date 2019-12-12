//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/XCSpecification.h>

@class NSArray, NSDictionary, NSSet, XCPropertyDictionary;

@interface XCPropertyDomainSpecification : XCSpecification
{
    NSDictionary *_buildOptions;
    NSArray *_orderedBuildOptions;
    NSArray *_optionNamesForCommandLine;
    NSArray *_buildOptionCategories;
    NSSet *_buildOptionConditionFlavors;
    XCPropertyDomainSpecification *_specForUserInterface;
    NSDictionary *_flattenedBuildOptions;
    NSArray *_flattenedOrderedBuildOptions;
    NSArray *_flattenedCommonBuildOptions;
    NSArray *_flattenedOptionNamesForCommandLine;
    NSArray *_flattenedOptionCategories;
    XCPropertyDictionary *_flattenedDefaultValues;
}

+ (id)allRegisteredPropertyDomainsInSpecificationDomain:(id)arg1;
+ (id)dictionaryOfallRegisteredPropertyDomainsInSpecificationDomain:(id)arg1;
+ (id)localizedSpecificationTypeName;
+ (id)propertyDomainForIdentifier:(id)arg1 inSpecificationDomain:(id)arg2;
+ (void)registerSpecificationOrProxy:(id)arg1;
+ (id)specificationRegistryName;
+ (id)specificationType;
+ (Class)specificationTypeBaseClass;
+ (id)specificationTypePathExtensions;
- (id)_expandedValueForCommandLineBuildOptionNamed:(id)arg1 inBuildContext:(id)arg2;
- (id)buildOptionCategories;
- (id)buildOptionConditionFlavors;
- (id)buildOptionNamed:(id)arg1;
- (id)buildOptions;
- (id)commandLineForAutogeneratedOptionsForKey:(id)arg1 inTargetBuildContext:(id)arg2;
- (void)dealloc;
- (id)defaultValuesForAllOptions;
- (id)flattenedOptionCategories;
- (id)initWithPropertyListDictionary:(id)arg1 inDomain:(id)arg2;
- (id)namesOfBuildOptionsForCommandLine;
- (id)namesOfFlattenedOptionsForCommandLine;
- (id)orderedBuildOptions;
- (id)specificationToShowInUserInterface;

@end

