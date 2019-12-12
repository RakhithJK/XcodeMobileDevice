//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXToolbarItemPopup.h>

#import <DevToolsInterface/PBXTrackableTaskObserver-Protocol.h>

@class NSImage, PBXTrackableTaskManager;

@interface PBXToolbarStopButton : PBXToolbarItemPopup <PBXTrackableTaskObserver>
{
    PBXTrackableTaskManager *_taskManager;
    BOOL _inToolbar;
    NSImage *_stopImage;
}

+ (id)createInstanceWithDefinition:(id)arg1 forProjectDocument:(id)arg2;
+ (void)echoStringsForDefinition:(id)arg1;
+ (id)globalID;
+ (id)noTasksImage;
+ (id)tasksImage;
- (id)_createImage;
- (id)_createMenu;
- (void)_recreateImage;
- (BOOL)allowsUserCustomization;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)createToolTip;
- (void)dealloc;
- (id)initWithTaskManager:(id)arg1;
- (void)setIsInToolbar:(BOOL)arg1;
- (void)singleClickEvent:(id)arg1 onView:(id)arg2;
- (void)stopMenuCalled:(id)arg1;
- (id)taskManager;
- (void)taskRegistered:(id)arg1;
- (void)taskUnregistered:(id)arg1;
- (long long)toolbarItemCount;
- (void)toolbarMenuWasSelected:(id)arg1;
- (void)validate;

@end

