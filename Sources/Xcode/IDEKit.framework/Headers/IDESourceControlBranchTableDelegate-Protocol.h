//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class DVTSourceControlBranch, IDEWorkspace, NSError;

@protocol IDESourceControlBranchTableDelegate <NSObject>

@optional
- (void)didRemoveBranch;
- (void)displayError:(NSError *)arg1;
- (void)setSelectedBranch:(DVTSourceControlBranch *)arg1;
- (void)willRemoveBranch;
- (IDEWorkspace *)workspace;
@end

