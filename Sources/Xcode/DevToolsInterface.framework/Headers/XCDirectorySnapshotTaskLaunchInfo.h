//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/XCPosixTaskLaunchInfo.h>

@interface XCDirectorySnapshotTaskLaunchInfo : XCPosixTaskLaunchInfo
{
}

+ (void)initialize;
- (id)_launchInfoArrayByDividingArgumentsWithNumberOfPrefixes:(int)arg1 numberOfPostfixes:(int)arg2;
- (id)_launchInfoArrayByDividingDittoArguments;
- (id)_launchInfoArrayByDividingMkdirArguments;
- (id)_launchInfoArrayByDividingTouchArguments;
- (id)initDittoTaskWithSourceDir:(id)arg1 destDir:(id)arg2;
- (id)initDittoTaskWithSourceDir:(id)arg1 destDir:(id)arg2 entries:(id)arg3;
- (id)initMkdirTaskWithDir:(id)arg1 directories:(id)arg2;
- (id)initTouchTaskWithDir:(id)arg1 files:(id)arg2;
- (id)launchInfoArrayByDividingArguments;

@end
