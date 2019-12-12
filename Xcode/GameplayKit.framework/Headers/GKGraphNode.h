//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameplayKit/NSCoding-Protocol.h>

@class NSArray, NSMutableArray;

@interface GKGraphNode : NSObject <NSCoding>
{
    NSMutableArray *_connectedNodes;
    struct GKCGraphNode *_cGraphNode;
}

+ (id)node;
- (void).cxx_destruct;
- (void)addConnection:(id)arg1 bidirectional:(BOOL)arg2;
- (void)addConnectionsToNodes:(id)arg1 bidirectional:(BOOL)arg2;
- (struct GKCGraphNode *)cGraphNode;
@property(readonly, nonatomic) NSArray *connectedNodes;
- (float)costToNode:(id)arg1;
- (void)dealloc;
- (void)deleteCGraphNode;
- (void)encodeWithCoder:(id)arg1;
- (float)estimatedCostToNode:(id)arg1;
- (id)findPathFromNode:(id)arg1;
- (id)findPathToNode:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (struct GKCGraphNode *)makeCGraphNode;
- (id)mutConnectedNodes;
- (void)removeConnection:(id)arg1;
- (void)removeConnectionsToNodes:(id)arg1 bidirectional:(BOOL)arg2;

@end

