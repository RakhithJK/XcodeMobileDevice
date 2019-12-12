//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSCore/XCSLocalIntegrationLoadMoreItem.h>

#import <XCSUI/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>
#import <XCSUI/IDELogNavigatorItem-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, IDEFileReference, NSImage, NSString;

@interface XCSLocalIntegrationLoadMoreItem (IDE) <IDEKeyDrivenNavigableItemRepresentedObject, IDELogNavigatorItem>
+ (id)keyPathsAffectingProgress;
- (long long)currentStep;
@property(readonly, nonatomic) NSImage *image;
- (BOOL)isValid;
- (void)loadMore;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) NSString *navigableItem_name;
- (long long)progress;
- (long long)progressValue;
- (unsigned long long)result;
- (void)setProgressValue:(long long)arg1;
@property(readonly, nonatomic) NSString *subtitle;
- (id)title;
- (void)update;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSString *navigableItem_accessibleImageDescription;
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

