//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFindDescriptor;

@interface IDEBatchFindCriteria : NSObject
{
    DVTFindDescriptor *_findDescriptor;
}

- (void).cxx_destruct;
@property(readonly) DVTFindDescriptor *findDescriptor; // @synthesize findDescriptor=_findDescriptor;
- (Class)findQueryClass;
- (unsigned long long)hash;
- (id)initWithFindDescriptor:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

