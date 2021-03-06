//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextView.h>

@class DVTTextDocumentLocation, NSArray;

@interface DVTSliceTextView : NSTextView
{
    NSArray *_foundLocations;
    DVTTextDocumentLocation *_currentFoundLocation;
    int _findResultStyle;
}

- (void).cxx_destruct;
- (id)_findResultCurrentGradient;
- (id)_findResultCurrentUnderlineColor;
- (id)_findResultGradient;
- (id)_findResultUnderlineColor;
- (void)_loadColorsFromCurrentTheme;
- (void)drawFoundLocationsInRange:(struct _NSRange)arg1;
@property int findResultStyle; // @synthesize findResultStyle=_findResultStyle;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (void)setCurrentFoundLocation:(id)arg1;
- (void)setFoundLocations:(id)arg1;

@end

