//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/PBXProject.h>

@class NSMutableArray, NSMutableDictionary, XCProductTypeSpecification;

@interface PBXStandaloneTarget : PBXProject
{
    XCProductTypeSpecification *_productType;
    NSMutableDictionary *_buildProperties;
    NSMutableArray *_buildRules;
}

+ (id)archivableAttributes;
+ (id)archivableRelationships;
- (id)_productType;
- (void)_setProductType:(id)arg1;
- (void)awakeFromPListUnarchiver:(id)arg1;
- (void)dealloc;
- (id)init;

@end

