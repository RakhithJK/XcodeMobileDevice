//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class PBXProjectIndexBTree;
@protocol OS_dispatch_queue;

@interface PBXProjectIndexBTreeEnumerator : NSObject
{
    PBXProjectIndexBTree *_btree;
    _pbxbtreecursor_23e470bf _cursor;
    NSObject<OS_dispatch_queue> *_treeAccessQueue;
}

- (unsigned int)firstValue;
- (id)initWithBTree:(id)arg1;
- (unsigned int)lastValue;
- (unsigned int)nextValue;
- (unsigned int)nextValueForKey:(const void *)arg1;
- (unsigned int)previousValue;
- (unsigned int)valueForKey:(const void *)arg1;

@end

