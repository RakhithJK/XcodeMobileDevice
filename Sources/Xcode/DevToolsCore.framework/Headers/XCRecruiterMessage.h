//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface XCRecruiterMessage : NSObject
{
    id _messageType;
    id _dictionary;
}

- (void)dealloc;
- (id)init;
- (id)initWithMessageType:(id)arg1;
- (id)initWithMessageType:(id)arg1 andContentDictionary:(id)arg2;
- (id)messageDictionary;
- (id)messageType;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)wireEncode;

@end

