//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class XCSBot;

@interface XCUIBotSummaryViewDataSource : NSObject
{
    XCSBot *_bot;
}

- (void).cxx_destruct;
@property(retain, nonatomic) XCSBot *bot; // @synthesize bot=_bot;
- (void)queryDataSourceWithItemsCount:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
