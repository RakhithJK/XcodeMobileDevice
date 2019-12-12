//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/XCDiffComparatorView.h>

@class NSLayoutManager;

@interface XCDiffTextComparatorView : XCDiffComparatorView
{
    NSLayoutManager *_leftLayoutManager;
    NSLayoutManager *_rightLayoutManager;
    NSLayoutManager *_mergeLayoutManager;
}

+ (Class)_dataSourceClass;
+ (Class)_layoutManagerClass;
+ (Class)_textContainerClass;
+ (Class)_textStorageClass;
+ (Class)_viewClass;
+ (void)initialize;
- (struct _NSRange)_charRangeForLineInfo:(struct _XCRefactoringLineInfo)arg1 source:(id)arg2;
- (void)_didChangeDiffMergeDirectionForDescriptor:(id)arg1;
- (void)_didChangeMergesModification;
- (void)_diffContextDidChangeDiffMergeDirection:(id)arg1;
- (void)_diffContextWillChangeDiffMergeDirection:(id)arg1;
- (id)_diffHunkForCharacterRange:(struct _NSRange)arg1 dataSource:(id)arg2;
- (void)_selectAndScrollDiffHunkToVisible:(id)arg1;
- (void)_setLeftScrollView:(id)arg1;
- (BOOL)_setModificationColor:(id)arg1;
- (void)_setRightScrollView:(id)arg1;
- (BOOL)_setShowsDiffHunks:(BOOL)arg1;
- (id)_toolTipForDiffDescriptor:(id)arg1;
- (void)_willChangeDiffMergeDirectionForDescriptor:(id)arg1;
- (void)_willChangeMergesModification;
- (void)clearHighlightModificationForDiffDescriptor:(id)arg1;
- (void)dealloc;
- (void)highlightModificationForDiffDescriptor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)leftTextStorage;
- (struct CGSize)leftViewContentSize;
- (id)mergeTextStorage;
- (struct CGSize)mergeViewContentSize;
- (id)rightTextStorage;
- (struct CGSize)rightViewContentSize;
- (void)selectAndScrollToVisibleLineRange:(struct _NSRange)arg1 startLineColumn:(unsigned long long)arg2 endLineColumn:(unsigned long long)arg3;
- (void)setDiffComparatorViewStyle:(int)arg1;
- (void)setLeftTextStorage:(id)arg1;
- (void)setMergeTextStorage:(id)arg1;
- (void)setRightTextStorage:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(id)arg3;

@end

