//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMAMDService;

@interface CAMCAMDConnection : NSObject
{
    CAMAMDService *camdService;
}

- (void).cxx_destruct;
- (id)init;
- (id)responseForRequestKey:(id)arg1;
- (void)startWithAMDConnection:(id)arg1;
@property(readonly) BOOL started;
- (void)stop;
- (id)takeScreenShot;

@end

