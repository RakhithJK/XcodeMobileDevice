//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DYImageFormatInfo;

__attribute__((visibility("hidden")))
@interface DYImageInfo : NSObject
{
    int _width;
    int _height;
    int _depth;
    int _compressed;
    int _numSamples;
    DYImageFormatInfo *_clientFormatInfo;
    DYImageFormatInfo *_engineFormatInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) DYImageFormatInfo *clientFormatInfo; // @synthesize clientFormatInfo=_clientFormatInfo;
@property(nonatomic) int compressed; // @synthesize compressed=_compressed;
@property(nonatomic) int depth; // @synthesize depth=_depth;
@property(retain, nonatomic) DYImageFormatInfo *engineFormatInfo; // @synthesize engineFormatInfo=_engineFormatInfo;
@property(nonatomic) int height; // @synthesize height=_height;
- (id)initWithClientFormatInfo:(id)arg1 engineFormatInfo:(id)arg2 width:(int)arg3 height:(int)arg4 depth:(int)arg5 compressed:(int)arg6 numSamples:(int)arg7;
@property(nonatomic) int numSamples; // @synthesize numSamples=_numSamples;
@property(nonatomic) int width; // @synthesize width=_width;

@end
