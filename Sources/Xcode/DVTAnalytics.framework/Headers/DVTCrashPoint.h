//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTAnalytics/DVTAnalyticsSnapshotFileSystemSerialization-Protocol.h>

@class DVTAnalyticsCrashPointIdentifier, DVTCrashLogProvider, DVTCrashPointDistributionInfo, DVTCrashPointUserData, DVTFilePath, NSString;

@interface DVTCrashPoint : NSObject <DVTAnalyticsSnapshotFileSystemSerialization>
{
    BOOL _topCrash;
    BOOL _placeholder;
    DVTAnalyticsCrashPointIdentifier *_crashPointIdentifier;
    DVTCrashPointUserData *_userData;
    DVTCrashLogProvider *_crashLogProvider;
    unsigned long long _uniqueDeviceCount;
    unsigned long long _crashLogsCount;
    DVTCrashPointDistributionInfo *_distributionInfo;
    NSString *_lastCrashReporterKey;
    NSString *_lastCrashPointPagingKey;
    NSString *_crashPointString;
    NSString *_sourceFileName;
    unsigned long long _sourceFileLine;
    DVTFilePath *_cachePath;
    NSString *_appExtensionPointIdentifier;
}

+ (id)objectFromFilePath:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (BOOL)_crashPointStringMatchesImage:(id)arg1 symbol:(id)arg2 offset:(unsigned long long)arg3;
- (id)_infoJSON;
@property(retain) NSString *appExtensionPointIdentifier; // @synthesize appExtensionPointIdentifier=_appExtensionPointIdentifier;
@property(retain) DVTFilePath *cachePath; // @synthesize cachePath=_cachePath;
@property(retain) DVTCrashLogProvider *crashLogProvider; // @synthesize crashLogProvider=_crashLogProvider;
@property unsigned long long crashLogsCount; // @synthesize crashLogsCount=_crashLogsCount;
@property(retain) DVTAnalyticsCrashPointIdentifier *crashPointIdentifier; // @synthesize crashPointIdentifier=_crashPointIdentifier;
@property(retain) NSString *crashPointString; // @synthesize crashPointString=_crashPointString;
- (BOOL)crashPointStringMatchesFrame:(id)arg1;
- (long long)crashPointStringMatchesImage:(id)arg1 symbol:(id)arg2 offset:(unsigned long long)arg3 sourceFileName:(id)arg4 sourceLine:(unsigned long long)arg5;
- (id)description;
@property(retain) DVTCrashPointDistributionInfo *distributionInfo; // @synthesize distributionInfo=_distributionInfo;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCachePath:(id)arg1;
- (id)initWithIdentifier:(id)arg1 userData:(id)arg2 crashPointString:(id)arg3 sourceFileName:(id)arg4 sourceFileLine:(unsigned long long)arg5 cachePath:(id)arg6;
- (BOOL)isEqual:(id)arg1;
@property(getter=isTopCrash) BOOL topCrash; // @synthesize topCrash=_topCrash;
@property(retain) NSString *lastCrashPointPagingKey; // @synthesize lastCrashPointPagingKey=_lastCrashPointPagingKey;
@property(retain) NSString *lastCrashReporterKey; // @synthesize lastCrashReporterKey=_lastCrashReporterKey;
@property BOOL placeholder; // @synthesize placeholder=_placeholder;
@property unsigned long long sourceFileLine; // @synthesize sourceFileLine=_sourceFileLine;
@property(retain) NSString *sourceFileName; // @synthesize sourceFileName=_sourceFileName;
@property unsigned long long uniqueDeviceCount; // @synthesize uniqueDeviceCount=_uniqueDeviceCount;
@property(retain) DVTCrashPointUserData *userData; // @synthesize userData=_userData;
- (id)snapshotWithError:(id *)arg1;

@end
