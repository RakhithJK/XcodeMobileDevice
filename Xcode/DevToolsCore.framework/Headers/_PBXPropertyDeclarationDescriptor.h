//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, PBXRecordVector;

@interface _PBXPropertyDeclarationDescriptor : NSObject
{
    PBXRecordVector *_vector;
    unsigned long long _declarationRow;
    NSString *_setterAttribute;
    NSString *_getterAttribute;
    unsigned long long _setterAttributeLineNumber;
    unsigned long long _getterAttributeLineNumber;
    BOOL _isReadOnly;
}

- (void)dealloc;
@property unsigned long long declarationRow; // @synthesize declarationRow=_declarationRow;
- (id)getterAttribute;
@property unsigned long long getterAttributeLineNumber; // @synthesize getterAttributeLineNumber=_getterAttributeLineNumber;
- (id)init;
@property BOOL isReadOnly; // @synthesize isReadOnly=_isReadOnly;
- (void)setGetterAttribute:(id)arg1;
- (void)setSetterAttribute:(id)arg1;
@property unsigned long long setterAttributeLineNumber; // @synthesize setterAttributeLineNumber=_setterAttributeLineNumber;
- (void)setVector:(id)arg1;
- (id)setterAttribute;
- (id)vector;

@end

