//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DTKPKDebugCodeSet, NSArray, NSMutableDictionary, NSString;

@interface DTKTraceTapTriggerConfig : NSObject
{
    NSMutableDictionary *_dict;
    DTKPKDebugCodeSet *_kdebugFilterSet;
}

+ (id)deviceSignPostConfig;
- (void).cxx_destruct;
- (id)_GetTriggerDict;
- (void)_SetTriggerDict:(id)arg1;
- (void)addAction:(int)arg1;
@property(nonatomic) unsigned long long callstackFrameDepth;
- (void)enumerateActions:(CDUnknownBlockType)arg1;
- (void)enumeratePIDsInFilter:(CDUnknownBlockType)arg1;
- (void)enumerateThreadStatesToInclude:(CDUnknownBlockType)arg1;
@property(nonatomic) unsigned long long eventLimitHint;
@property(readonly, nonatomic) BOOL hasThreadStateFilter;
- (void)includePID:(int)arg1;
- (void)includeThreadState:(unsigned int)arg1;
- (id)init;
- (id)initWithPlist:(id)arg1;
- (id)initWithUUIDString:(id)arg1;
@property(nonatomic) BOOL isAllProcesses;
@property(retain, nonatomic) DTKPKDebugCodeSet *kdebugFilter;
@property(nonatomic) int kind;
- (id)plist;
@property(retain, nonatomic) NSString *pmiCounterName;
@property(retain, nonatomic) NSArray *pmiDeviceIndices;
@property(retain, nonatomic) NSString *pmiEventMnemonic;
@property(nonatomic) unsigned long long pmiEventThreshold;
@property(nonatomic) unsigned long long sampleInterval;
- (void)setHasThreadStateFilter:(BOOL)arg1;
- (void)setUuid:(id)arg1;
@property(readonly, retain, nonatomic) NSString *uuid;

@end

