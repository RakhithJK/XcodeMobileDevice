//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/PBXGroup.h>

@interface PBXGroup (PBXDropReceiverAdditions)
- (BOOL)acceptsDraggedItem:(id)arg1;
- (void)insertFiles:(id)arg1 atChildIndex:(unsigned long long)arg2 forModule:(id)arg3;
- (void)insertFiles:(id)arg1 atChildIndex:(unsigned long long)arg2 forModule:(id)arg3 mayCopy:(BOOL)arg4;
- (void)insertItems:(id)arg1 atChildIndex:(unsigned long long)arg2 forModule:(id)arg3;
- (void)insertItems:(id)arg1 atChildIndex:(unsigned long long)arg2 forModule:(id)arg3 mayCopy:(BOOL)arg4;
- (BOOL)outlineView:(id)arg1 acceptDropOfDraggedFiles:(id)arg2 withDraggingInfo:(id)arg3 item:(id)arg4 childIndex:(long long)arg5 forModule:(id)arg6;
- (BOOL)outlineView:(id)arg1 acceptDropOfDraggedItems:(id)arg2 withDraggingInfo:(id)arg3 item:(id)arg4 childIndex:(long long)arg5 forModule:(id)arg6;
- (unsigned long long)outlineView:(id)arg1 validateDropOfDraggedFiles:(id)arg2 withDraggingInfo:(id)arg3 proposedItem:(id)arg4 proposedChildIndex:(long long)arg5 forModule:(id)arg6;
- (unsigned long long)outlineView:(id)arg1 validateDropOfDraggedItems:(id)arg2 withDraggingInfo:(id)arg3 proposedItem:(id)arg4 proposedChildIndex:(long long)arg5 forModule:(id)arg6;
@end
