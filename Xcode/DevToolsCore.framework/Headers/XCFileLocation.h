//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsCore/NSCopying-Protocol.h>

@class NSString;

@interface XCFileLocation : NSObject <NSCopying>
{
    NSString *_filePath;
    double _timestamp;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)filePath;
- (id)initFromDeserializer:(id)arg1;
- (id)initWithFilePath:(id)arg1;
- (double)timestamp;
- (void)writeToSerializer:(id)arg1;

@end

