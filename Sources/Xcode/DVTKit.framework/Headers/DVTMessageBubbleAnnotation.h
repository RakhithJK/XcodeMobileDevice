//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTTextAnnotation.h>

@class NSImage, NSString;
@protocol DVTMessageBubbleAnnotationDelegate;

@interface DVTMessageBubbleAnnotation : DVTTextAnnotation
{
    NSString *_messageBubbleText;
    NSImage *_messageBubbleIcon;
    BOOL _miniaturized;
    BOOL _wantsPreferredSizeAndPosition;
    BOOL _wantsFlatStyle;
    unsigned long long _messageBubbleTextAlignment;
    NSString *_messageBubbleToolTipText;
}

- (void).cxx_destruct;
- (id)annotationDisplayDescription;
- (id)currentStateInTextView:(id)arg1;
@property(retain) id <DVTMessageBubbleAnnotationDelegate> delegate;
- (void)drawLineHighlightInRect:(struct CGRect)arg1 textView:(id)arg2;
- (BOOL)drawsHighlightedRanges;
- (BOOL)drawsLineHighlight;
- (void)fontAndColorThemeChanged:(id)arg1;
- (id)init;
- (void)invalidateDisplayAndLayoutIfNeeded:(BOOL)arg1;
@property(nonatomic, getter=isMiniaturized) BOOL miniaturized; // @synthesize miniaturized=_miniaturized;
@property(retain, nonatomic) NSImage *messageBubbleIcon; // @synthesize messageBubbleIcon=_messageBubbleIcon;
@property int messageBubbleStackPolicy;
@property(copy, nonatomic) NSString *messageBubbleText; // @synthesize messageBubbleText=_messageBubbleText;
@property unsigned long long messageBubbleTextAlignment; // @synthesize messageBubbleTextAlignment=_messageBubbleTextAlignment;
@property(copy, nonatomic) NSString *messageBubbleToolTipText; // @synthesize messageBubbleToolTipText=_messageBubbleToolTipText;
- (double)preferredWidthForAvailableWidth:(double)arg1;
- (void)setNeedsInvalidate;
- (void)setVisible:(BOOL)arg1;
@property BOOL wantsFlatStyle; // @synthesize wantsFlatStyle=_wantsFlatStyle;
@property BOOL wantsPreferredSizeAndPosition; // @synthesize wantsPreferredSizeAndPosition=_wantsPreferredSizeAndPosition;
- (struct CGRect)sidebarMarkerRectForFirstLineRect:(struct CGRect)arg1;
- (BOOL)wantsMergeAnnotations;

@end

