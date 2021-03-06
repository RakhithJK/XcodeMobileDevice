//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class IDECompletionDestinationManager, IDENavigableItem, NSArray;

@protocol IDECompletionDestinationDelegate <NSObject>
- (BOOL)destinationManager:(IDECompletionDestinationManager *)arg1 shouldAddItemToMenu:(IDENavigableItem *)arg2;
- (void)destinationManagerGroupDidChange:(IDECompletionDestinationManager *)arg1;
- (void)destinationManagerWorkspaceDidChange:(IDECompletionDestinationManager *)arg1;
- (NSArray *)targetWorkspacesForDestinationManager:(IDECompletionDestinationManager *)arg1;
@end

