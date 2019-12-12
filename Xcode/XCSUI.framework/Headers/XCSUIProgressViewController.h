//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

@class NSArray, NSButton, NSProgressIndicator, NSStackView, NSString, NSTextField, NSView, XCSIntegration;

@interface XCSUIProgressViewController : DVTViewController
{
    BOOL _progressVisible;
    BOOL _cancellable;
    BOOL _canShareScreen;
    NSString *_headlineText;
    NSString *_primaryText;
    NSString *_secondaryText;
    double _progress;
    XCSIntegration *_currentIntegration;
    NSArray *_upcomingIntegrations;
    CDUnknownBlockType _cancellationHandler;
    CDUnknownBlockType _shareScreenHandler;
    NSTextField *_progressMessageField;
    NSProgressIndicator *_progressBar;
    NSTextField *_primaryTextField;
    NSTextField *_secondaryTextField;
    NSButton *_cancelButton;
    NSButton *_shareScreenButton;
    NSView *_upcomingHeadingView;
    NSView *_upcomingFooterView;
    NSTextField *_additionalIntegrationsLabel;
    NSStackView *_upcomingStackView;
}

- (void).cxx_destruct;
- (id)accessibilityLabel;
@property __weak NSTextField *additionalIntegrationsLabel; // @synthesize additionalIntegrationsLabel=_additionalIntegrationsLabel;
- (void)awakeFromNib;
@property(nonatomic) BOOL canShareScreen; // @synthesize canShareScreen=_canShareScreen;
- (void)cancel:(id)arg1;
@property __weak NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) BOOL cancellable; // @synthesize cancellable=_cancellable;
@property(copy, nonatomic) CDUnknownBlockType cancellationHandler; // @synthesize cancellationHandler=_cancellationHandler;
@property(retain, nonatomic) XCSIntegration *currentIntegration; // @synthesize currentIntegration=_currentIntegration;
@property(retain, nonatomic) NSString *headlineText; // @synthesize headlineText=_headlineText;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(retain, nonatomic) NSString *primaryText; // @synthesize primaryText=_primaryText;
@property __weak NSTextField *primaryTextField; // @synthesize primaryTextField=_primaryTextField;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property __weak NSProgressIndicator *progressBar; // @synthesize progressBar=_progressBar;
@property __weak NSTextField *progressMessageField; // @synthesize progressMessageField=_progressMessageField;
@property(nonatomic) BOOL progressVisible; // @synthesize progressVisible=_progressVisible;
@property(retain, nonatomic) NSString *secondaryText; // @synthesize secondaryText=_secondaryText;
@property __weak NSTextField *secondaryTextField; // @synthesize secondaryTextField=_secondaryTextField;
@property __weak NSButton *shareScreenButton; // @synthesize shareScreenButton=_shareScreenButton;
@property(copy) CDUnknownBlockType shareScreenHandler; // @synthesize shareScreenHandler=_shareScreenHandler;
@property(retain) NSView *upcomingFooterView; // @synthesize upcomingFooterView=_upcomingFooterView;
@property(retain) NSView *upcomingHeadingView; // @synthesize upcomingHeadingView=_upcomingHeadingView;
@property(copy, nonatomic) NSArray *upcomingIntegrations; // @synthesize upcomingIntegrations=_upcomingIntegrations;
@property __weak NSStackView *upcomingStackView; // @synthesize upcomingStackView=_upcomingStackView;
- (void)shareScreen:(id)arg1;

@end

