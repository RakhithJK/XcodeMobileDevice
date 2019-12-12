//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSScrollView.h>

@class _DVTScrollViewSeparatorView;

@interface DVTScrollView : NSScrollView
{
    BOOL _handleBoundsOrFrameChangePending;
    _DVTScrollViewSeparatorView *_bottomBorderView;
    id _contentViewBoundsChangeNotificationToken;
    id _documentViewFrameChangeNotificationToken;
    BOOL _showsBorderOnBottom;
    BOOL _borderComesAndGoesBasedOnScrollPosition;
}

- (void).cxx_destruct;
- (void)_conditionallyInstallOrRemoveNotificationObservers;
- (void)_defferedHandleBoundsOrFrameChanged;
- (void)_dvtScrollViewCommonInit;
- (void)_handleBoundsOrFrameChanged;
@property(nonatomic) BOOL borderComesAndGoesBasedOnScrollPosition; // @synthesize borderComesAndGoesBasedOnScrollPosition=_borderComesAndGoesBasedOnScrollPosition;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) BOOL showsBorderOnBottom; // @synthesize showsBorderOnBottom=_showsBorderOnBottom;
- (void)tile;
- (void)viewDidMoveToWindow;

@end
