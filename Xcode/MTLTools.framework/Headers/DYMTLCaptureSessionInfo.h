//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUTools/DYCaptureSessionInfo.h>

@class NSArray;

@interface DYMTLCaptureSessionInfo : DYCaptureSessionInfo
{
    unsigned long long _capturedCommandQueueAddress;
    NSArray *_deviceProfiles;
}

+ (id)captureSessionInfoWithCaptureStore:(id)arg1;
- (void).cxx_destruct;
- (BOOL)_isBackwardsCompatible:(id)arg1 isInternal:(BOOL)arg2;
- (BOOL)canPlaybackOnDeviceWithInfo:(id)arg1 limitBackwardsCompatibility:(BOOL)arg2 isInternal:(BOOL)arg3;
@property(readonly, nonatomic) unsigned long long capturedCommandQueueAddress; // @synthesize capturedCommandQueueAddress=_capturedCommandQueueAddress;
@property(readonly, retain, nonatomic) NSArray *deviceProfiles; // @synthesize deviceProfiles=_deviceProfiles;
- (id)initWithCaptureStore:(id)arg1;

@end

