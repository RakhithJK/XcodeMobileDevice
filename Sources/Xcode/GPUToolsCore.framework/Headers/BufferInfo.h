//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface BufferInfo : NSObject
{
    unsigned long long _size;
    unsigned long long _usage;
}

- (void)incrementUsage;
- (id)initWithSize:(unsigned long long)arg1 usage:(unsigned long long)arg2;
- (void)resetUsage;
@property(readonly, nonatomic) unsigned long long size; // @synthesize size=_size;
@property(readonly, nonatomic) unsigned long long usage; // @synthesize usage=_usage;

@end
