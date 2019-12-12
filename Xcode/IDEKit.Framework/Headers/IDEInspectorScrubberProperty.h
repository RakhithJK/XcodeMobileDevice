//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class DVTStepperTextField, IDEInspectorKeyPath, NSString, NSTextField;

@interface IDEInspectorScrubberProperty : IDEInspectorProperty
{
    IDEInspectorKeyPath *_valueKeyPath;
    NSString *_nilPlaceholder;
    DVTStepperTextField *_scrubber;
    NSTextField *_label;
}

- (void).cxx_destruct;
- (double)baseline;
- (BOOL)canTileIntoColumnsWithMinimumWidth:(double)arg1;
- (BOOL)hasButtons;
- (float)incrementValue;
- (BOOL)integerValues;
@property(retain, nonatomic) NSTextField *label; // @synthesize label=_label;
- (float)maxValue;
- (float)minValue;
- (id)nibName;
- (float)precisionValue;
- (void)refresh;
- (BOOL)roundPrecisionValue;
@property(retain, nonatomic) DVTStepperTextField *scrubber; // @synthesize scrubber=_scrubber;
- (void)setupRefreshTriggersAndConfigure;
- (void)userDidChangeValue:(id)arg1;

@end
