//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsCore/XCNetworkHostObserver-Protocol.h>

@class NSHost, NSMutableSet, NSString;

@interface XCDistributedBuildHost : NSObject <XCNetworkHostObserver>
{
    NSString *_hostSpec;
    unsigned long long _port;
    NSString *_composedOsVersionString;
    NSString *_osVersion;
    NSString *_buildVersion;
    NSString *_architecture;
    NSMutableSet *_compilerVersions;
    NSMutableSet *_sdkVersions;
    NSHost *_host;
    unsigned long long _cpuCount;
    long long _cpuSpeed;
    unsigned long long _jobCount;
    BOOL _isReachable;
    BOOL _isSharing;
    BOOL _hasHostInfo;
    BOOL _isTrackedManually;
    unsigned int _hashValue;
    int _hostType;
}

+ (id)_displayStringForCompilerVersionString:(id)arg1;
+ (id)_displayStringForSDKVersionString:(id)arg1;
+ (void)_fetchHostInfoInBackground:(id)arg1;
+ (void)_finishedFetchingHostInfoInBackground;
+ (id)_hostNameForHostSpec:(id)arg1;
+ (id)_launchInfoForDictionary:(id)arg1;
+ (id)distributedBuildHostWithSpec:(id)arg1;
- (id)OSVersionString;
- (void)_allocateHost;
- (id)_host;
- (id)bonjourServiceName;
- (void)clearHostInfo;
- (long long)compare:(id)arg1;
- (id)compilerVersionStrings;
- (id)compilerVersionStringsForDisplay;
- (long long)concurrentJobCount;
- (long long)cpuCount;
- (unsigned long long)cpuSpeed;
- (void)dealloc;
- (id)description;
- (void)fetchSystemInfo:(id)arg1;
- (BOOL)hasCompiler:(id)arg1;
- (BOOL)hasHostInfo;
- (BOOL)hasSDK:(id)arg1;
- (unsigned long long)hash;
- (id)hostSpec;
- (int)hostType;
- (id)initWithHostSpec:(id)arg1;
- (id)initWithHostSpec:(id)arg1 port:(unsigned long long)arg2;
- (BOOL)isCompatibleHost;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToBuildHost:(id)arg1;
- (BOOL)isLocalHost;
- (BOOL)isReachable;
- (BOOL)isSharing;
- (BOOL)isTrackedManually;
- (id)launchInfoForSystemInfoFetch;
- (void)networkHostOnlineStatusChanged:(BOOL)arg1;
- (unsigned long long)port;
- (unsigned long long)processingPower;
- (void)refresh;
- (id)sdkVersionForSDKPackage:(id)arg1;
- (id)sdkVersionStrings;
- (id)sdkVersionStringsForDisplay;
- (void)setBonjourServiceName:(id)arg1;
- (void)setHasHostInfo:(BOOL)arg1;
- (void)setIsReachable:(BOOL)arg1;
- (void)setIsSharing:(BOOL)arg1;
- (void)setPort:(unsigned long long)arg1;
- (id)setSystemInfoFromData:(id)arg1;
- (void)setSystemInfoFromDictionary:(id)arg1;
- (void)setTrackedManually:(BOOL)arg1;
- (id)statusSortKey;
- (id)statusString;
- (BOOL)wasDiscoveredByBonjour;

@end

