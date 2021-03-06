//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DYShaderAnalyzer;
@protocol DYShaderProfilerDelegate;

@interface DYShaderProfiler : NSObject
{
    id <DYShaderProfilerDelegate> _delegate;
    struct dispatch_queue_s *_queue;
    DYShaderAnalyzer *_shaderAnalyzer;
    int _pendingRequestLock;
    unsigned int _pendingRequest;
}

+ (void)_initLLDB;
+ (BOOL)isDisassemblerAvailable;
+ (BOOL)isFramebufferFetchWithEvents:(void *)arg1 type:(unsigned int)arg2;
+ (BOOL)isRenderBeginWithEvents:(void *)arg1 type:(unsigned int)arg2;
+ (BOOL)isRenderEndWithEvents:(void *)arg1 type:(unsigned int)arg2;
+ (id)newShaderProfilerWithDelegate:(id)arg1;
+ (void)removeTemporaryDirectory;
+ (id)temporaryDirectory;
- (void).cxx_destruct;
- (BOOL)_isAlwaysEnabled;
- (void)calculateFrameTime:(id)arg1 result:(id)arg2;
- (void)calculateUtilizations:(id)arg1 result:(id)arg2;
- (void)dealloc;
@property(readonly, nonatomic) __weak id <DYShaderProfilerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)initializeShaderAnalyzer;
- (BOOL)isDeviceSupported;
- (id)profileFrame;
- (id)profileShader:(id)arg1;

@end

