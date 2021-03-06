//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTPlatform, NSArray, NSMutableDictionary, NSString;

@interface IDETemplateSection : NSObject
{
    NSMutableDictionary *_templateCategoriesByName;
    NSString *_explicitName;
    BOOL _showsCategoriesAsChildren;
    NSArray *_categories;
    DVTPlatform *_platform;
}

+ (id)crossPlatformSectionName;
+ (id)keyPathsForValuesAffectingWillChangeDeviceSoftwareVersion;
- (void).cxx_destruct;
- (void)addTemplate:(id)arg1;
@property(readonly) NSArray *categories; // @synthesize categories=_categories;
- (id)categoryWithName:(id)arg1;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithPlatform:(id)arg1;
@property(readonly) NSString *name;
@property(retain) DVTPlatform *platform; // @synthesize platform=_platform;
@property(readonly) NSString *sectionIdentifier;
@property BOOL showsCategoriesAsChildren; // @synthesize showsCategoriesAsChildren=_showsCategoriesAsChildren;
- (void)sortAllCategories;
@property(readonly) NSArray *templates;

@end

