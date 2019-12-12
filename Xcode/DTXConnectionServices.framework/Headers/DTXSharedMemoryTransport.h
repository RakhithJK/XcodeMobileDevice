//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DTXConnectionServices/DTXTransport.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface DTXSharedMemoryTransport : DTXTransport
{
    // Error parsing type: ^{DTXSharedMemory=QQQIIIIiiIAiAiAiAiIII[0c]}, name: _shm
    NSObject<OS_dispatch_queue> *_listenQueue;
    BOOL _creator;
}

+ (id)addressForMemory:(unsigned long long)arg1 inProcess:(int)arg2;
+ (id)addressForPosixSharedMemoryWithName:(id)arg1;
+ (id)schemes;
- (BOOL)_setupCreatingSharedMemory:(id)arg1 size:(int)arg2;
-     // Error parsing type: c28@0:8^{DTXSharedMemory=QQQIIIIiiIAiAiAiAiIII[0c]}16c24, name: _setupWithShm:asCreator:
- (void)dealloc;
- (void)disconnect;
- (id)initWithLocalAddress:(id)arg1;
- (id)initWithLocalName:(id)arg1 size:(int)arg2;
-     // Error parsing type: @24@0:8^{DTXSharedMemory=QQQIIIIiiIAiAiAiAiIII[0c]}16, name: initWithMappedMemory:
- (id)initWithMemoryAddress:(unsigned long long)arg1 inTask:(unsigned int)arg2;
- (id)initWithRemoteAddress:(id)arg1;
- (id)localAddresses;
- (id)permittedBlockCompressionTypes;
@property(nonatomic) int remotePid;
// Error parsing type for property sharedMemory:
// Property attributes: T^{DTXSharedMemory=QQQIIIIiiIAiAiAiAiIII[0c]},R,N,V_shm

@property(readonly, nonatomic) unsigned long long totalSharedMemorySize;
- (unsigned long long)transmit:(const void *)arg1 ofLength:(unsigned long long)arg2;

@end

