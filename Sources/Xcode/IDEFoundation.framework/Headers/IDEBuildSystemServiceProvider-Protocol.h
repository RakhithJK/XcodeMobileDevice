//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/NSObject-Protocol.h>

@class IDEBuildParameters, IDEWorkspace;
@protocol IDEBlueprintProvider;

@protocol IDEBuildSystemServiceProvider <NSObject>
@property(readonly, nonatomic) Class buildOperationClass;
- (void)noteBlueprintProviderDidChange:(id <IDEBlueprintProvider>)arg1 inWorkspace:(IDEWorkspace *)arg2;
- (void)updateSourceCodeBuildInfoForFilesInWorkspace:(IDEWorkspace *)arg1 withBuildParameters:(IDEBuildParameters *)arg2 completionHandler:(void (^)(NSError *))arg3;
@property(readonly, nonatomic) BOOL useAsDefault;
@end

