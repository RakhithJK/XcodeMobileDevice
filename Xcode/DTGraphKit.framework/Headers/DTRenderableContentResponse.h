//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group;

@interface DTRenderableContentResponse : NSObject
{
    BOOL _cancelled;
    unsigned long long _status;
    id _content;
    unsigned long long _serialNumber;
    NSObject<OS_dispatch_group> *_group;
}

- (void).cxx_destruct;
- (void)_cancel;
- (BOOL)_isFinished;
@property(retain, nonatomic) id content; // @synthesize content=_content;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
@property(readonly, nonatomic, getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic) unsigned long long serialNumber; // @synthesize serialNumber=_serialNumber;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;

@end

