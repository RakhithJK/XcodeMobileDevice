//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMapTable, XCPath;

@interface XCMountedFileSystem : NSObject
{
    int _deviceNumber;
    XCPath *_mountPath;
    NSMapTable *_inodesToVNodes;
}

+ (id)mountedFileSystemWithDeviceNumber:(int)arg1;
- (void)addVNode:(id)arg1;
- (void)dealloc;
- (id)description;
- (int)deviceNumber;
- (id)initWithDeviceNumber:(int)arg1 statfsInfo:(const struct statfs *)arg2;
- (id)mountPath;
- (void)noteFileSystemWasUnmounted;
- (void)removeVNode:(id)arg1;
- (id)vnodeForInodeNumber:(unsigned long long)arg1;

@end

