//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, _UXFlowLayoutInfo;

__attribute__((visibility("hidden")))
@interface _UXFlowLayoutSection : NSObject
{
    NSMutableArray *_items;
    NSMutableArray *_rows;
    struct NSEdgeInsets _sectionMagins;
    double _verticalInterstice;
    double _horizontalInterstice;
    struct CGRect _headerFrame;
    struct CGRect _footerFrame;
    double _headerDimension;
    double _footerDimension;
    BOOL _isValid;
    struct CGRect _frame;
    NSDictionary *_rowAlignmentOptions;
    BOOL _fixedItemSize;
    struct CGSize _itemSize;
    double _otherMargin;
    double _beginMargin;
    double _endMargin;
    double _actualGap;
    double _lastRowBeginMargin;
    double _lastRowEndMargin;
    double _lastRowActualGap;
    BOOL _lastRowIncomplete;
    long long _itemsCount;
    long long _itemsByRowCount;
    long long _indexOfImcompleteRow;
    _UXFlowLayoutInfo *_layoutInfo;
    struct NSEdgeInsets _sectionMargins;
}

@property(readonly, nonatomic) double actualGap; // @synthesize actualGap=_actualGap;
- (id)addItem;
- (id)addRow;
@property(readonly, nonatomic) double beginMargin; // @synthesize beginMargin=_beginMargin;
- (void)computeLayout;
- (id)copyFromLayoutInfo:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic) double endMargin; // @synthesize endMargin=_endMargin;
@property(nonatomic) BOOL fixedItemSize; // @synthesize fixedItemSize=_fixedItemSize;
@property(nonatomic) double footerDimension; // @synthesize footerDimension=_footerDimension;
@property(nonatomic) struct CGRect footerFrame; // @synthesize footerFrame=_footerFrame;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) double headerDimension; // @synthesize headerDimension=_headerDimension;
@property(nonatomic) struct CGRect headerFrame; // @synthesize headerFrame=_headerFrame;
@property(nonatomic) double horizontalInterstice; // @synthesize horizontalInterstice=_horizontalInterstice;
@property(readonly, nonatomic) long long indexOfImcompleteRow; // @synthesize indexOfImcompleteRow=_indexOfImcompleteRow;
- (id)init;
- (void)invalidate;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(readonly, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) long long itemsByRowCount; // @synthesize itemsByRowCount=_itemsByRowCount;
@property(nonatomic) long long itemsCount; // @synthesize itemsCount=_itemsCount;
@property(readonly, nonatomic) double lastRowActualGap; // @synthesize lastRowActualGap=_lastRowActualGap;
@property(readonly, nonatomic) double lastRowBeginMargin; // @synthesize lastRowBeginMargin=_lastRowBeginMargin;
@property(readonly, nonatomic) double lastRowEndMargin; // @synthesize lastRowEndMargin=_lastRowEndMargin;
@property(readonly, nonatomic) BOOL lastRowIncomplete; // @synthesize lastRowIncomplete=_lastRowIncomplete;
@property(nonatomic) _UXFlowLayoutInfo *layoutInfo; // @synthesize layoutInfo=_layoutInfo;
@property(readonly, nonatomic) double otherMargin; // @synthesize otherMargin=_otherMargin;
- (void)recomputeFromIndex:(long long)arg1;
@property(retain, nonatomic) NSDictionary *rowAlignmentOptions; // @synthesize rowAlignmentOptions=_rowAlignmentOptions;
@property(readonly, nonatomic) NSMutableArray *rows; // @synthesize rows=_rows;
@property(nonatomic) struct NSEdgeInsets sectionMargins; // @synthesize sectionMargins=_sectionMargins;
@property(nonatomic) double verticalInterstice; // @synthesize verticalInterstice=_verticalInterstice;
- (id)snapshot;

@end

