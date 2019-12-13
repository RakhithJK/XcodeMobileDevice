//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSRegularExpression, NSSet, NSString;

@interface IDEMediaResourceVariantVariable : NSObject
{
    CDUnknownBlockType _searchValuesBlock;
    CDUnknownBlockType _displayStringForValueBlock;
    CDUnknownBlockType _matchesValueBlock;
    NSString *_displayName;
    long long _valueStartOffset;
    long long _valueEndOffset;
    NSSet *_validValues;
    NSRegularExpression *_expression;
}

+ (id)OSXImageScaleFactorVariantVariable;
+ (id)iOSHeightClassVariantVariable;
+ (id)iOSIdiomVariantVariable;
+ (id)iOSImageResolutionVariantVariable;
+ (id)iOSImageScaleFactorVariantVariable;
+ (id)iOSScreenWidthVariantVariable;
+ (id)iOSWidthClassVariantVariable;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)displayStringForValue:(id)arg1;
@property(retain, nonatomic) NSRegularExpression *expression; // @synthesize expression=_expression;
- (unsigned long long)hash;
- (id)initWithDisplayName:(id)arg1 pattern:(id)arg2 valueStartOffset:(long long)arg3 valueEndOffset:(long long)arg4 validValues:(id)arg5 searchValuesBlock:(CDUnknownBlockType)arg6 displayStringForValueBlock:(CDUnknownBlockType)arg7;
- (id)initWithDisplayName:(id)arg1 pattern:(id)arg2 valueStartOffset:(long long)arg3 valueEndOffset:(long long)arg4 validValues:(id)arg5 searchValuesBlock:(CDUnknownBlockType)arg6 displayStringForValueBlock:(CDUnknownBlockType)arg7 matchesValueBlock:(CDUnknownBlockType)arg8;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToVariable:(id)arg1;
- (id)searchValuesForValue:(id)arg1;
@property(retain, nonatomic) NSSet *validValues; // @synthesize validValues=_validValues;
@property(nonatomic) long long valueEndOffset; // @synthesize valueEndOffset=_valueEndOffset;
@property(nonatomic) long long valueStartOffset; // @synthesize valueStartOffset=_valueStartOffset;
- (BOOL)value:(id)arg1 matches:(id)arg2;

@end
