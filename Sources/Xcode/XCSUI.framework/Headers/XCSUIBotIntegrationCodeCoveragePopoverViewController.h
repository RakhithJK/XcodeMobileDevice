//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

@class NSImage, NSString, NSTextField, XCSUIBotIntegrationCodeCoveragePopoverBadgesView;

@interface XCSUIBotIntegrationCodeCoveragePopoverViewController : DVTViewController
{
    NSString *_integrationTitle;
    NSString *_timestamp;
    NSString *_codeCoverageSuccessText;
    NSString *_codeCoverageFailedText;
    unsigned long long _codeCoverage;
    CDUnknownBlockType _clickHandler;
    NSImage *_coverageFailedIcon;
    NSImage *_coverageSucceededIcon;
    NSTextField *_integrationTextField;
    XCSUIBotIntegrationCodeCoveragePopoverBadgesView *_countsView;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType clickHandler; // @synthesize clickHandler=_clickHandler;
@property unsigned long long codeCoverage; // @synthesize codeCoverage=_codeCoverage;
@property(copy) NSString *codeCoverageFailedText; // @synthesize codeCoverageFailedText=_codeCoverageFailedText;
@property(copy) NSString *codeCoverageSuccessText; // @synthesize codeCoverageSuccessText=_codeCoverageSuccessText;
@property __weak XCSUIBotIntegrationCodeCoveragePopoverBadgesView *countsView; // @synthesize countsView=_countsView;
@property(retain) NSImage *coverageFailedIcon; // @synthesize coverageFailedIcon=_coverageFailedIcon;
@property(retain) NSImage *coverageSucceededIcon; // @synthesize coverageSucceededIcon=_coverageSucceededIcon;
@property __weak NSTextField *integrationTextField; // @synthesize integrationTextField=_integrationTextField;
@property(copy) NSString *integrationTitle; // @synthesize integrationTitle=_integrationTitle;
@property(copy) NSString *timestamp; // @synthesize timestamp=_timestamp;
- (void)showIntegrationCodeCoverageResults:(id)arg1;
- (void)updateBadges;

@end

