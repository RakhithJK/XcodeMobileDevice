//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTDefaultPolicyCacheDeleteExtension.h>

@class DVTFilePath;

@interface IDEDerivedDataCacheDeleteExtension : DVTDefaultPolicyCacheDeleteExtension
{
    DVTFilePath *_derivedDataLocation;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithDerivedDataLocation:(id)arg1;
- (id)itemsWithError:(id *)arg1;

@end
