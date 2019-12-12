//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class XCDiffComparatorView, XCDiffDescriptor;

@interface XCDiffHunkMarker : NSObject
{
    XCDiffComparatorView *_comparatorView;
    XCDiffDescriptor *_descriptor;
    struct CGRect _leftHunkRect;
    struct CGRect _rightHunkRect;
    struct CGRect _mergeHunkRect;
    struct _XCDiffHunkMarkerFlags _dhmFlags;
}

+ (void)initialize;
- (id)_hunkMarkerPathWithType:(int)arg1;
- (void)dealloc;
- (id)description;
- (id)diffComparatorView;
- (id)diffDescriptor;
- (struct CGRect)drawingLeftHunkRect;
- (struct CGRect)drawingMergeHunkRect;
- (struct CGRect)drawingRightHunkRect;
- (void)getLeftRow:(long long *)arg1 rightRow:(long long *)arg2 mergeRow:(long long *)arg3 forPoint:(struct CGPoint)arg4;
- (void)getLeftRowRect:(struct CGRect *)arg1 rightRowRect:(struct CGRect *)arg2 mergeRowRect:(struct CGRect *)arg3 forRow:(long long)arg4;
- (id)hunkFillPath;
- (id)hunkHitTestPath;
- (id)hunkStrokePath;
- (id)init;
- (id)initWithDiffComparatorView:(id)arg1 diffDescriptor:(id)arg2;
- (void)invalidateHunkRects;
- (struct CGRect)leftHunkRect;
- (long long)leftRowForPoint:(struct CGPoint)arg1;
- (struct CGRect)leftRowRectForRow:(long long)arg1;
- (struct CGRect)mergeHunkRect;
- (long long)mergeRowForPoint:(struct CGPoint)arg1;
- (struct CGRect)mergeRowRectForRow:(long long)arg1;
- (struct CGRect)rightHunkRect;
- (long long)rightRowForPoint:(struct CGPoint)arg1;
- (struct CGRect)rightRowRectForRow:(long long)arg1;
- (void)setDiffComparatorView:(id)arg1;
- (void)setDiffDescriptor:(id)arg1;
- (void)setLeftHunkRect:(struct CGRect)arg1;
- (void)setMergeHunkRect:(struct CGRect)arg1;
- (void)setRightHunkRect:(struct CGRect)arg1;
- (BOOL)validateLeftHunkRect;
- (BOOL)validateMergeHunkRect;
- (BOOL)validateRightHunkRect;

@end

