//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXTextView.h>

#import <DevToolsInterface/XCDiffHunkMarking-Protocol.h>

@class XCDiffComparatorView;

@interface XCDiffTextView : PBXTextView <XCDiffHunkMarking>
{
    XCDiffComparatorView *_comparatorView;
}

+ (void)initialize;
- (void)dealloc;
- (id)diffComparatorView;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawViewBackgroundInRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (void)setDiffComparatorView:(id)arg1;

@end

