//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface XCSEventStreamListener : NSObject
{
    BOOL _watchOwner;
    CDUnknownBlockType _handler;
    id _owner;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property __weak id owner; // @synthesize owner=_owner;
@property BOOL watchOwner; // @synthesize watchOwner=_watchOwner;

@end

