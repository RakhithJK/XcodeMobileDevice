//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTMarkup/_TtC9DVTMarkup6XPView.h>

@class NSString;
@protocol _TtP9DVTMarkup28PlaygroundMarkupViewDelegate_;

@interface _TtC9DVTMarkup20PlaygroundMarkupView : _TtC9DVTMarkup6XPView
{
    // Error parsing type: , name: rootView
    // Error parsing type: , name: delegate
    // Error parsing type: , name: preferredMaxLayoutWidth
    // Error parsing type: , name: markupContent
    // Error parsing type: , name: style
    // Error parsing type: , name: cachedHeightForWidth
    // Error parsing type: , name: selectionOrigin
    // Error parsing type: , name: selectionRect
}

- (CDUnknownBlockType).cxx_destruct;
@property(nonatomic, readonly) BOOL acceptsFirstResponder;
- (void)copy:(id)arg1;
@property(nonatomic) __weak id <_TtP9DVTMarkup28PlaygroundMarkupViewDelegate_> delegate; // @synthesize delegate;
- (void)drawRect:(struct CGRect)arg1;
- (void)handleLink:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
@property(nonatomic, copy) NSString *markupText;
- (void)mouseDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)performRendererLayout;
- (double)preferredHeightForWidth:(double)arg1;
@property(nonatomic) double preferredMaxLayoutWidth; // @synthesize preferredMaxLayoutWidth;
- (void)resetCursorRects;
- (BOOL)resignFirstResponder;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)selectAll:(id)arg1;
- (void)updateViewFromStyle;
- (BOOL)validateMenuItem:(id)arg1;

@end

