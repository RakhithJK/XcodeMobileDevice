//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, PBXExecutable;

@interface XCAppleScriptLaunchArgument : NSObject
{
    long long _index;
    PBXExecutable *_executable;
    NSString *_name;
    BOOL _active;
}

- (void)_setActive:(BOOL)arg1;
- (void)_setName:(id)arg1;
- (BOOL)active;
- (id)argumentEntries;
- (void)dealloc;
- (id)executable;
- (void)handleMoveCommand:(id)arg1;
- (long long)index;
- (id)init;
- (id)name;
- (id)objectSpecifier;
- (void)setActive:(BOOL)arg1;
- (void)setExecutable:(id)arg1;
- (void)setIndex:(long long)arg1;
- (void)setName:(id)arg1;

@end

