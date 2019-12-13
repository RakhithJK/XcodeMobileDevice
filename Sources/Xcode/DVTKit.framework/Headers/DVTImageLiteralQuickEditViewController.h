//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTPopoverContentViewController.h>

#import <DVTKit/DVTObjectLiteralQuickEditor-Protocol.h>
#import <DVTKit/NSCollectionViewDataSource-Protocol.h>
#import <DVTKit/NSCollectionViewDelegate-Protocol.h>

@class DVTFilePath, NSArray, NSCollectionView, NSPopover, NSString, NSView;
@protocol DVTImageLiteralQuickEditViewControllerDelegate;

@interface DVTImageLiteralQuickEditViewController : DVTPopoverContentViewController <NSCollectionViewDelegate, NSCollectionViewDataSource, DVTObjectLiteralQuickEditor>
{
    NSPopover *presentingPopover;
    id <DVTImageLiteralQuickEditViewControllerDelegate> _delegate;
    DVTFilePath *_selectedImageFilePath;
    NSArray *_imageFilePaths;
    NSCollectionView *_collectionView;
    NSView *_footerView;
}

+ (struct CGSize)defaultContentSize;
- (void).cxx_destruct;
@property(retain) NSCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)collectionView:(id)arg1 didSelectItemsAtIndexPaths:(id)arg2;
- (id)collectionView:(id)arg1 itemForRepresentedObjectAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
@property(nonatomic) id <DVTImageLiteralQuickEditViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) NSArray *imageFilePaths; // @synthesize imageFilePaths=_imageFilePaths;
- (id)initWithSelectedImageFilePath:(id)arg1 inImageFilePaths:(id)arg2;
- (void)moreButtonClicked:(id)arg1;
@property(nonatomic) __weak NSPopover *presentingPopover; // @synthesize presentingPopover;
@property(retain, nonatomic) DVTFilePath *selectedImageFilePath; // @synthesize selectedImageFilePath=_selectedImageFilePath;
- (void)viewDidLoad;
- (void)viewWillAppear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
