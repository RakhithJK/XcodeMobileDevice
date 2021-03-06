//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEAssistant.h>

@class DVTColoredSpinner, NSImage, NSString, NSTimer, XCSUICreateBotAssistantContext;

@interface XCSUICreateBotCreatingAssistant : IDEAssistant
{
    BOOL _canCancel;
    BOOL _credentialsHaveBeenUploaded;
    BOOL _updatingBot;
    NSTimer *_minimumProgressIndicatorDurationTimer;
    NSTimer *_dismissAssistantTimer;
    DVTColoredSpinner *_coloredSpinner;
}

+ (id)keyPathsForValuesAffectingCanFinish;
+ (id)keyPathsForValuesAffectingCompletedAndWaitedMinimumDuration;
+ (id)keyPathsForValuesAffectingCreateBotAssistantContext;
+ (id)keyPathsForValuesAffectingStatusImage;
+ (id)keyPathsForValuesAffectingStatusSubtext;
+ (id)keyPathsForValuesAffectingStatusText;
- (void).cxx_destruct;
- (void)_clearMinimumProgressIndicatorDurationTimer;
- (void)_dismissAssistant;
- (void)_handleCommitAndIntegrateOptionsWithCreateBotAssistantContext:(id)arg1;
- (id)assistantTitle;
@property(nonatomic) BOOL canCancel; // @synthesize canCancel=_canCancel;
- (BOOL)canFinish;
- (BOOL)canGoBack;
@property DVTColoredSpinner *coloredSpinner; // @synthesize coloredSpinner=_coloredSpinner;
@property(readonly, nonatomic) BOOL completedAndWaitedMinimumDuration;
@property(readonly) XCSUICreateBotAssistantContext *createBotAssistantContext;
@property(nonatomic) BOOL credentialsHaveBeenUploaded; // @synthesize credentialsHaveBeenUploaded=_credentialsHaveBeenUploaded;
@property(retain, nonatomic) NSTimer *dismissAssistantTimer; // @synthesize dismissAssistantTimer=_dismissAssistantTimer;
- (void)finishWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSTimer *minimumProgressIndicatorDurationTimer; // @synthesize minimumProgressIndicatorDurationTimer=_minimumProgressIndicatorDurationTimer;
@property(nonatomic) BOOL updatingBot; // @synthesize updatingBot=_updatingBot;
@property(readonly, nonatomic) NSImage *statusImage;
@property(readonly, nonatomic) NSString *statusSubtext;
@property(readonly, nonatomic) NSString *statusText;
- (void)viewDidInstall;
- (void)viewWillUninstall;
- (void)willGoNextOrFinish;

@end

