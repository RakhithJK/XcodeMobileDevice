//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

@class DVTControllerContentView, DVTScopeBarView, NSSegmentedControl;
@protocol DVTScopeBarContentController;

@interface DVTScopeBarController : DVTViewController
{
    NSSegmentedControl *_dismissButton;
    DVTScopeBarView *_scopeBarView;
    DVTControllerContentView *_contentView;
    DVTViewController<DVTScopeBarContentController> *_contentViewController;
    BOOL _showsDismissButton;
}

- (void).cxx_destruct;
- (void)_adjustSubviews;
@property int borderSides;
@property(retain) DVTViewController<DVTScopeBarContentController> *contentViewController; // @synthesize contentViewController=_contentViewController;
- (void)dismissButtonAction:(id)arg1;
- (id)initUsingDefaultNib;
- (id)initWithContentViewController:(id)arg1;
- (void)loadView;
@property(readonly) double preferredScopeBarHeight;
- (void)primitiveInvalidate;
@property(nonatomic) BOOL showsDismissButton; // @synthesize showsDismissButton=_showsDismissButton;

@end

