//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface DTDKScreenshotsController : NSObject
{
    NSMutableSet *_screenshots;
}

+ (id)controller;
- (void).cxx_destruct;
- (void)addScreenshots:(id)arg1;
- (void)addScreenshotsObject:(id)arg1;
- (void)deleteScreenshot:(id)arg1;
- (void)fsEventReceived:(id)arg1;
- (id)mutableScreenshots;
- (void)removeScreenshots:(id)arg1;
- (void)removeScreenshotsObject:(id)arg1;
- (id)screenshotRootDirectory;
- (id)screenshots;
- (void)setScreenshots:(id)arg1;
- (id)writeScreenshotNamed:(id)arg1 withData:(id)arg2;
- (id)writeScreenshotNamed:(id)arg1 withData:(id)arg2 forDeviceIdentifier:(id)arg3;

@end
