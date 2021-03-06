//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet, NSString;
@protocol OS_dispatch_source;

@interface IDETestingOSXCrashReportObserver : NSObject
{
    int _fileDescriptor;
    NSString *_directoryPath;
    NSMutableSet *_filesInDirectory;
    NSObject<OS_dispatch_source> *_source;
    NSArray *_processNames;
}

- (void).cxx_destruct;
- (id)_filesInDirectory:(id)arg1;
- (void)_updateFilesInDirectoryAndNotifyHandlerOfNewMatches:(CDUnknownBlockType)arg1;
- (void)dealloc;
@property(copy) NSString *directoryPath; // @synthesize directoryPath=_directoryPath;
@property int fileDescriptor; // @synthesize fileDescriptor=_fileDescriptor;
@property(copy) NSMutableSet *filesInDirectory; // @synthesize filesInDirectory=_filesInDirectory;
- (id)initWithDirectory:(id)arg1 matchingProcessNames:(id)arg2 error:(id *)arg3;
@property(copy) NSArray *processNames; // @synthesize processNames=_processNames;
@property(retain) NSObject<OS_dispatch_source> *source; // @synthesize source=_source;
- (void)startMonitoringWithFileAddedHandler:(CDUnknownBlockType)arg1;

@end

