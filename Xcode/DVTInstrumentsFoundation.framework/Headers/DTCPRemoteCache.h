//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DTCPRemoteCache : NSObject
{
    id *_locks;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)kindToString:(long long)arg1;
+ (id)sharedDTCPRemoteCache;
- (id)_directoryForDevice:(id)arg1;
- (id)_filePathForKind:(long long)arg1 fileType:(id)arg2 directoryURL:(id)arg3;
- (BOOL)accessFileKind:(long long)arg1 device:(id)arg2 fileType:(id)arg3 block:(CDUnknownBlockType)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

