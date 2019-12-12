//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDictionary.h>

@class NSBundle, NSString;

@interface TSPropertyListDictionary : NSDictionary
{
    NSDictionary *_dict;
    NSString *_localizedDesc;
    NSBundle *_bundle;
    NSDictionary *_localizationDict;
}

+ (id)propertyListDictionaryWithContentsOfFile:(id)arg1 encoding:(unsigned long long)arg2;
+ (id)propertyListDictionaryWithContentsOfString:(id)arg1;
+ (id)propertyListDictionaryWithDictionary:(id)arg1;
- (id)_localizedTypeNameForClass:(Class)arg1;
- (id)arrayForKey:(id)arg1;
- (id)arrayOrNilForKey:(id)arg1;
- (id)arrayOrObjectOrNilForKey:(id)arg1;
- (id)bundle;
- (unsigned long long)count;
- (id)dataForKey:(id)arg1;
- (id)dataOrNilForKey:(id)arg1;
- (void)dealloc;
- (id)dictionaryForKey:(id)arg1;
- (id)dictionaryOrNilForKey:(id)arg1;
- (id)init;
- (id)initWithContentsOfFile:(id)arg1 encoding:(unsigned long long)arg2;
- (id)initWithContentsOfString:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)keyEnumerator;
- (id)localizationDictionary;
- (id)localizedMessageDescription;
- (id)objectForKey:(id)arg1;
- (id)objectOrNilForKey:(id)arg1;
- (void)setBundle:(id)arg1;
- (void)setLocalizationDictionary:(id)arg1;
- (void)setLocalizedMessageDescription:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)stringOrNilForKey:(id)arg1;

@end

