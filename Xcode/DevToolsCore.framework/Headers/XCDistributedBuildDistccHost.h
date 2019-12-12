//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/XCDistributedBuildHost.h>

@class NSString;

@interface XCDistributedBuildDistccHost : XCDistributedBuildHost
{
    NSString *_distccVersion;
    NSString *_bonjourServiceName;
    long long _priority;
}

+ (id)distributedBuildHostWithSpec:(id)arg1;
+ (id)distributedBuildHostWithSpec:(id)arg1 bonjourServiceName:(id)arg2 port:(unsigned long long)arg3;
+ (id)distributedBuildHostWithSpec:(id)arg1 port:(unsigned long long)arg2;
- (id)_initWithHostSpec:(id)arg1 bonjourServiceName:(id)arg2;
- (id)_initWithHostSpec:(id)arg1 bonjourServiceName:(id)arg2 port:(unsigned long long)arg3;
- (BOOL)_processDistccError:(long long)arg1;
- (id)bonjourServiceName;
- (void)clearHostInfo;
- (long long)compare:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)distccVersionString;
- (BOOL)hasCompiler:(id)arg1;
- (BOOL)hasSDK:(id)arg1;
- (id)initWithHostSpec:(id)arg1;
- (id)initWithHostSpec:(id)arg1 port:(unsigned long long)arg2;
- (BOOL)isCompatibleHost;
- (id)launchInfoForSystemInfoFetch;
- (long long)priority;
- (void)refresh;
- (void)setBonjourServiceName:(id)arg1;
- (void)setIsSharing:(BOOL)arg1;
- (id)setSystemInfoFromData:(id)arg1;
- (id)statusString;
- (BOOL)wasDiscoveredByBonjour;

@end

