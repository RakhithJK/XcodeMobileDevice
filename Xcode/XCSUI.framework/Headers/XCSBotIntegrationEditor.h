//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSUI/XCSBotSupportingEditor.h>

@class DVTObservingToken;

@interface XCSBotIntegrationEditor : XCSBotSupportingEditor
{
    DVTObservingToken *_botObserver;
    DVTObservingToken *_integrationObserver;
}

- (void).cxx_destruct;
- (id)cachedChoiceWithTitle:(id)arg1;
- (id)choices;
- (id)integrationInProgressChoices;
- (void)loadView;
- (void)primitiveInvalidate;
- (void)selectDocumentLocations:(id)arg1;
- (void)showLogsTab:(id)arg1;
- (void)viewDidInstall;

@end

