//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface DTStackBacktrace : NSObject
{
    NSArray *_returnAddresses;
    NSString *_stringRep;
}

+ (id)_callStackReturnAddressesExcludingTwoFrames;
+ (id)currentStackBacktrace;
+ (id)stackBacktraceWithCallStackReturnAddresses:(id)arg1;
- (id)_frameStringForAddress:(unsigned long long)arg1 symbolicatorPtr:(struct _CSTypeRef)arg2 symbolPtr:(struct _CSTypeRef)arg3;
- (void)dealloc;
- (id)init;
- (id)initWithCallStackReturnAddresses:(id)arg1;
- (id)stringRepresentation;

@end

