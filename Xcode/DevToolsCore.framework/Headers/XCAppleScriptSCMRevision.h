//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class PBXFileReference, XCSCMRevisionInfo;

@interface XCAppleScriptSCMRevision : NSObject
{
    PBXFileReference *_fileReference;
    XCSCMRevisionInfo *_revisionEntry;
}

- (id)author;
- (id)commitMessage;
- (void)dealloc;
- (id)fileReference;
- (id)initWithFileReference:(id)arg1 revisionData:(id)arg2;
- (id)name;
- (id)objectSpecifier;
- (id)revision;
- (id)tagName;
- (id)timestamp;

@end

