//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@class XCSTrigger;

@interface XCSNotificationRequest : XCSObject
{
    XCSTrigger *_trigger;
}

+ (id)notificationRequestWithTrigger:(id)arg1;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithTrigger:(id)arg1;
- (id)saveRepresentation;
@property(readonly, nonatomic) XCSTrigger *trigger; // @synthesize trigger=_trigger;

@end
