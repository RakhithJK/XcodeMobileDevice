//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DTKPRecord : NSObject
{
    unsigned long long *_counterEventValues;
    unsigned long long _kdebugArgumentsArray[5];
    struct CachedMemory _cachedUserFrames;
    struct CachedMemory _cachedSupervisorFrames;
    struct CachedMemory _cachedCounterData;
    BOOL _userFramesTruncated;
    unsigned int _recordType;
    unsigned int _triggerID;
    unsigned int _cpuNumber;
    int _pid;
    unsigned int _threadState;
    unsigned int _supervisorFrameCount;
    unsigned int _supervisorExtraDataCount;
    unsigned int _userFrameCount;
    unsigned int _userExtraDataCount;
    CDUnion_1678db3a _kdebugEvent;
    unsigned int _kdebugArgumentCount;
    unsigned int _counterEventCount;
    unsigned long long _timestamp;
    unsigned long long _tid;
    unsigned long long _dispatchQueue;
    unsigned long long *_supervisorFramesAndExtraData;
    unsigned long long *_userFramesAndExtraData;
    unsigned long long _kdebugStringUUID;
    NSString *_kdebugString;
}

- (void).cxx_destruct;
- (void)clear;
@property(nonatomic) unsigned int counterEventCount; // @synthesize counterEventCount=_counterEventCount;
@property(readonly, nonatomic) const unsigned long long *counterEventValues; // @synthesize counterEventValues=_counterEventValues;
@property(nonatomic) unsigned int cpuNumber; // @synthesize cpuNumber=_cpuNumber;
- (void)dealloc;
- (id)description;
- (id)detailedDescription;
@property(nonatomic) unsigned long long dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (id)init;
@property(nonatomic) unsigned int kdebugArgumentCount; // @synthesize kdebugArgumentCount=_kdebugArgumentCount;
@property(nonatomic) unsigned long long *kdebugArguments;
@property(nonatomic) CDUnion_1678db3a kdebugEvent; // @synthesize kdebugEvent=_kdebugEvent;
@property(retain, nonatomic) NSString *kdebugString; // @synthesize kdebugString=_kdebugString;
@property(nonatomic) unsigned long long kdebugStringUUID; // @synthesize kdebugStringUUID=_kdebugStringUUID;
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(nonatomic) unsigned int recordType; // @synthesize recordType=_recordType;
- (void)setCounterEventValues:(const unsigned long long *)arg1;
- (void)setKDebugArgumentValue:(unsigned long long)arg1 forIndex:(unsigned int)arg2;
- (void)setKDebugEventValue:(unsigned int)arg1;
@property(nonatomic) unsigned int supervisorExtraDataCount; // @synthesize supervisorExtraDataCount=_supervisorExtraDataCount;
@property(nonatomic) unsigned int supervisorFrameCount; // @synthesize supervisorFrameCount=_supervisorFrameCount;
@property(nonatomic) unsigned long long *supervisorFramesAndExtraData; // @synthesize supervisorFramesAndExtraData=_supervisorFramesAndExtraData;
@property(nonatomic) unsigned int threadState; // @synthesize threadState=_threadState;
@property(nonatomic) unsigned long long tid; // @synthesize tid=_tid;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) unsigned int triggerID; // @synthesize triggerID=_triggerID;
@property(nonatomic) unsigned int userExtraDataCount; // @synthesize userExtraDataCount=_userExtraDataCount;
@property(nonatomic) unsigned int userFrameCount; // @synthesize userFrameCount=_userFrameCount;
@property(nonatomic) unsigned long long *userFramesAndExtraData; // @synthesize userFramesAndExtraData=_userFramesAndExtraData;
@property(nonatomic) BOOL userFramesTruncated; // @synthesize userFramesTruncated=_userFramesTruncated;
@property(readonly, nonatomic) unsigned long long *supervisorExtraData;
@property(readonly, nonatomic) unsigned long long *userExtraData;

@end

