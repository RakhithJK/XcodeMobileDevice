//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableData;

@interface XCHierarchicalOutputLog : NSObject
{
    NSMutableData *_outputData;
    unsigned long long _indentationLevel;
    BOOL _needsIndentation;
}

- (id)data;
- (void)dealloc;
- (void)decreaseNestingLevel;
- (void)increaseNestingLevel;
- (void)indent:(id)arg1;
- (void)indentln:(id)arg1;
- (id)init;
- (id)initForWritingWithMutableData:(id)arg1;
- (void)outdent:(id)arg1;
- (void)outdentln:(id)arg1;
- (void)print:(id)arg1;
- (void)println;
- (void)println:(id)arg1;

@end

