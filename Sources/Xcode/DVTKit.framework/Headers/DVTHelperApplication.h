//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFilePath, NSRunningApplication, NSString, NSURL;

@interface DVTHelperApplication : NSObject
{
    DVTFilePath *_bundlePath;
    NSString *_bundleIdentifier;
    NSString *_localizedName;
    NSRunningApplication *_runningApplication;
}

+ (id)_helperAppsContentForKey:(id)arg1;
+ (id)availableHelperApplications;
+ (id)helperApplicationWithIdentifier:(id)arg1;
+ (void)initialize;
+ (id)moreHelperApplicationsURL;
- (void).cxx_destruct;
@property(copy) DVTFilePath *bundlePath; // @synthesize bundlePath=_bundlePath;
@property(readonly, copy) NSURL *bundleURL;
- (id)description;
- (id)initWithBundlePath:(id)arg1;
- (BOOL)launchAndActivateHelperApplication:(id *)arg1;
@property(readonly, copy) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(readonly) NSRunningApplication *runningApplication;

@end

