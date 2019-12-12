//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <DevToolsInterface/PBXSelectionTarget-Protocol.h>

@class NSBox, NSButton, NSColor, NSString, NSTextField, XCProgressIndicator, __AttributeButton;

@interface PBXAttributedStatusView : NSView <PBXSelectionTarget>
{
    XCProgressIndicator *_progressIndicator;
    BOOL _useLevelControl;
    long long _realHeight;
    NSTextField *_statusField;
    NSColor *_bgColor;
    long long _curPriority;
    NSString *_statusPrefix;
    NSString *_status;
    NSString *_buildMessage;
    NSString *_buildingTargetsMessage;
    long long _warnings;
    long long _errors;
    long long _analyzerResults;
    unsigned long long _resultCode;
    __AttributeButton *_warningsView;
    __AttributeButton *_errorsView;
    __AttributeButton *_analyzerResultsView;
    __AttributeButton *_buildingTargetsView;
    NSButton *_resultView;
    __AttributeButton *_compatibilityConflictsView;
    BOOL _listenForProjectNotifications;
    id _objectToObserve;
    BOOL _preserveNonFadingStatus;
    BOOL _hasAddedObservers;
    BOOL _drawTopBorder;
    NSBox *_bezel;
}

+ (id)analyzerResultIcon;
+ (id)buildIcon;
+ (id)compatibilityConflictIcon;
+ (id)createStatusView;
+ (id)errorIcon;
+ (void)initialize;
+ (void)postBuildMessage:(id)arg1 forObject:(id)arg2 allBuildables:(id)arg3 remainingBuildables:(id)arg4 lastActiveBuildable:(id)arg5 errors:(long long)arg6 warnings:(long long)arg7 analyzerResults:(long long)arg8 resultCode:(unsigned long long)arg9;
+ (void)postBuildMessage:(id)arg1 forObject:(id)arg2 allBuildables:(id)arg3 remainingBuildables:(id)arg4 lastActiveBuildable:(id)arg5 errors:(long long)arg6 warnings:(long long)arg7 analyzerResults:(long long)arg8 resultCode:(unsigned long long)arg9 progress:(long long)arg10;
+ (void)postBuildMessage:(id)arg1 forObject:(id)arg2 allBuildables:(id)arg3 remainingBuildables:(id)arg4 lastActiveBuildable:(id)arg5 errors:(long long)arg6 warnings:(long long)arg7 analyzerResults:(long long)arg8 resultCode:(unsigned long long)arg9 progress:(long long)arg10 target:(id)arg11;
+ (void)postStatusMessage:(id)arg1 forObject:(id)arg2;
+ (void)postStatusMessage:(id)arg1 forObject:(id)arg2 progress:(long long)arg3;
+ (id)statusViewFont;
+ (BOOL)useThreadedAnimation;
+ (id)warningIcon;
- (void)_analyzerResultClickAction:(id)arg1;
- (void)_buildStateNotification:(id)arg1;
- (void)_buildingTargetsClickAction:(id)arg1;
- (void)_clearCompletedStatusOperation:(id)arg1;
- (void)_compatibilityConflictsClickAction:(id)arg1;
- (void)_errorClickAction:(id)arg1;
- (void)_positionViews;
- (void)_resultClickAction:(id)arg1;
- (void)_statusMessageNotification:(id)arg1;
- (void)_warningClickAction:(id)arg1;
- (void)addObservers;
- (BOOL)autoFades;
- (id)backgroundColor;
- (void)clear;
- (void)clearForPriority:(long long)arg1;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)drawsTopBorder;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (BOOL)listenForProjectNotifications;
- (void)mouseUp:(id)arg1;
- (void)observeObjectForMessages:(id)arg1;
- (id)performAction:(id)arg1 withSelection:(id)arg2;
- (void)resetCursorRects;
- (void)setAutoFade:(BOOL)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCompatibilityConflictCount:(unsigned long long)arg1;
- (void)setDrawsTopBorder:(BOOL)arg1;
- (void)setListenForProjectNotifications:(BOOL)arg1;
- (void)setProgressStyle:(unsigned long long)arg1;
- (void)setStatus:(id)arg1;
- (void)setStatusPrefix:(id)arg1;
- (void)setStatusString:(id)arg1;
- (void)setStatusString:(id)arg1 andProgress:(long long)arg2 priority:(long long)arg3;
- (void)setStatusString:(id)arg1 priority:(long long)arg2;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToSuperview:(id)arg1;

@end

