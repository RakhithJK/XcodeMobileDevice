//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTMainStatusAwareButton.h>

#import <DVTKit/NSMenuDelegate-Protocol.h>

@class NSString;

@interface DVTTabBarClippedItemsIndicator : DVTMainStatusAwareButton <NSMenuDelegate>
{
    id _delegate;
}

+ (Class)cellClass;
- (void).cxx_destruct;
- (void)_popUpMenu;
- (id)delegate;
- (void)mouseDown:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)moveUp:(id)arg1;
- (BOOL)needsPanelToBecomeKey;
- (void)performClick:(id)arg1;
- (void)setDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
