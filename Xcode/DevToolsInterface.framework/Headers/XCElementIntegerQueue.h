//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface XCElementIntegerQueue : NSObject
{
    long long count;
    long long firstOrCapacity;
    long long readCount;
    long long *numbers;
}

- (void)addNumber:(long long)arg1;
- (void)consumeNumber;
- (void)dealloc;
- (void)finalize;
- (long long)readNumber;

@end

