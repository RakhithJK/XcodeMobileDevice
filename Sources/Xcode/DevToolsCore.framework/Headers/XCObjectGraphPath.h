//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface XCObjectGraphPath : NSObject
{
    NSArray *_pathSegmentGIDs;
    NSArray *_pathSegmentNames;
}

- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithSegmentGIDs:(id)arg1 names:(id)arg2;
- (id)pathByAddingSegmentWithGID:(id)arg1 name:(id)arg2;
- (id)pathSegmentGIDs;
- (id)pathSegmentNames;
- (unsigned long long)segmentCount;
- (id)segmentGIDAtIndex:(unsigned long long)arg1;
- (id)segmentNameAtIndex:(unsigned long long)arg1;
- (id)stringRepresentation;

@end

