//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface IDESourceControlWorkingTreeHolder : NSObject
{
    NSMutableArray *_workingTrees;
}

- (void).cxx_destruct;
- (void)addWorkingTree:(id)arg1;
- (id)navigableItem_identifierForRepresentedObjectAtIndex:(unsigned long long)arg1 inRelationshipKeyPath:(id)arg2;
- (unsigned long long)navigableItem_indexOfRepresentedObjectForIdentifier:(id)arg1 inRelationshipKeyPath:(id)arg2;
@property(readonly) NSMutableArray *workingTrees;

@end

