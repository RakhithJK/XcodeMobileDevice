//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DTExtensionAccessStrategy : NSObject
{
}

+ (id)faultPrimitiveKeyValueCodingAccessStrategy;
+ (id)faultReplacingKeyValueCodingAccessStrategy;
+ (id)keyValueCodingAccessStrategy;
+ (id)primitiveKeyValueCodingAccessStrategy;
+ (id)superclassKeyValueCodingAccessStrategy;
- (id)extensionAfterFiringPotentialFault:(id)arg1;
- (BOOL)shouldReplaceStrategyForFaultState:(BOOL)arg1;
- (id)valueForKey:(id)arg1 ofExtension:(id)arg2 withDescription:(id)arg3;

@end

