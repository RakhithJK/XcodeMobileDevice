//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString, PBXGlobalID;

@interface XCTargetHeadermapCreationInfo : NSObject
{
    NSString *_requestedConfigName;
    NSString *_effectiveConfigName;
    BOOL _ignoresProductType;
    BOOL _includesNonPublicNonPrivateHeaders;
    PBXGlobalID *_targetGlobalID;
    NSString *_productName;
    NSArray *_headerPaths;
}

- (void)dealloc;
- (id)effectiveConfigurationName;
- (id)headerPaths;
- (BOOL)ignoresProductType;
- (BOOL)includesNonPublicNonPrivateHeaders;
- (id)initForTarget:(id)arg1 configurationName:(id)arg2 ignoreProductType:(BOOL)arg3 includeNonPublicNonPrivateHeaders:(BOOL)arg4;
- (id)productName;
- (id)requestedConfigurationName;
- (id)targetGlobalID;

@end
