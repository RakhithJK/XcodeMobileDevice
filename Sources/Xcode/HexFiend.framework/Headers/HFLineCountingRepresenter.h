//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HexFiend/HFRepresenter.h>

@interface HFLineCountingRepresenter : HFRepresenter
{
    double lineHeight;
    unsigned long long digitsToRepresentContentsLength;
    unsigned long long minimumDigitCount;
    unsigned long long lineNumberFormat;
    double preferredWidth;
    double digitAdvance;
}

+ (struct CGPoint)defaultLayoutPosition;
- (void)controllerDidChange:(unsigned long long)arg1;
- (id)createView;
- (void)cycleLineNumberFormat;
- (unsigned long long)digitCount;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)initializeView;
- (unsigned long long)lineNumberFormat;
- (unsigned long long)minimumDigitCount;
- (double)minimumViewWidthForBytesPerLine:(unsigned long long)arg1;
- (void)postMinimumViewWidthChangedNotification;
- (double)preferredWidth;
- (void)setLineNumberFormat:(unsigned long long)arg1;
- (void)setMinimumDigitCount:(unsigned long long)arg1;
- (void)setStartingLineNumber:(unsigned long long)arg1;
- (void)updateBytesPerLine;
- (void)updateDigitAdvanceWithFont:(id)arg1;
- (void)updateFontAndLineHeight;
- (void)updateLineNumberFormat;
- (void)updateLineRangeToDraw;
- (void)updateMinimumViewWidth;

@end

