//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, DVTFilePath, IDEFileReference, NSDate, NSImage, NSString;

@interface IDESnapshotProjectItem : NSObject <IDEKeyDrivenNavigableItemRepresentedObject>
{
    DVTFilePath *_projectLocation;
    int _projectStatus;
    NSDate *_lastOpenedDate;
    NSString *_projectTypeString;
    NSString *_statusString;
    BOOL _isCurrentlyOpen;
    DVTFilePath *_workspaceArenaLocation;
}

+ (id)keyPathsForValueAffectingDetailedStatusString;
- (void).cxx_destruct;
- (void)_updateStatus;
- (void)assignPropertiesFromAnotherProjectItem:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)detailedStatusString;
@property(readonly) unsigned long long hash;
@property(nonatomic) BOOL isCurrentlyOpen; // @synthesize isCurrentlyOpen=_isCurrentlyOpen;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSDate *lastOpenedDate;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) NSString *navigableItem_name;
@property(retain, nonatomic) DVTFilePath *projectLocation; // @synthesize projectLocation=_projectLocation;
@property(readonly) int projectStatus; // @synthesize projectStatus=_projectStatus;
@property(readonly) NSString *projectTypeString; // @synthesize projectTypeString=_projectTypeString;
@property(retain) DVTFilePath *workspaceArenaLocation; // @synthesize workspaceArenaLocation=_workspaceArenaLocation;
- (id)statusString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSString *navigableItem_accessibleImageDescription;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) BOOL navigableItem_missingReferencedContentIsImportant;
@property(readonly) BOOL navigableItem_referencedContentExists;
@property(readonly) NSString *navigableItem_subtitle;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;

@end

