//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXFosterParent.h>

#import <DevToolsInterface/PBXUIDeletionAssistant-Protocol.h>

@interface PBXBuildPhaseGroup : PBXFosterParent <PBXUIDeletionAssistant>
{
}

+ (id)buildPhaseImage;
- (BOOL)acceptsDraggedItem:(id)arg1;
- (BOOL)acceptsItem:(id)arg1;
- (BOOL)allowsEditing;
- (BOOL)allowsEditingOfChildren;
- (void)buildFileAdded:(id)arg1;
- (void)buildFileRemoved:(id)arg1;
- (void)buildFileReordered:(id)arg1;
- (BOOL)canDelete;
- (void)dealloc;
- (void)deleteApplicableElements:(id)arg1 fromModule:(id)arg2;
- (id)displayName;
- (id)groupTreeDisplayName;
- (id)iconImage;
- (void)insertItems:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)outlineView:(id)arg1 acceptDropOfDraggedFiles:(id)arg2 withDraggingInfo:(id)arg3 item:(id)arg4 childIndex:(long long)arg5 forModule:(id)arg6;
- (BOOL)outlineView:(id)arg1 acceptDropOfDraggedItems:(id)arg2 forPaths:(id)arg3 withDraggingInfo:(id)arg4 item:(id)arg5 childIndex:(long long)arg6 forModule:(id)arg7;
- (BOOL)outlineView:(id)arg1 acceptDropOfDraggedItems:(id)arg2 withDraggingInfo:(id)arg3 item:(id)arg4 childIndex:(long long)arg5 forModule:(id)arg6;
- (unsigned long long)outlineView:(id)arg1 validateDropOfDraggedFiles:(id)arg2 withDraggingInfo:(id)arg3 proposedItem:(id)arg4 proposedChildIndex:(long long)arg5 forModule:(id)arg6;
- (unsigned long long)outlineView:(id)arg1 validateDropOfDraggedItems:(id)arg2 withDraggingInfo:(id)arg3 proposedItem:(id)arg4 proposedChildIndex:(long long)arg5 forModule:(id)arg6;
- (void)removeItem:(id)arg1;
- (void)renameItem:(id)arg1;
- (void)setRepresentedObject:(id)arg1;
- (void)uiParentWillChange;
- (BOOL)willGenerateNotifications;

@end

