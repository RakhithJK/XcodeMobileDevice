//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSValueTransformer.h>

@interface DVTObjectLiteralValueTransformer : NSValueTransformer
{
}

+ (BOOL)allowsReverseTransformation;
+ (id)registeredValueTransformers;
+ (unsigned long long)transformedObjectLiteralType;
+ (Class)transformedValueClass;
+ (Class)valueTransformerClassForLiteralString:(id)arg1;
+ (id)valueTransformerForLiteralString:(id)arg1;
+ (id)valueTransformerForObjectLiteral:(id)arg1;
- (id)reverseTransformedValue:(id)arg1;
- (id)reverseTransformedValue:(id)arg1 context:(id)arg2;
- (id)stringByEscapingString:(id)arg1;
- (id)stringByUnescapingString:(id)arg1;
- (id)transformedValue:(id)arg1;
- (id)transformedValue:(id)arg1 context:(id)arg2;

@end

