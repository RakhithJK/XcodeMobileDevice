//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/XCBuildStateStoreEntry.h>

@class NSMutableArray;

@interface XCBuildableState : XCBuildStateStoreEntry
{
    unsigned int _archiveFormatVersion;
    NSMutableArray *_commandIdentsFromLatestBuild;
    int _resultCode;
    double _timeBuildFinished;
}

+ (unsigned long long)archiveFormatVersion;
- (void)addCommandIdentFromLatestBuild:(id)arg1;
- (unsigned long long)archiveFormatVersion;
- (BOOL)archiveFormatVersionIsCompatible;
- (id)commandIdentsFromLatestBuild;
- (void)dealloc;
- (id)description;
- (id)initFromFileHandle:(struct __sFILE *)arg1 withIdentifier:(id)arg2 inBuildStateStore:(id)arg3;
- (id)initWithIdentifier:(id)arg1 inBuildStateStore:(id)arg2;
- (id)longDescription;
- (void)readPropertiesFromFileHandle:(struct __sFILE *)arg1;
- (BOOL)readPropertyFromTypeCode:(BOOL)arg1 bytes:(const char *)arg2 length:(unsigned long long)arg3;
- (void)resetCommandIdentsFromLatestBuild;
- (long long)resultCode;
- (void)setResultCode:(long long)arg1;
- (void)setTimeBuildFinished:(double)arg1;
- (double)timeBuildFinished;
- (void)writeToFileHandle:(struct __sFILE *)arg1;

@end

