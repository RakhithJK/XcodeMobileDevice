//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DVTCrashLogStackFrameParser : NSObject
{
    NSString *_identifier;
    double _priority;
}

- (void).cxx_destruct;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithParserIdentifier:(id)arg1 priority:(double)arg2;
- (id)parsedStackFrameFromText:(id)arg1;
@property(readonly) double priority; // @synthesize priority=_priority;

@end

