//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface XRFrameRing : NSObject
{
    struct vector<XRFrameActivityManager *__weak, std::__1::allocator<XRFrameActivityManager *__weak>> _content;
    unsigned char _currentPos;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)assignActivityManager:(id)arg1 frame:(id)arg2;
@property(readonly, nonatomic) unsigned char frameCount;
- (id)init;
- (id)initWithMinorFrameCount:(unsigned char)arg1;
- (id)nextReadyActivityManager;
- (void)setCommutator:(id)arg1;
- (void)shutdown;

@end

