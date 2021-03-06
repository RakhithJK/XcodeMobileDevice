//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEArchive, NSArray, NSURLSession;

@interface IDEdSYMDownloader : NSObject
{
    IDEArchive *_archive;
    NSURLSession *_urlSession;
    CDUnknownBlockType _fileDownloadedCallback;
    CDUnknownBlockType _completionCallback;
    unsigned long long _maximumConcurrentTasks;
    NSArray *_downloadTasks;
}

- (void).cxx_destruct;
@property(readonly) IDEArchive *archive; // @synthesize archive=_archive;
@property(copy, nonatomic) CDUnknownBlockType completionCallback; // @synthesize completionCallback=_completionCallback;
@property(copy) NSArray *downloadTasks; // @synthesize downloadTasks=_downloadTasks;
@property(copy, nonatomic) CDUnknownBlockType fileDownloadedCallback; // @synthesize fileDownloadedCallback=_fileDownloadedCallback;
- (id)initWithArchive:(id)arg1;
- (void)initiateDownloadWithAccount:(id)arg1;
@property(nonatomic) unsigned long long maximumConcurrentTasks; // @synthesize maximumConcurrentTasks=_maximumConcurrentTasks;
@property(readonly) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;

@end

