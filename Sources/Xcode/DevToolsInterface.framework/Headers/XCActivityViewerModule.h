//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXViewListModule.h>

@interface XCActivityViewerModule : PBXViewListModule
{
}

+ (id)_newPreconfiguredActivityViewer;
+ (BOOL)openAtLaunch;
+ (id)sharedActivityViewer;
- (Class)moduleWindowClass;
- (unsigned long long)moduleWindowStyleMask;
- (void)saveWindowState;
- (BOOL)windowShouldZoom:(id)arg1 toFrame:(struct CGRect)arg2;
- (struct CGRect)windowWillUseStandardFrame:(id)arg1 defaultFrame:(struct CGRect)arg2;

@end

