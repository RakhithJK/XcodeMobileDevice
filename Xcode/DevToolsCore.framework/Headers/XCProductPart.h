//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, XCProductTypeSpecification;
@protocol XCProductPartOwners;

@interface XCProductPart : NSObject
{
    NSString *_identifier;
    NSString *_productTypeIdentifier;
    NSString *_superpartIdentifier;
    NSString *_name;
    NSMutableDictionary *_properties;
    XCProductTypeSpecification *_productType;
    XCProductPart *_superpart;
    id <XCProductPartOwners> _owner;
    XCProductPart *_templatePart;
}

- (void)computeDependenciesInTargetBuildContext:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)identifier;
- (id)init;
- (id)initAsInstanceOfTemplateProductPart:(id)arg1;
- (id)initWithIdentifier:(id)arg1 productTypeIdentifier:(id)arg2 superpartIdentifier:(id)arg3 name:(id)arg4;
- (id)initWithPropertyListDictionary:(id)arg1;
- (id)name;
- (id)owner;
- (id)productType;
- (id)properties;
- (id)relativePath;
- (void)setName:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setSuperpartIdentifier:(id)arg1;
- (void)setTemplatePart:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)superpart;
- (id)templatePart;
- (id)valueForKey:(id)arg1;

@end

