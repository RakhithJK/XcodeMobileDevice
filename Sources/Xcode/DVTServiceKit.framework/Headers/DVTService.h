//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTRequestHandler, NSArray, NSMutableArray, NSMutableDictionary, NSRunLoop;

@interface DVTService : NSObject
{
    NSRunLoop *_runLoop;
    struct __CFRunLoopSource *_terminationRunLoopSource;
    NSMutableArray *_adaptors;
    NSMutableDictionary *_requestHandlers;
    BOOL _running;
    int _exitStatus;
    DVTRequestHandler *_defaultRequestHandler;
}

+ (id)service;
- (void).cxx_destruct;
- (void)_mainRunLoop;
- (void)_setUpTermination;
- (void)_tearDownTermination;
@property(readonly, copy) NSArray *adaptors;
@property(retain) DVTRequestHandler *defaultRequestHandler; // @synthesize defaultRequestHandler=_defaultRequestHandler;
- (id)dispatchRequest:(id)arg1;
@property int exitStatus; // @synthesize exitStatus=_exitStatus;
- (void)exitWithStatus:(int)arg1;
- (id)handlerForRequest:(id)arg1;
- (id)init;
@property(getter=isRunning) BOOL running; // @synthesize running=_running;
- (void)registerAdaptor:(id)arg1;
- (void)registerRequestHandler:(id)arg1 forKey:(id)arg2;
- (void)removeRequestHandlerForKey:(id)arg1;
- (id)requestHandlerForKey:(id)arg1;
- (void)run;
@property(readonly, copy) NSArray *socketNames;

@end

