//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsSupport/TSOutputStream.h>

@protocol TSOutputStreams;

@interface TSFilterOutputStream : TSOutputStream
{
    id <TSOutputStreams> _outputStream;
}

- (void)close;
- (void)dealloc;
- (void)flush;
- (id)init;
- (id)initWithOutputStream:(id)arg1;
- (id)outputStream;
- (void)writeBytes:(const void *)arg1 length:(unsigned long long)arg2;

@end

