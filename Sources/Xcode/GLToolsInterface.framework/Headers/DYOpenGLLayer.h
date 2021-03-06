//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CAOpenGLLayer.h>

@class NSData;
@protocol DYOpenGLLayerContentProvider;

@interface DYOpenGLLayer : CAOpenGLLayer
{
    struct ImageRenderer _renderer;
    struct ImageInfo _currentImageInfo;
    NSData *_currentImageData;
    NSData *_resolvedImageData;
    BOOL _isRenderbuffer;
    struct dispatch_queue_s *_queue;
    id <DYOpenGLLayerContentProvider> _contentProvider;
    CDUnknownBlockType _postRenderSurfaceBlock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)canDrawInCGLContext:(struct _CGLContextObject *)arg1 pixelFormat:(struct _CGLPixelFormatObject *)arg2 forLayerTime:(double)arg3 displayTime:(const CDStruct_e50ab651 *)arg4;
@property(retain, nonatomic) id <DYOpenGLLayerContentProvider> contentProvider; // @synthesize contentProvider=_contentProvider;
- (struct _CGLPixelFormatObject *)copyCGLPixelFormatForDisplayMask:(unsigned int)arg1;
- (void)drawInCGLContext:(struct _CGLContextObject *)arg1 pixelFormat:(struct _CGLPixelFormatObject *)arg2 forLayerTime:(double)arg3 displayTime:(const CDStruct_e50ab651 *)arg4;
- (BOOL)dumpImage:(id)arg1;
- (id)initWithIdentifer:(id)arg1;
- (void)invalidate;
@property(copy) CDUnknownBlockType postRenderSurfaceBlock; // @synthesize postRenderSurfaceBlock=_postRenderSurfaceBlock;
- (void)releaseCGLContext:(struct _CGLContextObject *)arg1;
- (struct ImageRenderer *)renderer;

@end

