//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface DTKPDataStreamMemoryRecord : NSObject
{
    const void *_buffer;
    unsigned long long _bufferSize;
    CDUnknownBlockType _destructor;
}

- (void).cxx_destruct;
@property(nonatomic) const void *buffer; // @synthesize buffer=_buffer;
@property(nonatomic) unsigned long long bufferSize; // @synthesize bufferSize=_bufferSize;
@property(copy, nonatomic) CDUnknownBlockType destructor; // @synthesize destructor=_destructor;

@end

