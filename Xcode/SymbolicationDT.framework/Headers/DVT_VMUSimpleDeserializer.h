//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SymbolicationDT/DVT_VMUAbstractSerializer.h>

__attribute__((visibility("hidden")))
@interface DVT_VMUSimpleDeserializer : DVT_VMUAbstractSerializer
{
    void *_cache;
    CDUnknownBlockType _destructor;
}

- (unsigned int *)_deserializeValues:(unsigned int)arg1;
- (const char *)copyDeserializedNullTerminatedBytes;
- (id)copyDeserializedString;
- (id)copyDeserializedStringWithID:(unsigned int)arg1;
- (void)dealloc;
- (unsigned int)deserialize32;
- (unsigned long long)deserialize64;
- (id)initWithBuffer:(const void *)arg1 length:(unsigned int)arg2 destructor:(CDUnknownBlockType)arg3;
- (void)skipFields:(unsigned int)arg1;

@end

