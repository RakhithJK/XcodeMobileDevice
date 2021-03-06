//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsCore/NSCopying-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSThread, XCMutablePropertyConditionSet, XCPropertyDictionary;

@interface XCPropertyExpansionContext : NSObject <NSCopying>
{
    NSMutableArray *_propertyDictionaries;
    unsigned long long _propertyDictStartIndices[12];
    XCPropertyDictionary *_variables;
    NSMutableDictionary *_propNamesToPropValuesCache;
    NSMutableDictionary *_stringsToPropValuesCache;
    XCMutablePropertyConditionSet *_conditionSet;
    BOOL _updateConditionalDicts;
    BOOL _preserveUnresolvedRefs;
    NSThread *_accessorThread;
    NSString *_associatedConfigName;
}

- (id)_propertyDictionariesAtTierNoUpdate:(int)arg1;
- (void)_updateConditionalPropertyDictionariesIfNecessary;
- (void)addCondition:(id)arg1;
- (void)addConditionString:(id)arg1 forFlavor:(id)arg2;
- (id)allPropertyNamesInAllDictionaries;
- (void)appendStringOrStringListValue:(id)arg1 toDynamicSetting:(id)arg2;
- (void)appendValue:(id)arg1 toVariable:(id)arg2;
- (id)associatedConfigurationName;
- (id)conditionSet;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dynamicProperties;
- (id)expandedValueForProperty:(id)arg1;
- (id)expandedValueForString:(id)arg1;
- (id)init;
- (id)localizedDescriptionsOfDefinitionsOfPropertyNamed:(id)arg1;
- (id)longDescription;
- (id)lookupValueForProperty:(id)arg1 startingAtLevel:(unsigned long long)arg2 levelFound:(unsigned long long *)arg3;
- (void)popDefaultsDictionary;
- (void)popEnvironmentDictionary;
- (void)popOverridesDictionary;
- (void)popProductDictionary;
- (void)popProjectDefaultsDictionary;
- (void)popPropertyDictionary;
- (void)popPropertyDictionaryAtTier:(int)arg1;
- (void)popSDKDictionary;
- (void)popSettingsDictionary;
- (void)prependStringOrStringListValue:(id)arg1 toDynamicSetting:(id)arg2;
- (void)prependValue:(id)arg1 toVariable:(id)arg2;
- (BOOL)preservesUnresolvedExpansionReferences;
- (id)propertyDictionaries;
- (id)propertyDictionariesAtTier:(int)arg1;
- (void)pushDefaultsDictionary:(id)arg1;
- (void)pushEnvironmentDictionary:(id)arg1;
- (void)pushOverridesDictionary:(id)arg1;
- (void)pushProductDictionary:(id)arg1;
- (void)pushProjectDefaultsDictionary:(id)arg1;
- (void)pushPropertyDictionaries:(id)arg1;
- (void)pushPropertyDictionaries:(id)arg1 atTier:(int)arg2;
- (void)pushPropertyDictionary:(id)arg1 atTier:(int)arg2;
- (void)pushSDKDictionary:(id)arg1;
- (void)pushSettingsDictionary:(id)arg1;
- (void)removeAllConditions;
- (void)removeAllDynamicSettings;
- (void)removeConditionFlavor:(id)arg1;
- (void)removeDynamicSetting:(id)arg1;
- (void)removePropertyDictionariesAtTier:(int)arg1;
- (void)setAssociatedConfigurationName:(id)arg1;
- (void)setConditionSet:(id)arg1;
- (void)setPermittedAccessorThread:(id)arg1;
- (void)setPreservesUnresolvedExpansionReferences:(BOOL)arg1;
- (void)setPropertyDictionariesFromNSDictionariesInArray:(id)arg1 atTier:(int)arg2;
- (void)setStringValue:(id)arg1 forDynamicSetting:(id)arg2;
- (void)setValue:(id)arg1 forProperty:(id)arg2;

@end

