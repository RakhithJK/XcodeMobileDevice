//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSCore/XCSService.h>

#import <XCSCore/NSNetServiceDelegate-Protocol.h>

@class NSError, NSMutableArray, NSNetService, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface XCSService_BonjourConnection : XCSService <NSNetServiceDelegate>
{
    NSMutableArray *_resolveListeners;
    NSObject<OS_dispatch_queue> *_resolveListenerQueue;
    BOOL isResolved;
    BOOL isResolving;
    NSString *netServiceDomain;
    NSString *netServiceType;
    NSString *netServiceName;
    NSError *resolutionError;
    NSNetService *_netService;
}

- (void).cxx_destruct;
- (id)initWithNetServiceDomain:(id)arg1 type:(id)arg2 name:(id)arg3;
- (id)initWithNetServiceDomain:(id)arg1 type:(id)arg2 name:(id)arg3 enabled:(BOOL)arg4;
- (BOOL)isBonjour;
@property BOOL isResolved; // @synthesize isResolved;
@property BOOL isResolving; // @synthesize isResolving;
@property(retain) NSNetService *netService; // @synthesize netService=_netService;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
@property(retain, nonatomic) NSString *netServiceDomain; // @synthesize netServiceDomain;
@property(retain, nonatomic) NSString *netServiceName; // @synthesize netServiceName;
@property(retain, nonatomic) NSString *netServiceType; // @synthesize netServiceType;
- (void)notifyAfterBonjourResolution:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSError *resolutionError; // @synthesize resolutionError;
- (void)resolveService;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

