//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class CAMetalLayer, NSOpenGLContext, NSTimer;
@protocol MTLDevice;

@interface JetView : NSView
{
    struct jet_context *_ctx;
    struct jet_framebuffer *_framebuffer;
    CAMetalLayer *_metalLayer;
    id <MTLDevice> _device;
    NSOpenGLContext *_glContext;
    struct jet_texture *_frameBufferColorTexture;
    struct jet_texture *_frameBufferDepthStencilTexture;
    unsigned int _colorRenderBuffer;
    BOOL _didRunOnce;
    double _beginTime;
    NSTimer *_drawTimer;
    struct shared_ptr<jet_fence> _renderFence;
}

+ (BOOL)canRenderToContextType:(unsigned int)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_bindGLContext;
- (void)_commonInit;
- (void)_createContext;
- (void)_renderCallback;
- (void)_reshape;
@property(readonly) struct jet_context *context;
- (unsigned int)contextType;
- (struct jet_texture *)createTextureFromImageNamed:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (void)onInit;
- (void)remakeFramebuffer;
- (void)renderInFramebuffer:(struct jet_framebuffer *)arg1 forTime:(double)arg2;
- (void)runOnce;
- (void)setFrameSize:(struct CGSize)arg1;

@end

