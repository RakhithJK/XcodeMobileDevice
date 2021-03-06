//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTCrashLog, NSError, NSString;

@interface DVTCrashLogRecord : NSObject
{
    NSString *_crashLogIdentifier;
    DVTCrashLog *_locatedCrashLog;
    NSError *_locationError;
}

- (void).cxx_destruct;
@property(readonly) NSString *crashLogIdentifier; // @synthesize crashLogIdentifier=_crashLogIdentifier;
- (id)description;
- (id)initWithCrashLogIdentifier:(id)arg1 locatedCrashLog:(id)arg2 locationError:(id)arg3;
@property(readonly) DVTCrashLog *locatedCrashLog; // @synthesize locatedCrashLog=_locatedCrashLog;
@property(readonly) NSError *locationError; // @synthesize locationError=_locationError;

@end

