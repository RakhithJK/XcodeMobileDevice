//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XDInterface/XDGraphicAuxiliaryStorage.h>

@class NSMutableIndexSet, XDCompartmentItem;

@interface XDCompartmentGraphicAuxiliaryStorage : XDGraphicAuxiliaryStorage
{
    long long _selectedCompartmentIndex;
    NSMutableIndexSet *_selectedItems;
    long long _originalSelectedCompartmentIndex;
    NSMutableIndexSet *_originalSelectedItems;
    long long _mouseOverCompartmentIndex;
    long long _mouseOverCompartmentItemIndex;
    long long _clickedCompartmentIndex;
    long long _clickedCompartmentItemIndex;
    XDCompartmentItem *_clickedCompartmentItem;
    struct _XDCompartmentGraphicAuxiliaryStorageFlags _cgasFlags;
}

+ (void)initialize;
- (void)_deselectAll;
- (void)_disableSelectionPosting;
- (BOOL)_enableSelectionPostingAndPost;
- (void)_postSelectionDidChangeNotification;
- (void)_selectAll;
- (long long)clickedCompartmentIndex;
- (id)clickedCompartmentItem;
- (long long)clickedCompartmentItemIndex;
- (void)dealloc;
- (void)deselectItemAtIndex:(long long)arg1 inCompartmentAtIndex:(long long)arg2;
- (long long)indexOfSelectedCompartment;
- (long long)indexOfSelectedItem;
- (id)initWithGraphic:(id)arg1 diagramView:(id)arg2;
- (BOOL)isItemAtIndex:(long long)arg1 selectedInCompartmentAtIndex:(long long)arg2;
- (long long)mouseOverCompartmentIndex;
- (long long)mouseOverCompartmentItemIndex;
- (long long)numberOfSelectedItems;
- (void)selectItemAtIndex:(long long)arg1 inCompartmentAtIndex:(long long)arg2 byExtendingSelection:(BOOL)arg3;
- (id)selectedItemsEnumerator;
- (void)setClickedCompartmentIndex:(long long)arg1;
- (void)setClickedCompartmentItem:(id)arg1;
- (void)setClickedCompartmentItemIndex:(long long)arg1;
- (void)setMouseOverCompartmentIndex:(long long)arg1;
- (void)setMouseOverCompartmentItemIndex:(long long)arg1;

@end

