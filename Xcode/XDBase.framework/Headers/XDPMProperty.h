//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XDBase/XDUMLPropertyImp.h>

@class NSData, NSMutableDictionary;

@interface XDPMProperty : XDUMLPropertyImp
{
    NSMutableDictionary *_initializationPendingKeys;
    NSData *_versionHash;
}

+ (id)keyPathsForValuesAffectingIsSpotlightIndexed;
+ (id)keyPathsForValuesAffectingIsStoredInTruthFile;
- (id)addKeysToDictionary:(id)arg1;
- (id)code_capitalizedPropertyName;
- (id)code_propertyName;
- (void)dealloc;
- (void)didChangeValueForKey:(id)arg1;
- (id)elementID;
- (id)entity;
- (void)generateErrorsAndWarningsWithCallback:(id)arg1;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initializationPendingKeys;
- (BOOL)isEditableForOptionalFlag;
- (BOOL)isEditableForTransientFlag;
- (BOOL)isIndexed;
- (BOOL)isOptional;
- (BOOL)isSpotlightIndexed;
- (BOOL)isStoredInTruthFile;
- (BOOL)isTransient;
- (id)possibleValuesForSharedKeyOne;
- (id)propertyDifferencesRelativeToProperty:(id)arg1 versionHashDiffsOnly:(BOOL)arg2;
- (id)propertyKind;
- (void)setElementID:(id)arg1;
- (void)setIsIndexed:(BOOL)arg1;
- (void)setIsOptional:(BOOL)arg1;
- (void)setIsSpotlightIndexed:(BOOL)arg1;
- (void)setIsStoredInTruthFile:(BOOL)arg1;
- (void)setIsTransient:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setSharedKeyOne:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setVersionHashModifier:(id)arg1;
- (id)sharedKeyOne;
- (id)undoManager;
- (id)userInfo;
- (BOOL)validateName:(id *)arg1 error:(id *)arg2;
- (id)versionHash;
- (id)versionHashModifier;

@end

