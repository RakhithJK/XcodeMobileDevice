//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DSADocSet, NSManagedObjectContext, NSMutableDictionary, NSNumber;

@interface DSATokenIndex : NSObject
{
    DSADocSet *_docSet;
    NSManagedObjectContext *_moc;
    BOOL _readOnly;
    NSNumber *_tokensHaveParents;
    unsigned long long _maxSortOrder;
    NSMutableDictionary *_fullNameLookup;
    NSMutableDictionary *_languageMOs;
    NSMutableDictionary *_tokenTypeMOs;
    NSMutableDictionary *_distributionMOs;
    NSMutableDictionary *_containerMOs;
    NSMutableDictionary *_headerMOs;
}

+ (id)idInformationForIDString:(id)arg1;
+ (id)idInformationForIDXMLElement:(id)arg1;
- (id)_managedObjectWithName:(id)arg1 forEntity:(id)arg2 withKeyName:(id)arg3 creatingIfMissing:(BOOL)arg4 inMutableDictionary:(id *)arg5;
- (id)_mutableDictionaryForEntity:(id)arg1 forKey:(id)arg2;
- (id)_predicateForLanguageCriterion:(id)arg1;
- (void)_resetTableForEntityNamed:(id)arg1;
- (id)_tokensMatchingPredicate:(id)arg1 withSortDescriptors:(id)arg2 returningType:(unsigned long long)arg3 error:(id *)arg4;
- (unsigned long long)countTokensMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)createRelatedTokenGroupNamed:(id)arg1 withTokens:(id)arg2;
- (id)createTokenWithIDInformation:(id)arg1;
- (void)dealloc;
- (BOOL)deleteTokenReferences;
- (id)docSet;
- (id)idInformationForIDString:(id)arg1;
- (id)idInformationForIDXMLElement:(id)arg1;
- (id)initWithDocSet:(id)arg1;
- (long long)languageCount;
- (id)lowercaseUTF8ByteForString:(id)arg1;
- (id)managedObjectContext;
- (id)managedObjectForContainer:(id)arg1 creatingIfMissing:(BOOL)arg2;
- (id)managedObjectForDistribution:(id)arg1 version:(id)arg2 architecture:(int)arg3 creatingIfMissing:(BOOL)arg4;
- (id)managedObjectForFilePath:(id)arg1 creatingIfMissing:(BOOL)arg2;
- (id)managedObjectForHeader:(id)arg1 framework:(id)arg2 creatingIfMissing:(BOOL)arg3;
- (id)managedObjectForLanguage:(id)arg1 creatingIfMissing:(BOOL)arg2;
- (id)managedObjectForTokenType:(id)arg1 creatingIfMissing:(BOOL)arg2;
- (id)managedObjectsForContainer;
- (id)managedObjectsForLanguage;
- (id)managedObjectsForTokenType;
- (unsigned long long)maxSortOrder;
- (id)nodeWithID:(long long)arg1;
- (id)predicateForQuery:(id)arg1;
- (BOOL)readOnly;
- (BOOL)saveChanges:(id *)arg1;
- (void)setManagedObjectContext:(id)arg1;
- (void)setReadOnly:(BOOL)arg1;
- (id)tokenIDsMatchingPredicate:(id)arg1 withSortDescriptors:(id)arg2 error:(id *)arg3;
- (BOOL)tokensHaveParents;
- (id)tokensMatchingCriteria:(id)arg1 error:(id *)arg2;
- (id)tokensMatchingPredicate:(id)arg1 withSortDescriptors:(id)arg2 error:(id *)arg3;

@end

