//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTAbstractColorPicker.h>

@class NSAccessibilityElement, NSDictionary;

@interface DVTColorPickerPopUpButton : DVTAbstractColorPicker
{
    struct CGRect popUpButtonArrowsRect;
    struct CGRect colorWellViewRect;
    struct CGRect colorLabelRect;
    struct CGRect swatchRect;
    struct CGRect colorLabelTitleRect;
    NSDictionary *imageStateDictionary;
    NSAccessibilityElement *_colorWellAccessibilityElement;
    NSAccessibilityElement *_colorListAccessibilityElement;
}

+ (id)imageStateDictionaryForControlSize:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)_colorListAccessibilityElement;
- (id)_colorWellAccessibilityElement;
- (void)_updateColorAccessibilityValue;
- (id)accessibilityChildren;
- (id)accessibilityRole;
- (id)attributedTitleForTitle:(id)arg1;
- (double)baseline;
- (void)drawColorLabel;
- (void)drawColorWell;
- (void)drawDebuggingRects;
- (void)drawFocusRing;
- (void)drawPopUpButtonArrows;
- (void)drawRect:(struct CGRect)arg1;
- (id)effectiveAttributedTitle;
- (id)effectiveImageForControlPart:(int)arg1;
- (id)effectivePopUpButtonArrowsRightCapImage;
- (id)effectiveTextColor;
- (id)effectiveTitle;
- (double)heightThatFits;
- (double)horizontalMenuOffset;
- (id)imageStateDictionary;
- (struct CGRect)insetRectForSwatchRect:(struct CGRect)arg1;
- (void)invalidateImageStateDictionary;
- (BOOL)isAccessibilityElement;
- (BOOL)isMouseEventInColorWellRect:(id)arg1;
- (BOOL)isShowingTitle;
- (void)mouseDown:(id)arg1;
- (struct CGPoint)popUpMenuLocation;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setControlSize:(unsigned long long)arg1;
- (CDStruct_bf6d4a14)shadowInset;
- (void)sizeRectsForDrawing;
- (double)swatchHeight;
- (struct CGRect)swatchRectForColorWellRect:(struct CGRect)arg1;
- (id)titleAttributes;
- (double)verticalMenuOffset;
- (double)verticalTitleOffset;
- (double)widthForPopUpButton;

@end
