//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUToolsCore/DYBaseSocketTransport.h>

@class NSURL;

@interface DYUNIXDomainSocketTransport : DYBaseSocketTransport
{
    int _mode;
    struct dispatch_source_s *_connSource;
}

- (void)_connectClient:(id)arg1 future:(id)arg2;
- (void)_connectServer:(id)arg1 future:(id)arg2;
- (void)_invalidate;
- (id)connect;
- (id)initWithMode:(int)arg1;
@property(retain, nonatomic) NSURL *url; // @dynamic url;

@end

