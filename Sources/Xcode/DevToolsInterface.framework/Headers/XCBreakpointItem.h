//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface XCBreakpointItem : NSObject
{
    NSString *_name;
    NSString *_index;
    NSString *_address;
    NSString *_binary;
}

+ (id)itemWithName:(id)arg1 index:(id)arg2 address:(id)arg3 binary:(id)arg4;
- (id)children;
- (void)dealloc;
- (id)iconImage;
- (id)index;
- (id)name;
- (void)setName:(id)arg1;
- (void)setindex:(id)arg1;
- (id)shlib;
- (id)symbolName;

@end

