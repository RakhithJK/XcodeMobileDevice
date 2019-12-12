//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsCore/NSNetServiceBrowserDelegate-Protocol.h>
#import <DevToolsCore/NSNetServiceDelegate-Protocol.h>

@class NSDate, NSMutableDictionary, NSMutableSet, NSNetServiceBrowser, NSString;

@interface XCDistributedBuildsManager : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate>
{
    NSNetServiceBrowser *_serviceBrowser;
    NSMutableSet *_distccBuildServers;
    NSMutableSet *_dnbBuildServers;
    NSMutableSet *_distccHostsToUseForBuilding;
    NSMutableSet *_dnbHostsToUseForBuilding;
    NSMutableDictionary *_dnbBuildSetsByName;
    NSMutableDictionary *_distccBuildSetsByName;
    NSDate *_lastBuildRefresh;
    NSMutableDictionary *_cachedBuildServerNamesByCompilerVersion;
    NSMutableDictionary *_cachedNumberOfBuildServersByCompilerVersion;
    long long _maxNumberOfDistributedTasks;
    NSString *_distccPath;
    NSMutableSet *_servicesBeingAdded;
    NSMutableDictionary *_environment;
    int _distributedBuildSystemInUse;
    unsigned int _shouldUseDistributedBuilds:1;
    unsigned int _runningCommandLineTool:1;
    unsigned int _shouldDistributeToBonjourHosts:1;
    int _distccVerbose;
    BOOL _bonjourIsSelected;
}

+ (void)initialize;
+ (void)processWillTerminate;
+ (id)sharedDistributedBuildsManager;
- (id)_buildServersForHostType:(int)arg1;
- (void)_createServiceBrowser;
- (void)_invalidateCaches;
- (id)_loadBuildSetsForHostType:(int)arg1 fromDefaults:(id)arg2;
- (void)_loadInitialHosts;
- (id)_loadOldTrustedServersFromDefaults:(id)arg1;
- (void)_postChangeNotice:(id)arg1;
- (void)_processWillTerminate;
- (void)_startBrowsingForServices;
- (void)_stopBrowsingForServices;
- (void)_stopServiceBrowser;
- (void)_updateRecruiter;
- (void)addHostToHostsToUseForDistributedBuilds:(id)arg1;
- (id)addHostWithSpec:(id)arg1 hostType:(int)arg2;
- (id)addHostWithSpec:(id)arg1 hostType:(int)arg2 bonjourServiceName:(id)arg3;
- (id)addHostWithSpec:(id)arg1 hostType:(int)arg2 bonjourServiceName:(id)arg3 port:(long long)arg4;
- (id)allBonjourServers;
- (void)buildHostInfoChanged:(id)arg1;
- (id)buildSetsForHostType:(int)arg1;
- (void)dealloc;
- (id)distccCommandPath;
- (int)distributedBuildSystemInUse;
- (id)distributedBuildToolCommandPath;
- (id)environmentVars;
- (unsigned long long)estimatedNumberOfParallelTasksForCompiler:(id)arg1;
- (id)hostListForBuildServersCompatibleWithCompilerVersion:(id)arg1 andSDKVersion:(id)arg2 estimatedRemainingJobCount:(long long)arg3;
- (id)hostListForStartingPumpMode;
- (id)hostWithSpec:(id)arg1 hostType:(int)arg2;
- (id)hostsToUseForDistributedBuildWithCompilerVersion:(id)arg1 andSDKVersion:(id)arg2;
- (id)hostsToUseForDistributedBuildWithHostType:(int)arg1;
- (id)init;
- (BOOL)isRunningDistributedBuildDaemon:(id)arg1;
- (BOOL)isUsingDistcc;
- (id)localHost;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)refreshAllHosts;
- (void)removeHostFromHostsToUseForDistributedBuilds:(id)arg1;
- (void)removeHostWithSpec:(id)arg1 hostType:(int)arg2;
- (BOOL)runningCommandLineTool;
- (void)setBonjourIsSelected:(BOOL)arg1;
- (void)setDistributedBuildSystemInUse:(int)arg1;
- (void)setEnvironmentVars:(id)arg1;
- (void)setHostsToUseForDistributedBuild:(id)arg1 hostType:(int)arg2;
- (void)setShouldDistributeToBonjourServers:(BOOL)arg1;
- (void)setShouldDistributeToBonjourServers:(BOOL)arg1 saveInDefaults:(BOOL)arg2;
- (void)setShouldUseDedicatedNetworkBuilds:(BOOL)arg1;
- (void)setShouldUseDistributedBuilds:(BOOL)arg1;
- (void)setShouldUseDistributedBuilds:(BOOL)arg1 saveInDefaults:(BOOL)arg2;
- (BOOL)shouldDistributeToBonjourServers;
- (BOOL)shouldEnableVerboseLogging;
- (BOOL)shouldUseDedicatedNetworkBuilds;
- (BOOL)shouldUseDistributedBuilds;
- (void)stopOrStartMonitoringHostsIfNeeded:(BOOL)arg1;
- (void)updateServiceBrowserStartIfNeeded:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

