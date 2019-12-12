//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/NSObject-Protocol.h>

@class NSArray, NSCursor, NSEnumerator, NSImage, NSMenu, NSMutableArray, NSObject, NSString, NSView, NSWindow, XCESignal, XCElementSpacings, XCElementView;

@protocol XCElementP <NSObject>
- (void)addFollowing:(struct NSObject *)arg1 element:(struct NSObject *)arg2;
- (void)addSpace:(struct _XCElementInset)arg1;
- (void)addSpaceBottom:(double)arg1;
- (void)addSpaceLeft:(double)arg1;
- (void)addSpaceLeft:(double)arg1 bottom:(double)arg2;
- (void)addSpaceLeft:(double)arg1 right:(double)arg2;
- (void)addSpaceLeft:(double)arg1 right:(double)arg2 bottom:(double)arg3;
- (void)addSpaceLeft:(double)arg1 top:(double)arg2;
- (void)addSpaceLeft:(double)arg1 top:(double)arg2 bottom:(double)arg3;
- (void)addSpaceLeft:(double)arg1 top:(double)arg2 right:(double)arg3;
- (void)addSpaceLeft:(double)arg1 top:(double)arg2 right:(double)arg3 bottom:(double)arg4;
- (void)addSpaceRight:(double)arg1;
- (void)addSpaceRight:(double)arg1 bottom:(double)arg2;
- (void)addSpaceTop:(double)arg1;
- (void)addSpaceTop:(double)arg1 bottom:(double)arg2;
- (void)addSpaceTop:(double)arg1 right:(double)arg2;
- (void)addSpaceTop:(double)arg1 right:(double)arg2 bottom:(double)arg3;
- (void)addToView;
- (struct _XCElementInset)addedSpace;
- (double)addedSpaceBottom;
- (double)addedSpaceLeft;
- (double)addedSpaceRight;
- (double)addedSpaceTop;
- (void)beginPositionIndependentSizing;
- (struct CGRect)calculateContentFrame;
- (struct CGRect)calculateEnclosure;
- (BOOL)checkElementPointerIsValid:(NSObject *)arg1;
- (NSEnumerator *)childEnumerator;
- (NSEnumerator *)childReverseEnumerator;
- (BOOL)childrenDraggableByDefault;
- (BOOL)commitEditing;
- (struct _XCElementInset)contentOffset;
- (NSMenu *)contextMenu:(struct CGPoint)arg1;
- (BOOL)continueTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(NSView *)arg3;
- (NSCursor *)cursorAt:(struct CGPoint)arg1;
- (NSCursor *)cursorElementLevelAt:(struct CGPoint)arg1;
- (NSString *)debugName;
- (void)deleteSelf;
- (void)deselectChildrenIncludingSelf:(BOOL)arg1 recursive:(BOOL)arg2;
- (BOOL)disableValidate;
- (void)discardEditing;
- (struct NSObject *)dragElement;
- (BOOL)draggable;
- (struct NSObject *)dropElement;
- (BOOL)dropElement:(struct NSObject *)arg1 at:(struct CGPoint)arg2;
- (struct CGRect)editingEditorOffsets;
- (struct NSObject *)editingElement;
- (NSObject *)editingObject;
- (XCElementView *)elementView;
- (struct _XCElementInset)enclosure;
- (void)endPositionIndependentSizing;
- (BOOL)fillGapsHorizontally;
- (BOOL)fillGapsVertically;
- (struct NSObject *)findElementAt:(struct CGPoint)arg1;
- (struct NSObject *)first;
- (struct CGRect)frame;
- (void)highlightSearchResult:(NSObject *)arg1;
- (NSImage *)image;
- (struct CGPoint)imageLoc;
- (BOOL)isAnchor;
- (BOOL)isDisplayer;
- (BOOL)isEditing;
- (BOOL)isInEditingState;
- (BOOL)isLocalTo:(struct NSObject *)arg1;
- (BOOL)isMultiToggler;
- (BOOL)isPlacedVertically;
- (BOOL)isTabber;
- (BOOL)isToggler;
- (struct NSObject *)last;
- (XCElementSpacings *)localSpacingsCreateIfNecessary;
- (struct NSObject *)mainElement;
- (struct CGSize)maxFrameSize;
- (struct CGSize)minFrameSize;
- (unsigned long long)minimumChildren;
- (BOOL)movesSplitHorizontally;
- (BOOL)movesSplitVertically;
- (void)needPositionElements;
- (struct NSObject *)next;
- (struct NSObject *)nextElement;
- (struct NSObject *)parent;
- (BOOL)positionIndependentSizing;
- (struct NSObject *)prev;
- (struct NSObject *)previousElement;
- (void)receiveXCESignal:(XCESignal *)arg1;
- (void)recursiveAdjustSizeOfGroupsForContent;
- (void)recursiveSetSizeToDefault;
- (void)registerAsEditor;
- (void)removeAndClearChildren;
- (void)removeFromView;
- (void)removeTree;
- (void)requestRedraw;
- (NSArray *)searchResultsFor:(NSString *)arg1;
- (void)searchResultsFor:(NSString *)arg1 addTo:(NSMutableArray *)arg2;
- (void)selectTabCandidate;
- (BOOL)selectable;
- (BOOL)selected;
- (void)setAddedSpace:(struct _XCElementInset)arg1;
- (void)setAddedSpaceToCancelDefaultSpace;
- (void)setChildrenDraggableByDefault:(BOOL)arg1;
- (void)setDebugName:(NSString *)arg1;
- (void)setDisableValidate:(BOOL)arg1;
- (void)setDraggable:(BOOL)arg1;
- (void)setEditingEditorOffsets:(struct CGRect)arg1;
- (void)setEditingElement:(struct NSObject *)arg1;
- (void)setEditingObject:(NSObject *)arg1;
- (void)setFillGapsHorizontally:(BOOL)arg1;
- (void)setFillGapsVertically:(BOOL)arg1;
- (void)setInitialSize:(struct CGSize)arg1;
- (void)setMovesSplitHorizontally:(BOOL)arg1;
- (void)setMovesSplitVertically:(BOOL)arg1;
- (void)setSelectable:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setSizeToDefault;
- (void)setSpacings:(XCElementSpacings *)arg1;
- (void)setStretchesHorizontally:(BOOL)arg1;
- (void)setStretchesVertically:(BOOL)arg1;
- (void)setTotalSpace:(struct _XCElementInset)arg1;
- (void)setUserMaxSize:(struct CGSize)arg1;
- (void)setUserMaxSizeEnabled:(BOOL)arg1;
- (void)setUserMinSize:(struct CGSize)arg1;
- (void)setUserMinSizeEnabled:(BOOL)arg1;
- (BOOL)shown;
- (double)spaceBottom;
- (double)spaceLeft;
- (double)spaceRight;
- (double)spaceTop;
- (XCElementSpacings *)spacings;
- (void)spacingsChanged:(XCElementSpacings *)arg1;
- (BOOL)startTrackingAt:(struct CGPoint)arg1 inView:(NSView *)arg2;
- (void)stopTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(NSView *)arg3 mouseIsUp:(BOOL)arg4;
- (BOOL)stretchesHorizontally;
- (BOOL)stretchesVertically;
- (struct NSObject *)tabCandidateFollowing:(struct NSObject *)arg1;
- (struct NSObject *)tabCandidatePreceding:(struct NSObject *)arg1;
- (struct _XCElementInset)totalSpace;
- (void)unregisterAsEditor;
- (struct CGSize)userMaxSize;
- (BOOL)userMaxSizeEnabled;
- (struct CGSize)userMinSize;
- (BOOL)userMinSizeEnabled;
- (BOOL)validate;
- (BOOL)vertical;
- (NSWindow *)window;
@end

