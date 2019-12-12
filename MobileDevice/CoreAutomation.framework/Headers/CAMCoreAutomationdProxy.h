//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class CAMConnection, NSString;

@interface CAMCoreAutomationdProxy : NSProxy
{
    CAMConnection *_connection;
    NSString *_shortName;
    BOOL _isUserRoot;
}

+ (void)logStatistics:(BOOL)arg1;
+ (id)proxyWithConnection:(id)arg1;
@property(readonly) id asMobile;
@property(readonly) id asRoot;
@property(retain) CAMConnection *connection; // @synthesize connection=_connection;
@property(readonly, retain, nonatomic) CAMConnection *coreautomationdConnection;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)initWithConnection:(id)arg1;
- (id)initWithConnection:(id)arg1 shortName:(id)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;

@end
