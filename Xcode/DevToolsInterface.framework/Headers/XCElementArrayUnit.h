//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/XCElementUnit.h>

@class NSMutableArray;

@interface XCElementArrayUnit : XCElementUnit
{
    NSMutableArray *_filteredObjects;
    NSMutableArray *_filteredObjectsForElements;
    NSMutableArray *_elementsForFilteredObjects;
    NSMutableArray *_elementsBetweenObjects;
}

+ (id)keyPathsForValuesAffectingObjects;
- (void)_obtainFilteredArrayFrom:(id)arg1;
- (void)_recalculateStoredArraysForAnchor:(struct NSObject *)arg1;
- (void)_releaseValuesArrayUnit;
- (void)_tableSelectionDidChangeForTable:(id)arg1 anchor:(struct NSObject *)arg2;
- (BOOL)anchor:(struct NSObject *)arg1 confirmRepresentedObject:(id)arg2;
- (void)anchor:(struct NSObject *)arg1 createLayoutWithinFace:(id)arg2;
- (void)anchor:(struct NSObject *)arg1 didChangeRepresentedObject:(id)arg2 previousObject:(id)arg3;
- (void)anchor:(struct NSObject *)arg1 initialRepresentedObject:(id)arg2;
- (void)anchorChangeLayout:(struct NSObject *)arg1;
- (struct NSObject *)createLayoutWithinFace:(id)arg1 betweenObject:(id)arg2 andObject:(id)arg3;
- (struct NSObject *)createLayoutWithinFace:(id)arg1 forObject:(id)arg2;
- (void)dealloc;
- (id)filterAndSortObjects:(id)arg1;
- (id)newObjectUnitForObject:(id)arg1;
- (BOOL)willChangeLayoutForObjects:(id)arg1 fromObjects:(id)arg2;

@end

