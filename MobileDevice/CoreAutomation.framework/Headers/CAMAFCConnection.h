//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreAutomation/CAMFileTransferring-Protocol.h>

@class CAMAFCFileManager, NSString;
@protocol CAMFileTransferringDelegate;

@interface CAMAFCConnection : NSObject <CAMFileTransferring>
{
    struct _AMDServiceConnection *serviceRef;
    struct __AFCConnection *afcConnectionRef;
    id srcFileManager;
    id destFileManager;
    CAMAFCFileManager *afcFileManager;
    id <CAMFileTransferringDelegate> delegate;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) id <CAMFileTransferringDelegate> delegate; // @synthesize delegate;
- (void)disconnect;
- (BOOL)fileExistsAtPath:(id)arg1;
- (BOOL)fileExistsAtPath:(id)arg1 isDirectory:(char *)arg2;
- (id)init;
- (id)initWithAMDConnection:(id)arg1;
- (void)initializeConnectionWithAMDConnection:(id)arg1;
- (BOOL)isPath:(id)arg1 equalToDestPath:(id)arg2;
- (BOOL)isValid;
- (BOOL)recursiveTransfer:(id)arg1 toLocation:(id)arg2;
- (BOOL)recursiveTransfer:(id)arg1 toLocation:(id)arg2 resolvingSymlinks:(BOOL)arg3;
- (BOOL)removeItemAtPath:(id)arg1;
- (BOOL)retrieve:(id)arg1 toLocation:(id)arg2;
- (BOOL)retrieve:(id)arg1 toLocation:(id)arg2 resolvingSymlinks:(BOOL)arg3;
- (void)retrieveAsync:(id)arg1 toLocation:(id)arg2;
- (BOOL)retrieveFile:(id)arg1 toLocation:(id)arg2;
- (void)retrieveWithArray:(id)arg1;
- (BOOL)send:(id)arg1 toLocation:(id)arg2;
- (BOOL)send:(id)arg1 toLocation:(id)arg2 resolvingSymlinks:(BOOL)arg3;
- (void)sendAsync:(id)arg1 toLocation:(id)arg2;
- (BOOL)sendFile:(id)arg1 toLocation:(id)arg2;
- (void)sendWithArray:(id)arg1;
- (BOOL)transferDirectory:(id)arg1 toLocation:(id)arg2;
- (BOOL)transferDirectory:(id)arg1 toLocation:(id)arg2 resolvingSymlinks:(BOOL)arg3;
- (BOOL)transferFile:(id)arg1 toLocation:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
