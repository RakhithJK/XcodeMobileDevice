//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@protocol XCSUICreateBotTriggerCreateCellViewDelegate;

@interface XCSUICreateBotTriggerCreateCellView : NSTableCellView
{
    BOOL _isPostIntegration;
    id <XCSUICreateBotTriggerCreateCellViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)addRunScriptTrigger:(id)arg1;
- (void)addSendEmailTrigger:(id)arg1;
@property __weak id <XCSUICreateBotTriggerCreateCellViewDelegate> delegate; // @synthesize delegate=_delegate;
@property BOOL isPostIntegration; // @synthesize isPostIntegration=_isPostIntegration;

@end

