//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface DVTProductLocationResult : NSObject
{
    NSArray *_locatedProducts;
    NSArray *_locationErrors;
}

- (void).cxx_destruct;
- (id)initWithLocatedProducts:(id)arg1 locationErrors:(id)arg2;
@property(readonly) NSArray *locatedProducts; // @synthesize locatedProducts=_locatedProducts;
@property(readonly) NSArray *locationErrors; // @synthesize locationErrors=_locationErrors;

@end

