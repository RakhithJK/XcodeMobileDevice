//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XDBase/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol XDUMLComment, XDUMLElement, XDUMLNamedElement, XDUMLStereotype;

@protocol XDUMLElement <NSObject>
- (void)addElement:(id <XDUMLElement>)arg1 toBucketNamed:(NSString *)arg2 atIndex:(unsigned long long)arg3;
- (void)addStereotype:(id <XDUMLStereotype>)arg1;
- (void)createElementsBucketWithName:(NSString *)arg1 allowsDuplicates:(BOOL)arg2 preserveInsertOrder:(BOOL)arg3;
- (id)createUniqueElementID;
- (void)deleteElementsBucketWithName:(NSString *)arg1;
- (id <XDUMLNamedElement>)elementForName:(NSString *)arg1 inBucketNamed:(NSString *)arg2;
- (unsigned long long)elementsCountInBucketNamed:(NSString *)arg1;
- (NSArray *)elementsInAllBuckets;
- (NSArray *)elementsInBucketNamed:(NSString *)arg1;
- (unsigned long long)indexForElement:(id <XDUMLElement>)arg1 inBucketNamed:(NSString *)arg2;
- (void)insertObject:(id <XDUMLComment>)arg1 inOwnedCommentsAtIndex:(unsigned long long)arg2;
- (id <XDUMLStereotype>)newStereotypeWithName:(NSString *)arg1;
- (NSArray *)ownedComments;
- (NSArray *)ownedElements;
- (id <XDUMLElement>)owner;
- (void)removeElement:(id <XDUMLElement>)arg1 fromBucketNamed:(NSString *)arg2;
- (void)removeElementAtIndex:(unsigned long long)arg1 fromBucketNamed:(NSString *)arg2;
- (void)removeObjectFromOwnedCommentsAtIndex:(unsigned long long)arg1;
- (void)removeStereotype:(id <XDUMLStereotype>)arg1;
- (void)setOwner:(id <XDUMLElement>)arg1;
- (void)setUniqueElementID:(id)arg1;
- (NSArray *)stereotypes;
- (id)uniqueElementID;
@end
