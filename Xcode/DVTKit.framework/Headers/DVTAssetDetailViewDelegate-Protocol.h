//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/NSObject-Protocol.h>

@class DVTAssetDetailView, DVTChoice, DVTLibraryDetailController, DVTViewController;

@protocol DVTAssetDetailViewDelegate <NSObject>
- (void)assetDetailView:(DVTAssetDetailView *)arg1 didInstallDetailController:(DVTLibraryDetailController *)arg2;
- (void)assetDetailView:(DVTAssetDetailView *)arg1 sizeViewController:(DVTViewController *)arg2 toFitSuggestedSize:(struct CGSize)arg3;
- (void)assetDetailView:(DVTAssetDetailView *)arg1 userDidSelectTab:(DVTChoice *)arg2;
@end
