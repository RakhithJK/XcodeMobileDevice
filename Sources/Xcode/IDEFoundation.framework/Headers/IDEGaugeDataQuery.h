//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IDEGaugeDataQueryCoordinator, NSSet, NSString;

@interface IDEGaugeDataQuery : NSObject <DVTInvalidation>
{
    NSString *_requiredAttribute;
    BOOL _isSuspended;
    BOOL _useProxiedDevice;
    IDEGaugeDataQueryCoordinator *_queryCoordinator;
    NSSet *_observedAttributes;
    CDUnknownBlockType _resultDictHandler;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)handleResultDict:(id)arg1;
- (id)initForProcessWithPID:(id)arg1 onDevice:(id)arg2 useProxiedDevice:(BOOL)arg3;
@property(nonatomic) BOOL isSuspended; // @synthesize isSuspended=_isSuspended;
@property(copy, nonatomic) NSSet *observedAttributes; // @synthesize observedAttributes=_observedAttributes;
- (void)primitiveInvalidate;
@property(retain, nonatomic) IDEGaugeDataQueryCoordinator *queryCoordinator; // @synthesize queryCoordinator=_queryCoordinator;
@property(copy, nonatomic) CDUnknownBlockType resultDictHandler; // @synthesize resultDictHandler=_resultDictHandler;
- (void)setObservedAttributes:(id)arg1 requiredAttribute:(id)arg2;
@property(readonly, nonatomic) BOOL useProxiedDevice; // @synthesize useProxiedDevice=_useProxiedDevice;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

