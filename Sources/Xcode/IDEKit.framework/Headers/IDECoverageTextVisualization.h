//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTTextVisualization.h>

@class IDESchemeActionCodeCoverageFile, NSArray;

@interface IDECoverageTextVisualization : DVTTextVisualization
{
    NSArray *_processedUncoveredRanges;
    NSArray *_processedCoveredRanges;
    IDESchemeActionCodeCoverageFile *_coverageFile;
    unsigned long long _showFlagsForLine;
    id _textViewSelectionChangedObserver;
}

+ (id)colorFromUserDefaults:(id)arg1;
+ (id)coveredSegmentColor;
+ (unsigned long long)defaultDrawOrdering;
+ (id)uncoveredSegmentColor;
- (void).cxx_destruct;
@property(retain, nonatomic) IDESchemeActionCodeCoverageFile *coverageFile; // @synthesize coverageFile=_coverageFile;
- (void)dealloc;
- (void)drawUnderTextInRect:(struct CGRect)arg1;
- (void)findCoverageRangesInDocumentLocation:(id)arg1;
- (void)highlightLocation:(id)arg1;
- (id)initWithCoverageFile:(id)arg1;
@property(retain, nonatomic) NSArray *processedCoveredRanges; // @synthesize processedCoveredRanges=_processedCoveredRanges;
@property(retain, nonatomic) NSArray *processedUncoveredRanges; // @synthesize processedUncoveredRanges=_processedUncoveredRanges;
@property(nonatomic) unsigned long long showFlagsForLine; // @synthesize showFlagsForLine=_showFlagsForLine;
@property(retain, nonatomic) id textViewSelectionChangedObserver; // @synthesize textViewSelectionChangedObserver=_textViewSelectionChangedObserver;
- (void)tearDown;
- (void)unhighlight;

@end

