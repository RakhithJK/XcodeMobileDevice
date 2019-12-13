//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XDBase/NSCoding-Protocol.h>
#import <XDBase/XDUMLElement-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol XDUMLElement;

@interface XDUMLElementImp : NSObject <XDUMLElement, NSCoding>
{
    NSMutableDictionary *_elementsByBucket;
    id _uniqueElementID;
    id <XDUMLElement> _owner;
}

- (void)_convertBucketStorage:(id)arg1;
- (void)addElement:(id)arg1 toBucketNamed:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)addStereotype:(id)arg1;
- (id)bucketContainer;
- (void)createElementsBucketWithName:(id)arg1 allowsDuplicates:(BOOL)arg2 preserveInsertOrder:(BOOL)arg3;
- (id)createUniqueElementID;
- (void)dealloc;
- (void)decodeBucketName:(id)arg1 withCoder:(id)arg2;
- (void)deleteElementsBucketWithName:(id)arg1;
- (id)elementForName:(id)arg1 inBucketNamed:(id)arg2;
- (unsigned long long)elementsCountInBucketNamed:(id)arg1;
- (id)elementsInAllBuckets;
- (id)elementsInBucketNamed:(id)arg1;
- (void)encodeBucketName:(id)arg1 withCoder:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)indexForElement:(id)arg1 inBucketNamed:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)insertObject:(id)arg1 inOwnedCommentsAtIndex:(unsigned long long)arg2;
- (BOOL)lazyCreateBucketNamed:(id)arg1;
- (void)namedElement:(id)arg1 inBucket:(id)arg2 wasRenamedFrom:(id)arg3 to:(id)arg4;
- (id)newStereotypeWithName:(id)arg1;
- (id)ownedComments;
- (id)ownedElements;
- (id)owner;
- (void)removeElement:(id)arg1 fromBucketNamed:(id)arg2;
- (void)removeElementAtIndex:(unsigned long long)arg1 fromBucketNamed:(id)arg2;
- (void)removeObjectFromOwnedCommentsAtIndex:(unsigned long long)arg1;
- (void)removeStereotype:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setUniqueElementID:(id)arg1;
- (BOOL)shouldEncodeBucketNamed:(id)arg1;
- (id)stereotypes;
- (id)uniqueElementID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
