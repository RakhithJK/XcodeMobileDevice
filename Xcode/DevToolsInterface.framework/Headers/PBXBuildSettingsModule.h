//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXProjectModule.h>

@class NSMutableArray, PBXBuildSettingsDictionary, PBXViewListView;

@interface PBXBuildSettingsModule : PBXProjectModule
{
    PBXViewListView *_aspectViewList;
    PBXBuildSettingsDictionary *_buildSettings;
    NSMutableArray *_aspectModules;
    struct {
        unsigned int observingBuildSettings:1;
        unsigned int RESERVED:31;
    } _bsmFlags;
}

- (id)aspectModules;
- (id)buildSettings;
- (void)dealloc;
- (id)initWithBuildSettings:(id)arg1;
- (void)moduleViewWasInstalled:(id)arg1;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)noteNeedsUpdate:(id)arg1;
- (void)update;
- (void)viewDidLoad;

@end

