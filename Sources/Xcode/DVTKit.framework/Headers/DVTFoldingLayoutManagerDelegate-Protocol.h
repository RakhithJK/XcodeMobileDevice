//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/NSLayoutManagerDelegate-Protocol.h>

@class DVTFoldingLayoutManager, NSArray;
@protocol DVTObjectLiteralMediaResourceProvider;

@protocol DVTFoldingLayoutManagerDelegate <NSLayoutManagerDelegate>
- (NSArray *)foldingTokenTypesForLayoutManager:(DVTFoldingLayoutManager *)arg1;

@optional
- (NSArray *)directoriesForLiteralInLayoutManager:(DVTFoldingLayoutManager *)arg1;
- (void)layoutManager:(DVTFoldingLayoutManager *)arg1 didFoldRange:(struct _NSRange)arg2;
- (void)layoutManager:(DVTFoldingLayoutManager *)arg1 didUnfoldRange:(struct _NSRange)arg2;
- (id <DVTObjectLiteralMediaResourceProvider>)mediaResourceProviderForLiteralInLayoutManager:(DVTFoldingLayoutManager *)arg1;
@end

