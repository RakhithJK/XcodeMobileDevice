//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class HFTextRepresenter, NSArray, NSData, NSFont, NSTimer, NSWindow;

@interface HFRepresenterTextView : NSView
{
    HFTextRepresenter *representer;
    NSArray *cachedSelectedRanges;
    NSFont *font;
    NSData *data;
    double verticalOffset;
    double horizontalContainerInset;
    double defaultLineHeight;
    double pulseStartTime;
    NSTimer *pulseTimer;
    NSTimer *caretTimer;
    NSWindow *pulseWindow;
    struct CGRect pulseWindowBaseFrameInScreenCoordinates;
    struct CGRect lastDrawnCaretRect;
    struct CGRect caretRectToDraw;
    unsigned long long bytesBetweenVerticalGuides;
    unsigned long long startingLineBackgroundColorIndex;
    NSArray *rowBackgroundColors;
    struct {
        unsigned int antialias:1;
        unsigned int editable:1;
        unsigned int caretVisible:1;
        unsigned int registeredForAppNotifications:1;
        unsigned int withinMouseDown:1;
        unsigned int receivedMouseUp:1;
        unsigned int reserved1:26;
        unsigned int reserved2:32;
    } _hftvflags;
}

- (void)_addLinesFromRanges:(const struct _NSRange *)arg1 count:(unsigned long long)arg2 toIndexSet:(id)arg3;
- (void)_blinkCaret:(id)arg1;
- (void)_drawLineBackgrounds:(struct CGRect)arg1 withLineHeight:(double)arg2 maxLines:(unsigned long long)arg3;
- (void)_forceCaretOnIfHasCaretTimer;
- (unsigned long long)_glyphsForString:(id)arg1 withGeneratingTextView:(id)arg2 glyphs:(unsigned short *)arg3;
- (id)_indexSetOfLinesNeedingRedrawWhenChangingSelectionFromRanges:(id)arg1 toRanges:(id)arg2;
- (struct _NSRange)_lineRangeForContentsRanges:(id)arg1;
- (void)_linesWithParityChangesFromRanges:(const struct _NSRange *)arg1 count:(unsigned long long)arg2 toRanges:(const struct _NSRange *)arg3 count:(unsigned long long)arg4 intoIndexSet:(id)arg5;
- (SEL)_pasteboardOwnerStringTypeWritingSelector;
- (struct CGRect)_rectForLineRange:(struct _NSRange)arg1;
- (BOOL)_selectionIsNonEmpty;
- (BOOL)_shouldHaveCaretTimer;
- (void)_updateCaretTimer;
- (void)_updateCaretTimerWithFirstResponderStatus:(BOOL)arg1;
- (void)_windowDidChangeKeyStatus:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (double)advanceBetweenColumns;
- (double)advancePerByte;
- (double)advancePerColumn;
- (unsigned long long)availableLineCount;
- (id)backgroundColorForEmptySpace;
- (id)backgroundColorForLine:(unsigned long long)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)behavesAsTextField;
- (unsigned long long)bytesBetweenVerticalGuides;
- (unsigned long long)bytesPerColumn;
- (unsigned long long)bytesPerLine;
- (struct CGRect)caretRect;
- (unsigned long long)characterAtPointForSelection:(struct CGPoint)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (id)data;
- (void)dealloc;
- (id)displayedSelectedContentsRanges;
- (void)doCommandBySelector:(SEL)arg1;
- (void)drawCaretIfNecessaryWithClip:(struct CGRect)arg1;
- (void)drawFocusRingWithClip:(struct CGRect)arg1;
- (void)drawGlyphs:(unsigned short *)arg1 withAdvances:(struct CGSize *)arg2 count:(unsigned long long)arg3;
- (void)drawPulseBackgroundInRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawSelectionIfNecessaryWithClip:(struct CGRect)arg1;
- (void)drawTextWithClip:(struct CGRect)arg1 restrictingToTextInRanges:(id)arg2;
- (void)drawVerticalGuideLines:(struct CGRect)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)extractGlyphsForBytes:(const char *)arg1 count:(unsigned long long)arg2 offsetIntoLine:(unsigned long long)arg3 intoArray:(unsigned short *)arg4 advances:(struct CGSize *)arg5 resultingGlyphCount:(unsigned long long *)arg6;
- (void)extractGlyphsForBytes:(const char *)arg1 range:(struct _NSRange)arg2 intoArray:(unsigned short *)arg3 advances:(struct CGSize *)arg4 withInclusionRanges:(id)arg5 initialTextOffset:(double *)arg6 resultingGlyphCount:(unsigned long long *)arg7;
- (void)fadePulseWindowTimer:(id)arg1;
- (id)font;
- (BOOL)handleCommand:(SEL)arg1;
- (BOOL)hasVisibleDisplayedSelectedContentsRange;
- (double)horizontalContainerInset;
- (unsigned long long)indexOfCharacterAtPoint:(struct CGPoint)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRepresenter:(id)arg1;
- (void)insertText:(id)arg1;
- (BOOL)isEditable;
- (BOOL)isFlipped;
- (BOOL)isWithinMouseDown;
- (void)keyDown:(id)arg1;
- (double)lineHeight;
- (double)maximumAvailableLinesForViewHeight:(double)arg1;
- (unsigned long long)maximumBytesPerLineForViewWidth:(double)arg1;
- (unsigned long long)maximumGlyphCountForByteCount:(unsigned long long)arg1;
- (double)minimumViewWidthForBytesPerLine:(unsigned long long)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (struct CGPoint)originForCharacterAtByteIndex:(unsigned long long)arg1;
- (void)paste:(id)arg1;
- (void)pulseSelection;
- (id)representer;
- (BOOL)resignFirstResponder;
- (void)scrollWheel:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)setBytesBetweenVerticalGuides:(unsigned long long)arg1;
- (void)setData:(id)arg1;
- (void)setEditable:(BOOL)arg1;
- (void)setFont:(id)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setHorizontalContainerInset:(double)arg1;
- (void)setShouldAntialias:(BOOL)arg1;
- (void)setStartingLineBackgroundColorIndex:(unsigned long long)arg1;
- (void)setVerticalOffset:(double)arg1;
- (BOOL)shouldAntialias;
- (BOOL)shouldHaveForegroundHighlightColor;
- (BOOL)showsFocusRing;
- (unsigned long long)startingLineBackgroundColorIndex;
- (double)totalAdvanceForBytesInRange:(struct _NSRange)arg1;
- (void)updateSelectedRanges;
- (void)updateSelectionPulse;
- (BOOL)validateMenuItem:(id)arg1;
- (double)verticalOffset;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;

@end
