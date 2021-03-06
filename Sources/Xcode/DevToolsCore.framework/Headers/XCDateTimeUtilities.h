//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDateFormatter;

@interface XCDateTimeUtilities : NSObject
{
    NSDateFormatter *_shortDateFormatter;
    NSDateFormatter *_shortTimeFormatter;
    NSDateFormatter *_shortDateTimeFormatter;
    NSDateFormatter *_mediumDateTimeFormatter;
    NSDateFormatter *_longDateTimeFormatter;
    NSDateFormatter *_fullDateTimeFormatter;
}

+ (id)sharedDateTimeUtilities;
- (void)dealloc;
@property(readonly) NSDateFormatter *fullDateTimeFormatter; // @synthesize fullDateTimeFormatter=_fullDateTimeFormatter;
- (id)init;
@property(readonly) NSDateFormatter *longDateTimeFormatter; // @synthesize longDateTimeFormatter=_longDateTimeFormatter;
@property(readonly) NSDateFormatter *mediumDateTimeFormatter; // @synthesize mediumDateTimeFormatter=_mediumDateTimeFormatter;
@property(readonly) NSDateFormatter *shortDateFormatter; // @synthesize shortDateFormatter=_shortDateFormatter;
@property(readonly) NSDateFormatter *shortDateTimeFormatter; // @synthesize shortDateTimeFormatter=_shortDateTimeFormatter;
@property(readonly) NSDateFormatter *shortTimeFormatter; // @synthesize shortTimeFormatter=_shortTimeFormatter;

@end

