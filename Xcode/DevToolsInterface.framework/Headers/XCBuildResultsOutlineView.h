//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSOutlineView.h>

@class NSArray, XCEConfigurableDataSource, XCTranscriptTextView;

@interface XCBuildResultsOutlineView : NSOutlineView
{
    long long _mouseRow;
    BOOL _withinDrawRect;
    double _xceLastWidth;
    BOOL _changedWidthWhileLiveResizing;
    XCTranscriptTextView *_textView;
    NSArray *_collapsedItems;
    NSArray *_expandedItems;
    NSArray *_selectedItems;
    NSArray *_itemsWithExpandedTranscripts;
    struct CGPoint _scrollPositionAllResults;
    BOOL _scrollerIsPinnedToBottomAllResults;
    struct CGPoint _scrollPositionLatestResults;
    BOOL _scrollerIsPinnedToBottomLatestResults;
    BOOL _batchUpdateMode;
}

- (void)_checkForChangedWidth;
- (void)_initCommon;
- (void)_redisplayAfterExpansionChangeFromRow:(long long)arg1 withOriginalRowCount:(long long)arg2;
- (void)_reflectMouseRow:(id)arg1;
- (void)_updateAllRowHeights;
- (void)_updateForOldMouseRow;
- (void)_widthChanged:(id)arg1;
- (void)clearTextView;
@property(retain) NSArray *collapsedItems; // @synthesize collapsedItems=_collapsedItems;
- (void)copy:(id)arg1;
- (void)cursorUpdate:(id)arg1;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
@property(retain) NSArray *expandedItems; // @synthesize expandedItems=_expandedItems;
- (struct CGRect)frameOfOutlineCellAtRow:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain) NSArray *itemsWithExpandedTranscripts; // @synthesize itemsWithExpandedTranscripts=_itemsWithExpandedTranscripts;
- (void)keyDown:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
@property(nonatomic) long long mouseRow; // @synthesize mouseRow=_mouseRow;
@property(nonatomic) struct CGPoint scrollPositionAllResults; // @synthesize scrollPositionAllResults=_scrollPositionAllResults;
@property(nonatomic) struct CGPoint scrollPositionLatestResults; // @synthesize scrollPositionLatestResults=_scrollPositionLatestResults;
- (void)scrollToEnd;
@property(nonatomic) BOOL scrollerIsPinnedToBottomAllResults; // @synthesize scrollerIsPinnedToBottomAllResults=_scrollerIsPinnedToBottomAllResults;
@property(nonatomic) BOOL scrollerIsPinnedToBottomLatestResults; // @synthesize scrollerIsPinnedToBottomLatestResults=_scrollerIsPinnedToBottomLatestResults;
- (id)selectedData;
@property(retain) NSArray *selectedItems; // @synthesize selectedItems=_selectedItems;
- (id)selectedNodes;
- (id)selectedProjectItemPaths;
- (id)selectionSource;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
@property(nonatomic) XCTranscriptTextView *textView; // @synthesize textView=_textView;
- (BOOL)shouldScrollToEnd;
- (void)updateTrackingAreas;
- (void)viewDidEndLiveResize;
- (void)viewWillDraw;
- (void)viewWillStartLiveResize;
@property(readonly, nonatomic) XCEConfigurableDataSource *xceDataSource; // @dynamic xceDataSource;
- (double)xceLastWidth;
- (void)xceSetBatchUpdateMode:(BOOL)arg1;

@end

