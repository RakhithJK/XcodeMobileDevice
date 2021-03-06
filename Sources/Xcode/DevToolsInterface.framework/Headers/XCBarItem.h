//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextField.h>

#import <DevToolsInterface/XCSelectionSource-Protocol.h>

@class NSString, PBXReference;

@interface XCBarItem : NSTextField <XCSelectionSource>
{
    long long _trackingTag;
    long long _value;
    BOOL _mouseIn;
    PBXReference *_ref;
    struct CGPoint _mouseDownLocation;
    BOOL _isEditing;
    BOOL _ceResizable;
    BOOL _ceWidthTracksView;
    struct CGSize _ceMaxSize;
    struct CGSize _ceContainerSize;
    BOOL _refDecoratesCell;
}

- (void)_menuItemSelected:(id)arg1;
- (void)_mouseTrackingCompleted;
- (void)_singleClick:(id)arg1;
- (void)_timerBasedMenuAction:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)cancel:(id)arg1;
- (BOOL)collapse;
- (void)dealloc;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)expand:(double)arg1;
- (id)imageForDrag;
- (BOOL)isEditing;
- (BOOL)isExpanded;
- (BOOL)isMouseIn;
- (BOOL)isSelectable;
- (void)itemDoubleClicked:(id)arg1;
- (void)itemSelected:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseUp:(id)arg1;
- (id)reference;
- (BOOL)referenceDecoratesCell;
- (BOOL)referenceIsEditable;
- (void)resetCursorRects;
- (BOOL)resignFirstResponder;
- (void)revealItems:(id)arg1 select:(BOOL)arg2;
- (void)rightMouseDown:(id)arg1;
- (id)savedDragItems;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setReference:(id)arg1;
- (BOOL)shouldDisplay;
- (void)sizeToFit;
- (void)textDidBeginEditing:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
- (BOOL)textShouldBeginEditing:(id)arg1;
- (BOOL)wantsToRetainFocusDuringSelection;
- (id)windowOfSelection;
- (id)xcSelection;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

