//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCParsing/Declaration.h>

@class PropertyAttributesInfo;

@interface PropertyDeclaration : Declaration
{
    PropertyAttributesInfo *_attributesInfo;
}

@property(retain) PropertyAttributesInfo *attributesInfo; // @synthesize attributesInfo=_attributesInfo;
- (id)defaultGetterName;
- (id)defaultSetterName;
- (id)getterName;
- (id)getterNameLocation;
- (BOOL)hasIvar;
- (id)initWithDeclName:(id)arg1 containingScope:(id)arg2;
- (BOOL)isReadOnly;
- (id)ivarName;
- (id)setterName;
- (id)setterNameLocation;

@end
