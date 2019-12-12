//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameToolsFoundation/NSObject-Protocol.h>

@class GTFFileSystemEventStream, NSString;

@protocol GTFFileSystemEventStreamDelegate <NSObject>
- (void)fileSystemEventStream:(GTFFileSystemEventStream *)arg1 notedChangeAtPath:(NSString *)arg2 scanRecursively:(BOOL)arg3;

@optional
- (void)fileSystemEventStream:(GTFFileSystemEventStream *)arg1 notedChangeOfRootPath:(NSString *)arg2;
- (void)fileSystemEventStream:(GTFFileSystemEventStream *)arg1 notedVolumeMount:(NSString *)arg2;
- (void)fileSystemEventStream:(GTFFileSystemEventStream *)arg1 notedVolumeUnmount:(NSString *)arg2;
- (void)historyCompleteForFileSystemEventStream:(GTFFileSystemEventStream *)arg1;
- (void)historyWrappedForFileSystemEventStream:(GTFFileSystemEventStream *)arg1;
@end

