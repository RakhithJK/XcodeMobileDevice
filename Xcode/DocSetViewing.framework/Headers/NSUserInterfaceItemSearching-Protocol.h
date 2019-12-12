//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DocSetViewing/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol NSUserInterfaceItemSearching <NSObject>
- (NSArray *)localizedTitlesForItem:(id)arg1;
- (void)searchForItemsWithSearchString:(NSString *)arg1 resultLimit:(long long)arg2 matchedItemHandler:(void (^)(NSArray *))arg3;

@optional
- (void)performActionForItem:(id)arg1;
- (void)showAllHelpTopicsForSearchString:(NSString *)arg1;
@end

