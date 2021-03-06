//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSMapTable, NSString;

@interface IDEPlaygroundResourcesSymlinkManager : NSObject <DVTInvalidation>
{
    NSMapTable *__contextToResourcesMonitorMap;
    NSMapTable *__monitorToModificationObservingTokenMap;
}

+ (void)initialize;
+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain) NSMapTable *_contextToResourcesMonitorMap; // @synthesize _contextToResourcesMonitorMap=__contextToResourcesMonitorMap;
- (id)_createMonitorForPlaygroundContext:(id)arg1 dependency:(id)arg2;
- (void)_findOrCreateMonitorsForPlaygroundPageContext:(id)arg1;
@property(retain) NSMapTable *_monitorToModificationObservingTokenMap; // @synthesize _monitorToModificationObservingTokenMap=__monitorToModificationObservingTokenMap;
- (BOOL)_reloadSymlinksForPlaygroundPageContext:(id)arg1 error:(id *)arg2;
- (void)_unregisterMonitor:(id)arg1;
- (id)init;
- (void)primitiveInvalidate;
- (void)registerPlaygroundPageContext:(id)arg1;
- (void)reloadSymlinksForPlaygroundPageContext:(id)arg1;
- (void)unregisterPlaygroundPageContext:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

