//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HexFiend/HFByteArray.h>

@class NSMutableData;

@interface HFFullMemoryByteArray : HFByteArray
{
    NSMutableData *data;
}

- (id)byteSlices;
- (void)copyBytes:(char *)arg1 range:(CDStruct_91ee6ea3)arg2;
- (void)dealloc;
- (id)init;
- (void)insertByteSlice:(id)arg1 inRange:(CDStruct_91ee6ea3)arg2;
- (unsigned long long)length;
- (id)subarrayWithRange:(CDStruct_91ee6ea3)arg1;

@end
