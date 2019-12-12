//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/NSPathCellDelegate-Protocol.h>

@class IDENavigableItem, IDEPathCell, IDEPathComponentCell, NSArray, NSMenu, NSMenuItem, NSString;

@protocol IDEPathCellDelegate <NSPathCellDelegate>

@optional
- (NSString *)pathCell:(IDEPathCell *)arg1 accessibilityDescriptionForPathComponentCell:(IDEPathComponentCell *)arg2 atIndex:(unsigned long long)arg3;
- (struct CGPoint)pathCell:(IDEPathCell *)arg1 adjustPopupMenuLocation:(struct CGPoint)arg2;
- (BOOL)pathCell:(IDEPathCell *)arg1 beginDragForComponentCell:(IDEPathComponentCell *)arg2;
- (NSArray *)pathCell:(IDEPathCell *)arg1 childItemsForItem:(IDENavigableItem *)arg2;
- (void)pathCell:(IDEPathCell *)arg1 didEndDragForComponentCell:(IDEPathComponentCell *)arg2;
- (void)pathCell:(IDEPathCell *)arg1 didUpdateMenu:(NSMenu *)arg2;
- (NSMenuItem *)pathCell:(IDEPathCell *)arg1 menuItemForNavigableItem:(IDENavigableItem *)arg2 defaultMenuItem:(NSMenuItem *)arg3;
- (BOOL)pathCell:(IDEPathCell *)arg1 performAlternateReveal:(IDENavigableItem *)arg2 fromFrame:(struct CGRect)arg3;
- (BOOL)pathCell:(IDEPathCell *)arg1 shouldEnableSelection:(IDENavigableItem *)arg2;
- (BOOL)pathCell:(IDEPathCell *)arg1 shouldInitiallyShowMenuSearch:(IDENavigableItem *)arg2;
- (BOOL)pathCell:(IDEPathCell *)arg1 shouldPopUpMenuForPathComponentCell:(IDEPathComponentCell *)arg2 item:(IDENavigableItem *)arg3;
- (BOOL)pathCell:(IDEPathCell *)arg1 shouldSeparateDisplayOfChildItemsForItem:(IDENavigableItem *)arg2;
- (unsigned long long)pathCell:(IDEPathCell *)arg1 textAlignmentOfTitleForPathComponentCell:(IDEPathComponentCell *)arg2 atIndex:(unsigned long long)arg3;
- (NSString *)pathCell:(IDEPathCell *)arg1 titleForPathComponentCell:(IDEPathComponentCell *)arg2 atIndex:(unsigned long long)arg3;
- (NSString *)pathCell:(IDEPathCell *)arg1 toolTipForPathComponentCell:(IDEPathComponentCell *)arg2 atIndex:(unsigned long long)arg3;
- (NSString *)pathCellNoSelectionTitle;
@end
