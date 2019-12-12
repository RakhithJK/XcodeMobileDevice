//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/PBXBuildSettingsDictionary.h>

@class NSMutableArray, NSMutableSet;

@interface XCBuildSettingsCompositeDictionary : PBXBuildSettingsDictionary
{
    NSMutableArray *_baseDictionaries;
    NSMutableSet *_settingNamesToRecache;
    BOOL _ignoreBaseDictChanges;
}

- (id)_buildSettings;
- (void)baseDictionaryChanged:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithArrayOfDictionaries:(id)arg1;
- (id)initWithDictionaries:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)removeBuildSettingForKeyPath:(id)arg1 conditionSet:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (void)setBuildSetting:(id)arg1 operation:(int)arg2 forKeyPath:(id)arg3 conditionSet:(id)arg4;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end

