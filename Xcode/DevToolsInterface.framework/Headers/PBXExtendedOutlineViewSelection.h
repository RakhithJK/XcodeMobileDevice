//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSIndexSet, PBXExtendedOutlineView;

@interface PBXExtendedOutlineViewSelection : NSObject
{
    PBXExtendedOutlineView *_outlineView;
    NSArray *_selectedItemPaths;
    NSArray *_selectedRowPaths;
    NSIndexSet *_selectedRowIndexes;
}

- (void)dealloc;
- (id)initWithOutlineView:(id)arg1;
- (void)invalidate;
- (id)selectedItemPaths;
- (id)selectedRowPaths;
- (void)selectionDidChange:(id)arg1;
- (void)updateSelection;

@end

