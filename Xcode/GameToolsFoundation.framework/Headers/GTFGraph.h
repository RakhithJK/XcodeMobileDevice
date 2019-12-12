//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface GTFGraph : NSObject
{
    NSMutableDictionary *_nodes;
}

- (void).cxx_destruct;
- (id)addEdgeFromNode:(id)arg1 to:(id)arg2;
- (id)addNode:(id)arg1;
- (id)allEdges;
- (id)allNodes;
- (struct CGRect)bounds;
- (void)clear;
- (id)connectedComponentContainingNodeWithKey:(id)arg1;
- (id)connectedComponents;
- (id)description;
- (BOOL)hasEdgeFromNode:(id)arg1 to:(id)arg2;
- (BOOL)hasEdgeFromNodeWithKey:(id)arg1 toNodeWithKey:(id)arg2;
- (BOOL)hasNode:(id)arg1;
- (BOOL)hasNodeWithKey:(id)arg1;
- (id)init;
- (id)initFromDictionary:(id)arg1;
- (id)nodeWithKey:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *nodes; // @synthesize nodes=_nodes;
- (void)removeEdge:(id)arg1;
- (void)removeNode:(id)arg1;
- (void)reverseEdge:(id)arg1 flag:(BOOL)arg2;
- (id)sortedNodes;

@end

