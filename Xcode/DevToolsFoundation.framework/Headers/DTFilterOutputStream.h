//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsFoundation/DTOutputStream.h>

@protocol DTOutputStreams;

@interface DTFilterOutputStream : DTOutputStream
{
    id <DTOutputStreams> _nextOutputStream;
}

- (void)close;
- (void)dealloc;
- (void)flush;
- (id)init;
- (id)initWithNextOutputStream:(id)arg1;
- (id)lastOutputStream;
- (id)nextOutputStream;
- (void)setNextOutputStream:(id)arg1;
- (void)writeBytes:(const char *)arg1 length:(unsigned long long)arg2;

@end

