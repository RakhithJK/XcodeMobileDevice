//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTCrashPointRecord, NSArray;

@interface DVTCrashPointRecordObserved : NSObject
{
    DVTCrashPointRecord *_crashPointRecord;
    NSArray *_observationTokens;
}

- (void).cxx_destruct;
@property(readonly) DVTCrashPointRecord *crashPointRecord; // @synthesize crashPointRecord=_crashPointRecord;
- (id)initWithCrashPointRecord:(id)arg1 observationTokens:(id)arg2;
@property(readonly) NSArray *observationTokens; // @synthesize observationTokens=_observationTokens;

@end
