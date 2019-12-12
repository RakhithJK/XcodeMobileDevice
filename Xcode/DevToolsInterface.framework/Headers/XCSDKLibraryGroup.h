//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsInterface/XCLibraryGroupProtocol-Protocol.h>

@class NSArray, XCSDKPackage;

@interface XCSDKLibraryGroup : NSObject <XCLibraryGroupProtocol>
{
    NSArray *_libraries;
    XCSDKPackage *_sdkPackage;
}

- (void)dealloc;
- (id)displayName;
- (id)dylibs;
- (id)frameworks;
- (id)initWithSDKPackage:(id)arg1;
- (BOOL)isLeaf;
- (id)libraries;
- (id)librariesForType:(id)arg1;
- (int)libraryCount;
- (id)objectfiles;
@property(copy) XCSDKPackage *sdkPackage; // @synthesize sdkPackage=_sdkPackage;
- (void)setLibraries:(id)arg1;

@end

