//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXPlistEditorModule.h>

@class PBXTarget;

@interface PBXInfoPlistExpertSettingsEditorModule : PBXPlistEditorModule
{
    PBXTarget *_target;
    BOOL _handlingPListChangeNotification;
    double _viewHeightSansOutline;
    long long _numRowsOutlineSizedTo;
}

- (void)_resizeViewIfNeeded;
- (void)addUIConfigurationToMutableDictionary:(id)arg1;
- (id)initWithTarget:(id)arg1;
- (void)moduleViewWasInstalled:(id)arg1;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)propertyListChanged:(id)arg1;
- (void)takeUIConfigurationFromDictionary:(id)arg1;
- (void)targetProductSettingsDidChange:(id)arg1;
- (void)update;
- (void)viewDidLoad;

@end

