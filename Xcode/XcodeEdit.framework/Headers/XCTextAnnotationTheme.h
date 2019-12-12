//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSColor, NSGradient;

@interface XCTextAnnotationTheme : NSObject
{
    NSColor *_backgroundColor;
    NSColor *_selectedBackgroundColor;
    NSColor *_focusedBackgroundColor;
    NSColor *_topBorderColor;
    NSColor *_bottomBorderColor;
    NSGradient *_topGradient;
    NSGradient *_bottomGradient;
    NSColor *_highlightOutlineColor;
    NSColor *_highlightBackgroundColor;
}

+ (id)blueGlassTextAnnotationTheme;
+ (id)classicBlueTextAnnotationTheme;
+ (id)redGlassTextAnnotationTheme;
+ (id)yellowGlassTextAnnotationTheme;
@property(copy, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) NSColor *bottomBorderColor; // @synthesize bottomBorderColor=_bottomBorderColor;
@property(copy, nonatomic) NSGradient *bottomGradient; // @synthesize bottomGradient=_bottomGradient;
- (void)dealloc;
@property(copy, nonatomic) NSColor *focusedBackgroundColor; // @synthesize focusedBackgroundColor=_focusedBackgroundColor;
@property(copy, nonatomic) NSColor *highlightBackgroundColor; // @synthesize highlightBackgroundColor=_highlightBackgroundColor;
@property(copy, nonatomic) NSColor *highlightOutlineColor; // @synthesize highlightOutlineColor=_highlightOutlineColor;
- (id)init;
@property(copy, nonatomic) NSColor *selectedBackgroundColor; // @synthesize selectedBackgroundColor=_selectedBackgroundColor;
@property(copy, nonatomic) NSColor *topBorderColor; // @synthesize topBorderColor=_topBorderColor;
@property(copy, nonatomic) NSGradient *topGradient; // @synthesize topGradient=_topGradient;

@end

