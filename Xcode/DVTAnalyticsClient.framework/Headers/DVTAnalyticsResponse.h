//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface DVTAnalyticsResponse : NSObject
{
    NSDictionary *_payload;
}

+ (id)responseFromData:(id)arg1 httpResponse:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
- (id)initWithPayload:(id)arg1;
@property(readonly) NSDictionary *payload; // @synthesize payload=_payload;

@end

