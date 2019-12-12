//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DTKPCPU, DTKPCPUCounterAllocatorRecord, NSMutableArray, NSString;

@interface DTKPCPUCounterAllocator : NSObject
{
    struct kpep_config *_kpepConfig;
    NSMutableArray *_eventRecords;
    NSString *_pmiEventOrAliasName;
    unsigned long long _pmiThreshold;
    unsigned long long _fixedCounterCount;
    unsigned long long _configurableCounterCount;
    DTKPCPU *_cpu;
}

- (void).cxx_destruct;
- (unsigned int)_counterClassForEventIndex:(unsigned long long)arg1 error:(id *)arg2;
- (unsigned long long)_counterIndexForEventIndex:(unsigned long long)arg1 absolute:(BOOL)arg2 error:(id *)arg3;
- (id)_counterNameForEventIndex:(unsigned long long)arg1 error:(id *)arg2;
- (void)_enumerateAllocatedEventsWithIndex:(CDUnknownBlockType)arg1;
- (unsigned long long)_hardwareEventCount;
- (unsigned long long)_indexOfPMIEvent;
- (int)addPMCEventName:(id)arg1 error:(id *)arg2;
@property(readonly, retain, nonatomic) DTKPCPUCounterAllocatorRecord *allocatedPMIRecord;
- (int)configureHardwareCounters:(id *)arg1;
- (int)configureHardwarePMIPeriods:(id *)arg1;
- (int)configurePMIActionID:(unsigned int)arg1 error:(id *)arg2;
@property(readonly, retain, nonatomic) DTKPCPU *cpu; // @synthesize cpu=_cpu;
- (void)dealloc;
- (void)enumerateAllocatedPMCs:(CDUnknownBlockType)arg1;
- (unsigned long long)eventCount;
- (int)forceCounters:(id *)arg1;
- (id)initWithCPU:(id)arg1 error:(id *)arg2;
- (unsigned int)kpcClasses;
@property(readonly, nonatomic) unsigned long long pmcEventCount;
@property(readonly, nonatomic) BOOL pmiEnabled;
@property(readonly, nonatomic) unsigned long long pmiThreshold;
- (unsigned long long)recordConfigWordsIntoBuffer:(unsigned long long *)arg1;
- (void)removeAllEvents;
- (int)setPMIEventName:(id)arg1 pmiThreshold:(unsigned long long)arg2 error:(id *)arg3;
- (int)startHardwareCounters:(id *)arg1;
- (int)stopHardwareCounters:(id *)arg1;
- (int)unforceCounters:(id *)arg1;

@end

