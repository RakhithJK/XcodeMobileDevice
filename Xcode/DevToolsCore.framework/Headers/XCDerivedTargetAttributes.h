//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, PBXTarget, XCPropertyExpansionContext;

@interface XCDerivedTargetAttributes : NSObject
{
    PBXTarget *_target;
    NSString *_buildStateKey;
    NSString *_buildAction;
    NSString *_configurationName;
    NSString *_activeArchitecture;
    NSString *_projectOverridingSettings;
    XCPropertyExpansionContext *_expansionContext;
    NSString *_fullProductName;
    NSString *_builtProductsDir;
    NSString *_absPathForBuildProduct;
}

+ (id)keyForTargetBuildState:(id)arg1;
- (id)absolutePathForBuildProduct;
- (id)builtProductsDir;
- (void)dealloc;
- (id)description;
- (id)fullProductName;
- (id)initWithTarget:(id)arg1 targetBuildState:(id)arg2;

@end

