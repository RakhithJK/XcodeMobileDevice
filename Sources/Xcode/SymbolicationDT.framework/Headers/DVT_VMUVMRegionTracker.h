//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface DVT_VMUVMRegionTracker : NSObject
{
    unsigned int _task;
    struct _CSTypeRef _symbolicator;
    NSMutableArray *_regionInfoArray;
}

- (unsigned long long)_regionIndexForAddress:(unsigned long long)arg1;
- (void)dealloc;
- (unsigned long long)handleStackLogEvent:(struct mach_stack_logging_record)arg1;
- (id)initWithTask:(unsigned int)arg1 stackLogReader:(id)arg2;
- (id)vmRegionRangeInfoForRange:(struct _VMURange)arg1;

@end

