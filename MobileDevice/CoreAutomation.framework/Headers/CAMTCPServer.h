//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreAutomation/CAMIPServer-Protocol.h>

@class NSString;
@protocol CAMTCPServerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface CAMTCPServer : NSObject <CAMIPServer>
{
    BOOL useSSL;
    struct ssl_ctx_st *ctx;
    struct ssl_st *ssl;
    struct bio_st *bio_err;
    NSString *sslKeyfile;
    NSString *sslPassword;
    NSString *sslDHFile;
    NSString *sslCAList;
    unsigned short v4Port;
    unsigned short v6Port;
    NSObject<OS_dispatch_queue> *requestQueue;
    NSObject<OS_dispatch_source> *v4SocketSource;
    id <CAMTCPServerDelegate> delegate;
}

- (void).cxx_destruct;
- (void)acceptConnectionOnSocket:(int)arg1;
- (void)dealloc;
@property id <CAMTCPServerDelegate> delegate; // @synthesize delegate;
- (id)init;
- (void)initializeCTX;
- (void)loadDHParams;
- (long long)readFromSocket:(int)arg1 intoBuffer:(void *)arg2 ofMaxLength:(unsigned long long)arg3;
@property(copy) NSString *sslCAList; // @synthesize sslCAList;
@property(copy) NSString *sslDHFile; // @synthesize sslDHFile;
@property(copy) NSString *sslKeyfile; // @synthesize sslKeyfile;
@property(copy) NSString *sslPassword; // @synthesize sslPassword;
@property BOOL useSSL; // @synthesize useSSL;
@property unsigned short v4Port; // @synthesize v4Port;
@property unsigned short v6Port; // @synthesize v6Port;
- (BOOL)setupSockets;
- (BOOL)start:(id *)arg1;
- (BOOL)stop;
- (long long)writeToSocket:(int)arg1 fromBuffer:(const void *)arg2 ofLength:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

