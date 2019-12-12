//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString, _DT_GCDAsyncReadPacket, _DT_GCDAsyncSocketPreBuffer, _DT_GCDAsyncWritePacket;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _DT_GCDAsyncSocket : NSObject
{
    unsigned int flags;
    unsigned short config;
    id delegate;
    NSObject<OS_dispatch_queue> *delegateQueue;
    int socket4FD;
    int socket6FD;
    int stateIndex;
    NSData *connectInterface4;
    NSData *connectInterface6;
    NSObject<OS_dispatch_queue> *socketQueue;
    NSObject<OS_dispatch_source> *accept4Source;
    NSObject<OS_dispatch_source> *accept6Source;
    NSObject<OS_dispatch_source> *connectTimer;
    NSObject<OS_dispatch_source> *readSource;
    NSObject<OS_dispatch_source> *writeSource;
    NSObject<OS_dispatch_source> *readTimer;
    NSObject<OS_dispatch_source> *writeTimer;
    NSMutableArray *readQueue;
    NSMutableArray *writeQueue;
    _DT_GCDAsyncReadPacket *currentRead;
    _DT_GCDAsyncWritePacket *currentWrite;
    unsigned long long socketFDBytesAvailable;
    _DT_GCDAsyncSocketPreBuffer *preBuffer;
    struct SSLContext *sslContext;
    _DT_GCDAsyncSocketPreBuffer *sslPreBuffer;
    unsigned long long sslWriteCachedLength;
    int sslErrCode;
    void *IsOnSocketQueueOrTargetQueueKey;
    id userData;
}

+ (id)CRData;
+ (id)CRLFData;
+ (id)LFData;
+ (id)ZeroData;
+ (id)gaiError:(int)arg1;
+ (BOOL)getHost:(id *)arg1 port:(unsigned short *)arg2 family:(char *)arg3 fromAddress:(id)arg4;
+ (BOOL)getHost:(id *)arg1 port:(unsigned short *)arg2 fromAddress:(id)arg3;
+ (id)hostFromAddress:(id)arg1;
+ (id)hostFromSockaddr4:(const struct sockaddr_in *)arg1;
+ (id)hostFromSockaddr6:(const struct sockaddr_in6 *)arg1;
+ (BOOL)isIPv4Address:(id)arg1;
+ (BOOL)isIPv6Address:(id)arg1;
+ (id)lookupHost:(id)arg1 port:(unsigned short)arg2 error:(id *)arg3;
+ (unsigned short)portFromAddress:(id)arg1;
+ (unsigned short)portFromSockaddr4:(const struct sockaddr_in *)arg1;
+ (unsigned short)portFromSockaddr6:(const struct sockaddr_in6 *)arg1;
- (void).cxx_destruct;
- (BOOL)acceptOnInterface:(id)arg1 port:(unsigned short)arg2 error:(id *)arg3;
- (BOOL)acceptOnPort:(unsigned short)arg1 error:(id *)arg2;
@property BOOL autoDisconnectOnClosedReadStream;
- (id)badConfigError:(id)arg1;
- (id)badParamError:(id)arg1;
- (void)closeWithError:(id)arg1;
- (void)completeCurrentRead;
- (void)completeCurrentWrite;
- (id)connectTimeoutError;
- (BOOL)connectToAddress:(id)arg1 error:(id *)arg2;
- (BOOL)connectToAddress:(id)arg1 viaInterface:(id)arg2 withTimeout:(double)arg3 error:(id *)arg4;
- (BOOL)connectToAddress:(id)arg1 withTimeout:(double)arg2 error:(id *)arg3;
- (BOOL)connectToHost:(id)arg1 onPort:(unsigned short)arg2 error:(id *)arg3;
- (BOOL)connectToHost:(id)arg1 onPort:(unsigned short)arg2 viaInterface:(id)arg3 withTimeout:(double)arg4 error:(id *)arg5;
- (BOOL)connectToHost:(id)arg1 onPort:(unsigned short)arg2 withTimeout:(double)arg3 error:(id *)arg4;
- (BOOL)connectWithAddress4:(id)arg1 address6:(id)arg2 error:(id *)arg3;
@property(readonly) NSData *connectedAddress;
@property(readonly) NSString *connectedHost;
- (id)connectedHost4;
- (id)connectedHost6;
- (id)connectedHostFromSocket4:(int)arg1;
- (id)connectedHostFromSocket6:(int)arg1;
@property(readonly) unsigned short connectedPort;
- (unsigned short)connectedPort4;
- (unsigned short)connectedPort6;
- (unsigned short)connectedPortFromSocket4:(int)arg1;
- (unsigned short)connectedPortFromSocket6:(int)arg1;
- (id)connectionClosedError;
- (void)dealloc;
@property __weak id delegate;
@property(retain) NSObject<OS_dispatch_queue> *delegateQueue;
- (void)didConnect:(int)arg1;
- (void)didNotConnect:(int)arg1 error:(id)arg2;
- (void)disconnect;
- (void)disconnectAfterReading;
- (void)disconnectAfterReadingAndWriting;
- (void)disconnectAfterWriting;
- (BOOL)doAccept:(int)arg1;
- (void)doConnectTimeout;
- (void)doReadData;
- (void)doReadEOF;
- (void)doReadTimeout;
- (void)doReadTimeoutWithExtension:(double)arg1;
- (void)doWriteData;
- (void)doWriteTimeout;
- (void)doWriteTimeoutWithExtension:(double)arg1;
- (void)endConnectTimeout;
- (void)endCurrentRead;
- (void)endCurrentWrite;
- (id)errnoError;
- (id)errnoErrorWithReason:(id)arg1;
- (void)flushSSLBuffers;
- (void)getDelegate:(id *)arg1 delegateQueue:(id *)arg2;
- (void)getInterfaceAddress4:(id *)arg1 address6:(id *)arg2 fromDescription:(id)arg3 port:(unsigned short)arg4;
- (id)init;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 socketQueue:(id)arg3;
- (id)initWithSocketQueue:(id)arg1;
@property(readonly) BOOL isConnected;
@property(readonly) BOOL isDisconnected;
@property(readonly) BOOL isIPv4;
@property(getter=isIPv4Enabled) BOOL IPv4Enabled;
@property(getter=isIPv4PreferredOverIPv6) BOOL IPv4PreferredOverIPv6;
@property(readonly) BOOL isIPv6;
@property(getter=isIPv6Enabled) BOOL IPv6Enabled;
@property(readonly) BOOL isSecure;
@property(readonly) NSData *localAddress;
@property(readonly) NSString *localHost;
- (id)localHost4;
- (id)localHost6;
- (id)localHostFromSocket4:(int)arg1;
- (id)localHostFromSocket6:(int)arg1;
@property(readonly) unsigned short localPort;
- (unsigned short)localPort4;
- (unsigned short)localPort6;
- (unsigned short)localPortFromSocket4:(int)arg1;
- (unsigned short)localPortFromSocket6:(int)arg1;
- (void)lookup:(int)arg1 didFail:(id)arg2;
- (void)lookup:(int)arg1 didSucceedWithAddress4:(id)arg2 address6:(id)arg3;
- (void)markSocketQueueTargetQueue:(id)arg1;
- (void)maybeClose;
- (void)maybeDequeueRead;
- (void)maybeDequeueWrite;
- (void)maybeStartTLS;
- (id)otherError:(id)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (BOOL)preConnectWithInterface:(id)arg1 error:(id *)arg2;
- (float)progressOfReadReturningTag:(long long *)arg1 bytesDone:(unsigned long long *)arg2 total:(unsigned long long *)arg3;
- (float)progressOfWriteReturningTag:(long long *)arg1 bytesDone:(unsigned long long *)arg2 total:(unsigned long long *)arg3;
- (void)readDataToData:(id)arg1 withTimeout:(double)arg2 buffer:(id)arg3 bufferOffset:(unsigned long long)arg4 maxLength:(unsigned long long)arg5 tag:(long long)arg6;
- (void)readDataToData:(id)arg1 withTimeout:(double)arg2 buffer:(id)arg3 bufferOffset:(unsigned long long)arg4 tag:(long long)arg5;
- (void)readDataToData:(id)arg1 withTimeout:(double)arg2 maxLength:(unsigned long long)arg3 tag:(long long)arg4;
- (void)readDataToData:(id)arg1 withTimeout:(double)arg2 tag:(long long)arg3;
- (void)readDataToLength:(unsigned long long)arg1 withTimeout:(double)arg2 buffer:(id)arg3 bufferOffset:(unsigned long long)arg4 tag:(long long)arg5;
- (void)readDataToLength:(unsigned long long)arg1 withTimeout:(double)arg2 tag:(long long)arg3;
- (void)readDataWithTimeout:(double)arg1 buffer:(id)arg2 bufferOffset:(unsigned long long)arg3 maxLength:(unsigned long long)arg4 tag:(long long)arg5;
- (void)readDataWithTimeout:(double)arg1 buffer:(id)arg2 bufferOffset:(unsigned long long)arg3 tag:(long long)arg4;
- (void)readDataWithTimeout:(double)arg1 tag:(long long)arg2;
- (id)readMaxedOutError;
- (id)readTimeoutError;
- (void)resumeReadSource;
- (void)resumeWriteSource;
- (void)setDelegate:(id)arg1 delegateQueue:(id)arg2;
- (void)setDelegate:(id)arg1 delegateQueue:(id)arg2 synchronously:(BOOL)arg3;
- (void)setDelegate:(id)arg1 synchronously:(BOOL)arg2;
- (void)setDelegateQueue:(id)arg1 synchronously:(BOOL)arg2;
@property(retain) id userData;
- (void)setupReadAndWriteSourcesForNewlyConnectedSocket:(int)arg1;
- (void)setupReadTimerWithTimeout:(double)arg1;
- (void)setupWriteTimerWithTimeout:(double)arg1;
- (int)socket4FD;
- (int)socket6FD;
- (int)socketFD;
- (struct SSLContext *)sslContext;
- (id)sslError:(int)arg1;
- (int)sslReadWithBuffer:(void *)arg1 length:(unsigned long long *)arg2;
- (int)sslWriteWithBuffer:(const void *)arg1 length:(unsigned long long *)arg2;
- (void)ssl_continueSSLHandshake;
- (void)ssl_shouldTrustPeer:(BOOL)arg1 stateIndex:(int)arg2;
- (void)ssl_startTLS;
- (void)startConnectTimeout:(double)arg1;
- (void)startTLS:(id)arg1;
- (void)suspendReadSource;
- (void)suspendWriteSource;
- (void)synchronouslySetDelegate:(id)arg1;
- (void)synchronouslySetDelegate:(id)arg1 delegateQueue:(id)arg2;
- (void)synchronouslySetDelegateQueue:(id)arg1;
- (void)unmarkSocketQueueTargetQueue:(id)arg1;
- (BOOL)usingCFStreamForTLS;
- (BOOL)usingSecureTransportForTLS;
- (void)writeData:(id)arg1 withTimeout:(double)arg2 tag:(long long)arg3;
- (id)writeTimeoutError;

@end
