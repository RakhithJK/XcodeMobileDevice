//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class XCRemoteComputer;

@interface XCRemoteComputerViewController : NSViewController
{
    XCRemoteComputer *remoteComputer;
}

+ (id)viewControllerForRemoteComputer:(id)arg1;
- (void)invalidate;
- (id)nibBundle;
- (id)nibName;
@property XCRemoteComputer *remoteComputer; // @synthesize remoteComputer;

@end

