//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DYDeviceRepository : NSObject
{
    struct unordered_map<unsigned long long, DYDevice *, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, DYDevice *>>> _deviceMap;
    int _lock;
}

+ (id)sharedDeviceRepository;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_allDevicesInner;
- (id)allDevices;
- (id)deviceMatchingDeviceInfo:(id)arg1;
- (id)init;
- (void)registerDevice:(id)arg1;

@end

