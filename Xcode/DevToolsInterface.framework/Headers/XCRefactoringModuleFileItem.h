//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsInterface/XCRefactoringModuleItem-Protocol.h>

@class NSString, PBXFileReference, PBXProject, XCRefactoringFileChangeSet;

@interface XCRefactoringModuleFileItem : NSObject <XCRefactoringModuleItem>
{
    NSString *_filePath;
    XCRefactoringFileChangeSet *_fileChangeSet;
    PBXProject *_project;
    PBXFileReference *_fileReference;
    BOOL _fileEdited;
    NSString *_name;
    BOOL _isWaiting;
    BOOL _previewFinished;
}

- (id)attributedName;
- (void)checkboxClicked;
- (long long)checkboxState;
- (id)childAtIndex:(long long)arg1;
- (void)dealloc;
- (id)description;
- (id)details;
- (void)diffDescriptorsChanged:(id)arg1 fileEdited:(BOOL)arg2;
- (void)drawBackgroundInRect:(struct CGRect)arg1 rowRect:(struct CGRect)arg2;
- (id)fileChangeSet;
- (id)filePath;
- (BOOL)hasChangesToApply;
- (id)icon;
- (id)initWithFilePath:(id)arg1 fileChangeSet:(id)arg2 project:(id)arg3;
- (BOOL)isExpandable;
- (BOOL)isGroupRow;
- (BOOL)isUserEdited;
- (BOOL)isWaiting;
- (BOOL)keepInResultsAfterPreviewFinished;
- (id)name;
- (unsigned long long)numberOfChildren;
- (void)populateComparator:(id)arg1 previewFinished:(BOOL)arg2;
- (void)previewFinishedUpdateComparator:(id)arg1;
- (id)project;
- (void)sessionEndedForComparator:(id)arg1;
- (void)setFileChangeSet:(id)arg1;
- (void)setWaiting:(BOOL)arg1;
- (BOOL)shouldHaveCheckbox;
- (void)updateMergeDirectionsForComparator:(id)arg1;

@end

