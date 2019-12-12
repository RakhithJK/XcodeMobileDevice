//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSSet, NSString;

@interface DSANode : NSManagedObject
{
    unsigned int _isInvalidated:1;
    unsigned int _rootNodeStateInitialized:1;
    unsigned int _isRootNode:1;
}

+ (struct __CFSet *)copyNodeIDsForNodes:(id)arg1;
+ (id)nodeTypes;
- (id)URL;
- (id)_cachedTermList;
- (id)_downloadableFiles;
- (id)_dumpStr;
- (void)_findNodes:(id)arg1 inHierarchy:(id)arg2 areSearchable:(BOOL)arg3;
- (BOOL)_isCurrentOrVersionAfter:(int)arg1;
- (id)_namesForPath:(id)arg1;
- (id)_nodePathsWithExistingDescendants:(id)arg1;
- (id)_nodesInHierarchySearchable:(BOOL)arg1;
- (id)_primaryParentUsingNodePaths:(id)arg1;
- (id)_subnodesWithSearchability:(BOOL)arg1;
- (id)anchor;
- (id)apiLanguagesInHierarchy;
- (long long)childCount;
- (id)childWithName:(id)arg1;
- (id)children;
- (void)dealloc;
- (id)docSet;
@property(readonly) unsigned long long documentType;
@property(readonly) DSANode *documentTypeNode;
- (unsigned long long)domain;
- (id)file;
- (void)invalidate;
- (BOOL)isRootNode;
- (BOOL)isSearchable;
- (BOOL)isValid;
- (id)languages;
- (id)name;
- (id)namedPaths;
- (long long)nodeID;
- (id)nodePaths;
- (id)nodeURL;
- (id)nodesInHierarchy;
- (id)parents;
- (id)path;
- (id)primaryNodePath;
- (id)primaryParent;
- (id)relatedNodes;
- (id)searchTerms;
- (id)searchableChildren;
- (id)searchableNodesInHierarchy;
- (void)setRootNode:(BOOL)arg1;
- (unsigned long long)type;
- (id)unsearchableChildren;
- (id)urlString;
- (id)urlsForDownloadableFilesByType;

// Remaining properties
@property(readonly) NSNumber *installDomain; // @dynamic installDomain;
@property(readonly) NSString *kAnchor; // @dynamic kAnchor;
@property(readonly) NSString *kFileName; // @dynamic kFileName;
@property(readonly) NSNumber *kID; // @dynamic kID;
@property(readonly) NSString *kName; // @dynamic kName;
@property(readonly) id kNodeType; // @dynamic kNodeType;
@property(readonly) NSString *kPath; // @dynamic kPath;
@property(readonly) NSNumber *kSubnodeCount; // @dynamic kSubnodeCount;
@property(readonly) NSString *kURL; // @dynamic kURL;
@property(readonly) NSSet *orderedSubnodes; // @dynamic orderedSubnodes;

@end

