//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSUI/XCSLocalObject-Protocol.h>

@class NSArray, NSString;

@protocol XCSLocalBot <XCSLocalObject>
- (NSArray *)fetchedIntegrations;
- (NSString *)identifier;
@property(readonly, nonatomic) long long progressValue;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
@end

