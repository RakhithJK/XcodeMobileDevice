//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUToolsCore/DYBaseStreamTransport.h>

@class DYSharedMemoryTransport;

@interface DYBaseSocketTransport : DYBaseStreamTransport
{
    struct dispatch_source_s *_readSource;
    struct dispatch_source_s *_writeSource;
    DYSharedMemoryTransport *_smTransport;
    _Bool _writeSourceIsSuspended;
    _Bool _scheduledReadOnWritableSocket;
}

- (void)_destroySharedMemoryTransport;
- (void)_invalidate;
- (unsigned int)_nextMessageSerial;
- (long long)_read:(void *)arg1 size:(unsigned long long)arg2;
- (void)_readAndAccumulateLoop;
- (long long)_write:(const void *)arg1 size:(unsigned long long)arg2;
- (void)closeSocketDescriptor;
- (BOOL)connected;
- (id)createNewSharedMemoryTransport;
- (void)destroySharedMemoryTransport;
- (id)init;
- (BOOL)relayMessageOverSharedMemoryTransport:(id)arg1 error:(id *)arg2;
- (void)runWithSocket:(int)arg1;
- (void)scheduleReadOnWritableSocket;
- (void)setPrioritizeOutgoingMessages:(BOOL)arg1;

@end

