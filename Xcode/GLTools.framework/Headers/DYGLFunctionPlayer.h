//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUTools/DYFunctionPlayer.h>

@class DYGLCaptureSessionInfo, DYIntKeyedDictionary, NSMutableDictionary;

@interface DYGLFunctionPlayer : DYFunctionPlayer
{
    BOOL _lastCommandWasFrameBoundary;
    BOOL _didWarnClientStorageApple;
    BOOL _did_warn_texture_storage;
    BOOL _didWarnVertexAttribDivisorSnowLeopard;
    DYGLCaptureSessionInfo *_captureSessionInfo;
    struct unordered_map<unsigned long long, std::__1::unique_ptr<GPUTools::Playback::GL::ContextInfo, std::__1::default_delete<GPUTools::Playback::GL::ContextInfo>>, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::unique_ptr<GPUTools::Playback::GL::ContextInfo, std::__1::default_delete<GPUTools::Playback::GL::ContextInfo>>>>> _contextInfoMap;
    DYIntKeyedDictionary *_sharegroupMap;
    BOOL _recreateContexts;
    struct _CGLContextObject *_ctx;
    struct ContextInfo *_currentContextInfo;
    NSMutableDictionary *_ctx_dict;
    NSMutableDictionary *_sharegroup_dict;
    struct __GLIContextRec *_gli_ctx;
    struct __GLIFunctionDispatchRec *_disp;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_dispatchGLFunction;
@property(readonly, retain, nonatomic) DYGLCaptureSessionInfo *captureSessionInfo; // @synthesize captureSessionInfo=_captureSessionInfo;
@property(readonly, nonatomic) struct _CGLContextObject *context; // @synthesize context=_ctx;
@property(readonly, retain, nonatomic) NSMutableDictionary *contextDictionary; // @synthesize contextDictionary=_ctx_dict;
- (struct _CGLContextObject *)contextForContextIdentifier:(unsigned long long)arg1;
@property(readonly, nonatomic) struct ContextInfo *currentContextInfo; // @synthesize currentContextInfo=_currentContextInfo;
- (void)dealloc;
- (void)deleteCurrentContext;
- (void)executeGraphicsFunction;
- (void)executePlatformFunction;
@property(readonly, nonatomic) struct __GLIContextRec *gliContext; // @synthesize gliContext=_gli_ctx;
@property(readonly, nonatomic) struct __GLIFunctionDispatchRec *gliDispatch; // @synthesize gliDispatch=_disp;
- (id)initWithCaptureStore:(id)arg1;
- (void)initializeNewSharegroupInfoDictionary;
- (struct ContextInfo *)newContextInfo;
- (void)performPostGraphicsFunctionDispatchActions:(BOOL)arg1;
@property(nonatomic) BOOL recreateContexts; // @synthesize recreateContexts=_recreateContexts;
- (void)setCurrentContext:(unsigned long long)arg1;
- (void)updateCurrentStateWithNewContext:(id)arg1 contextID:(unsigned long long)arg2 sharegroupID:(unsigned long long)arg3;

@end

