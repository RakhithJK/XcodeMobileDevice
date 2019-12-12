//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/NSObject-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSURL, PBXExecutable, XCPlatformSpecification, XCRemoteExecutable;

@protocol XCRemoteComputer <NSObject>
+ (BOOL)handleDroppedFile:(NSString *)arg1;
+ (void)loadOrganizerCategories;
+ (BOOL)shouldHandleDroppedFile:(NSString *)arg1;
@property(readonly) NSString *cachePath;
- (BOOL)canExecute;
@property(readonly) BOOL canRenameDevice;
- (XCRemoteExecutable *)currentRemoteExecutable;
@property(readonly) NSMutableDictionary *data;
- (int)debuggerArchitectureMode;
- (NSMutableArray *)debuggerAttachList;
@property(readonly, copy) NSString *deviceArchitecture;
@property(readonly) BOOL deviceAvailable;
@property(readonly) BOOL deviceHasUI;
@property(readonly, copy) NSString *deviceIdentifier;
@property(readonly) BOOL deviceIsBusy;
@property BOOL deviceIsIgnored;
@property(readonly) BOOL deviceIsTransient;
@property(readonly, copy) NSString *deviceName;
@property(readonly, copy) NSString *deviceSoftwareVersion;
- (void)didExecute:(PBXExecutable *)arg1;
- (void)invalidate;
@property(readonly) XCPlatformSpecification *platform;
@property(readonly, copy) NSString *platformIdentifier;
- (BOOL)preflightExecutable:(PBXExecutable *)arg1;
- (void)renameDevice:(NSString *)arg1;
- (XCRemoteExecutable *)setCurrentExecutable:(PBXExecutable *)arg1;
- (BOOL)shouldApplicationTerminate;
- (BOOL)useAsyncWillExecute;
- (void)willBeForgotten;
- (BOOL)willExecute:(PBXExecutable *)arg1 debug:(BOOL)arg2 onPort:(long long *)arg3 performInstall:(BOOL)arg4;
- (void)willExecuteAsync:(PBXExecutable *)arg1 shouldInstall:(BOOL)arg2;
- (void)willExecuteCompleted;
- (void)willExecuteFailed;

@optional
+ (_Bool)archiveApplicationAtURL:(NSURL *)arg1 error:(id *)arg2;
@end

