//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTFilePath.h>

@class NSArray;

@interface DVTFilePath (IDESourceControlStatus)
+ (id)containerTypeIdentifiersKeyedByImportantSubpaths;
+ (id)importantSubpathsKeyedByContainerTypeIdentifier;
@property(readonly) DVTFilePath *IDESourceControl_containerFilePath;
- (id)IDESourceControl_containerFilePathIncludingAssetCatalogs:(BOOL)arg1;
@property(readonly) NSArray *IDESourceControl_importantSubpaths;
- (id)IDESourceControl_importantSubpathsWithFileType:(id)arg1;
- (void)associateWorkingTree:(id)arg1;
- (void)associateWorkingTreeItem:(id)arg1;
- (void)removeAssociatedWorkingTree:(id)arg1;
- (void)removeAssociatedWorkingTreeItem:(id)arg1;
- (id)workingTree;
- (id)workingTreeItem;
- (void)workingTreeItemWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)workingTreeItem_createIfNecessary:(BOOL)arg1;
@end

