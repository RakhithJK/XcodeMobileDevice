//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/PBXBuildSettingsDictionary.h>

@class XCPropertyConditionSet;

@interface XCConditionalBuildSettingsDictionary : PBXBuildSettingsDictionary
{
    XCPropertyConditionSet *_conditionSet;
}

- (void)_extractConditionalDictionaries;
- (id)archivedDictionaryRepresentation;
- (id)conditionSet;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithConditionSet:(id)arg1;
- (id)initWithDictionary:(id)arg1 conditionSet:(id)arg2;
- (id)initWithDictionaryNoCopy:(id)arg1;
- (BOOL)isConditional;
- (BOOL)matchesConditionSet:(id)arg1;

@end
