//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <XCSUI/XCSUIBotDefintionEditorViewController-Protocol.h>

@class DVTStackBacktrace, NSString, XCSUIBotDefinitionContext, XCSUIBotDefinition_TriggersEditor;

@interface XCSUIBotDefinitionEditor_NotificationsCapsule : IDEViewController <XCSUIBotDefintionEditorViewController>
{
    XCSUIBotDefinitionContext *_definitionContext;
    XCSUIBotDefinition_TriggersEditor *_triggersEditor;
}

+ (id)title;
- (void).cxx_destruct;
- (void)commitChanges;
@property(retain, nonatomic) XCSUIBotDefinitionContext *definitionContext; // @synthesize definitionContext=_definitionContext;
- (void)loadView;
- (void)primitiveInvalidate;
@property(retain, nonatomic) XCSUIBotDefinition_TriggersEditor *triggersEditor; // @synthesize triggersEditor=_triggersEditor;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

