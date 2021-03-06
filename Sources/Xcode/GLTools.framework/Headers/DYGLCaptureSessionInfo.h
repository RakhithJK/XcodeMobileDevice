//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUTools/DYCaptureSessionInfo.h>

@class NSArray;

@interface DYGLCaptureSessionInfo : DYCaptureSessionInfo
{
    BOOL _wasCheckingGLErrors;
    NSArray *_contextsInfo;
    NSArray *_requiredExtensions;
}

+ (id)captureSessionInfoWithCaptureStore:(id)arg1;
- (BOOL)canPlaybackOnDeviceWithInfo:(id)arg1 limitBackwardsCompatibility:(BOOL)arg2 isInternal:(BOOL)arg3;
- (id)contextInfoForContext:(unsigned long long)arg1;
@property(readonly, retain, nonatomic) NSArray *contextsInfo; // @synthesize contextsInfo=_contextsInfo;
- (void)dealloc;
- (void)deleteContexts:(const vector_cfeb9b06 *)arg1;
- (id)initWithCaptureStore:(id)arg1;
@property(readonly, retain, nonatomic) NSArray *requiredExtensions; // @synthesize requiredExtensions=_requiredExtensions;
@property(readonly, nonatomic) BOOL wasCheckingGLErrors; // @synthesize wasCheckingGLErrors=_wasCheckingGLErrors;

@end

