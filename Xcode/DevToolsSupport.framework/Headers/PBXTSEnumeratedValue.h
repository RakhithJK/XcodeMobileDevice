//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface PBXTSEnumeratedValue : NSObject
{
    long long _intValue;
    NSString *_shortDescription;
    NSString *_fullDescription;
    NSString *_identifier;
}

+ (id)enumeratedValueForIntValue:(int)arg1;
+ (id)enumeration;
+ (void)initializeEnumeration:(id)arg1;
- (long long)compare:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)enumeration;
- (id)fullDescription;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIntValue:(int)arg1 shortDescription:(id)arg2 fullDescription:(id)arg3;
- (long long)intValue;
- (BOOL)isEqual:(id)arg1;
- (id)numberValue;
- (id)shortDescription;

@end
