//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSCore/XCSWorkerServiceHealth.h>

@class NSDictionary;

@interface XCSServiceHealth : XCSWorkerServiceHealth
{
    NSDictionary *_workers;
}

- (void).cxx_destruct;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
@property(retain, nonatomic) NSDictionary *workers; // @synthesize workers=_workers;

@end

