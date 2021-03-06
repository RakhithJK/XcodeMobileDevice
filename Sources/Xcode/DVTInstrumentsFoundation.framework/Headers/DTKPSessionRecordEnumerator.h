//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DTKPRecordDecoder;
@protocol DTKPDatastream;

@interface DTKPSessionRecordEnumerator : NSObject
{
    unsigned long long _heartbeatTime;
    BOOL _finalEnumerator;
    unsigned int _triggerCount;
    unsigned int _kdebugTriggerIndex;
    id <DTKPDatastream> _datastream;
    DTKPRecordDecoder *_recordDecoder;
    const unsigned int *_triggerIDsToIndicesArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <DTKPDatastream> datastream; // @synthesize datastream=_datastream;
- (unsigned long long)enumerateRecordsWithBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) BOOL finalEnumerator; // @synthesize finalEnumerator=_finalEnumerator;
- (id)initWithHeartbeatTime:(unsigned long long)arg1;
@property(nonatomic) unsigned int kdebugTriggerIndex; // @synthesize kdebugTriggerIndex=_kdebugTriggerIndex;
@property(retain, nonatomic) DTKPRecordDecoder *recordDecoder; // @synthesize recordDecoder=_recordDecoder;
@property(nonatomic) unsigned int triggerCount; // @synthesize triggerCount=_triggerCount;
@property(nonatomic) const unsigned int *triggerIDsToIndicesArray; // @synthesize triggerIDsToIndicesArray=_triggerIDsToIndicesArray;

@end

