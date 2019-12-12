//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface DSMPublisher : NSObject
{
    NSMutableArray *m_docSetGroups;
    NSString *m_identifier;
    NSString *m_displayName;
}

+ (id)allCompanies;
+ (id)allPublishers;
+ (void)initialize;
+ (id)publisherForGroup:(id)arg1;
- (void)addDocSetGroup:(id)arg1;
- (void)delloc;
- (id)description;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=m_displayName;
@property(retain, nonatomic) NSMutableArray *docSetGroups; // @synthesize docSetGroups=m_docSetGroups;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=m_identifier;
- (id)initWithGroup:(id)arg1 identifier:(id)arg2 displayName:(id)arg3;
- (long long)publisherCompareDisplayName:(id)arg1;
@property(readonly, nonatomic) NSArray *sortedDocSetUpdatesInPublisherGroups;
- (void)unsubscribe;

@end

