//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDERecordedThreadCollection.h>

@class NSData, NSString, NSURL;

@interface IDEMemoryData : IDERecordedThreadCollection
{
    BOOL _shouldAutoUpdate;
    BOOL _memoryFaulted;
    BOOL _showsAsMemoryFaulted;
    unsigned long long _startingAddress;
    NSString *_expression;
    unsigned long long _numberOfBytes;
    NSData *_rawMemoryData;
    NSData *_shadowMemoryData;
    NSString *_uuid;
    NSURL *_url;
}

- (void).cxx_destruct;
- (void)_updateUsingExpression:(id)arg1 numberOfBytes:(unsigned long long)arg2;
- (void)autoUpdate;
@property(copy) NSString *expression; // @synthesize expression=_expression;
- (void)gatherAdditionalInformationForAddress:(unsigned long long)arg1 numberOfBytes:(unsigned long long)arg2;
- (id)generateNewURL;
- (id)initWithExpression:(id)arg1 numberOfBytes:(unsigned long long)arg2 process:(id)arg3;
@property(nonatomic, getter=isMemoryFaulted) BOOL memoryFaulted; // @synthesize memoryFaulted=_memoryFaulted;
@property unsigned long long numberOfBytes; // @synthesize numberOfBytes=_numberOfBytes;
- (void)primitiveInvalidate;
@property(copy) NSData *rawMemoryData; // @synthesize rawMemoryData=_rawMemoryData;
@property(copy) NSData *shadowMemoryData; // @synthesize shadowMemoryData=_shadowMemoryData;
@property BOOL shouldAutoUpdate; // @synthesize shouldAutoUpdate=_shouldAutoUpdate;
@property BOOL showsAsMemoryFaulted; // @synthesize showsAsMemoryFaulted=_showsAsMemoryFaulted;
@property unsigned long long startingAddress; // @synthesize startingAddress=_startingAddress;
@property(retain) NSURL *url; // @synthesize url=_url;
- (void)update;
- (void)updateNumberOfBytes:(unsigned long long)arg1;
- (void)updateUsingExpression:(id)arg1;
@property(readonly) NSString *uuid; // @synthesize uuid=_uuid;

@end
