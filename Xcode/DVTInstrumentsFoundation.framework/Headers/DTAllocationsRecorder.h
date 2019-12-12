//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface DTAllocationsRecorder : NSObject
{
    // Error parsing type: ^{DTXSharedMemory=QQQIIIIiiIAiAiAiAiIII[0c]}, name: _shmem
    NSObject<OS_dispatch_queue> *_processingQueue;
    struct {
        double _field1;
        unsigned int _field2;
        unsigned int _field3;
        unsigned long long _field4;
        unsigned long long _field5;
        unsigned long long _field6;
        long long _field7;
        unsigned long long _field8[0];
    } *_partialEvent;
    unsigned int _partialSize;
    unsigned int _partialFilled;
    int _eventTotal;
    unsigned int _targetTask;
    int _stopCollection;
    BOOL _readStackLogsUponAttach;
    unsigned int _sharedMemorySize;
    CDUnknownBlockType _eventHandler;
    CDUnknownBlockType _bufferHandler;
}

+ (unsigned int)allEventsMask;
+ (BOOL)configureLocalLaunchEnvironment:(id)arg1 recordedEventsMask:(unsigned int)arg2;
+ (unsigned int)cppClassNamesMask;
+ (long long)currentVersion;
+ (unsigned int)mallocReallocFreeEventsMask;
+ (unsigned int)retainReleaseAutoEventsMask;
+ (id)serviceIdentifier;
+ (unsigned int)vmEventsMask;
+ (unsigned int)zombieEventsMask;
- (void).cxx_destruct;
- (void)_endAndTossResources:(BOOL)arg1;
- (void)_processIncomingData;
- (unsigned long long)_setupSharedMemoryInTask:(unsigned int)arg1 error:(id *)arg2;
- (BOOL)_startWithError:(id *)arg1;
@property(copy, nonatomic) CDUnknownBlockType bufferHandler; // @synthesize bufferHandler=_bufferHandler;
- (void)cancel;
- (void)dealloc;
@property(readonly) int eventCount;
@property(copy, nonatomic) CDUnknownBlockType eventHandler; // @synthesize eventHandler=_eventHandler;
- (id)init;
- (void)processBufferMessage:(id)arg1;
@property(nonatomic) BOOL readStackLogsUponAttach; // @synthesize readStackLogsUponAttach=_readStackLogsUponAttach;
@property(nonatomic) unsigned int sharedMemorySize; // @synthesize sharedMemorySize=_sharedMemorySize;
- (BOOL)startAttachingToRunningTask:(unsigned int)arg1 recordedEventsMask:(unsigned int)arg2 error:(id *)arg3;
- (BOOL)startForProcessingBuffersWithError:(id *)arg1;
- (BOOL)startWithLaunchedTask:(unsigned int)arg1 error:(id *)arg2;
- (void)stop;

@end
