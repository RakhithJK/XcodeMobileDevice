//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDESourceControlOperationInfo.h>

#import <IDEKit/IDESourceControlBranchingOperationInfoProtocol-Protocol.h>

@class IDESourceControlBranch, NSMutableDictionary, NSString;

@interface IDESourceControlMergeOperationInfo : IDESourceControlOperationInfo <IDESourceControlBranchingOperationInfoProtocol>
{
    IDESourceControlBranch *_mergeBranch;
    IDESourceControlBranch *_targetBranch;
    NSString *_currentRevisionIdentifier;
    NSString *_branchRevisionIdentifier;
    NSString *_ancestorRevisionIdentifier;
    NSString *_remoteURLToMerge;
    NSMutableDictionary *_itemsWithConflicts;
    BOOL _landingMerge;
}

- (void).cxx_destruct;
@property(copy) NSString *ancestorRevisionIdentifier; // @synthesize ancestorRevisionIdentifier=_ancestorRevisionIdentifier;
@property(copy) NSString *branchRevisionIdentifier; // @synthesize branchRevisionIdentifier=_branchRevisionIdentifier;
@property(readonly) unsigned long long conflictCount;
@property(copy) NSString *currentRevisionIdentifier; // @synthesize currentRevisionIdentifier=_currentRevisionIdentifier;
@property(readonly) NSMutableDictionary *itemsWithConflicts; // @synthesize itemsWithConflicts=_itemsWithConflicts;
@property BOOL landingMerge; // @synthesize landingMerge=_landingMerge;
@property(retain) IDESourceControlBranch *mainBranch; // @synthesize mainBranch=_targetBranch;
@property(retain) IDESourceControlBranch *otherBranch; // @synthesize otherBranch=_mergeBranch;
- (id)processDistributedMergeInfoWithProgressBlock:(CDUnknownBlockType)arg1 isSingleOperation:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)processInfoWithProgressBlock:(CDUnknownBlockType)arg1 isSingleOperation:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)processMergeInfoWithProgressBlock:(CDUnknownBlockType)arg1 isSingleOperation:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(readonly) NSString *remoteURLToMerge; // @synthesize remoteURLToMerge=_remoteURLToMerge;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
