//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSOutlineView.h>

@class NSMenu;

@interface XDOutlineView : NSOutlineView
{
    id _tableColumnProvider;
    NSMenu *_tableHeaderContextMenu;
    struct _XDOutlineViewFlags _xdOVFlags;
}

+ (void)initialize;
- (void)_synchronizeTableHeaderContextMenu;
- (void)_tableColumnProviderAddTableColumn:(id)arg1;
- (id)_tableColumnProviderAllowedTableColumnIdentifers;
- (id)_tableColumnProviderDefaultTableColumnIdentifiers;
- (id)_tableColumnProviderOutlineTableColumnIdentifier;
- (void)_tableColumnProviderRemoveTableColumn:(id)arg1;
- (id)_tableColumnWithIdentifier:(id)arg1;
- (void)_tableHeaderContextMenuItemAction:(id)arg1;
- (void)awakeFromNib;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)dealloc;
- (void)delete:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)insertTableColumn:(id)arg1 atIndex:(long long)arg2;
- (void)keyDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)optionClickCausesEditing;
- (BOOL)optionClickEditsAnyCell;
- (void)paste:(id)arg1;
- (void)reloadTableColumns;
- (void)setOpetionClickEditsAnyCell:(BOOL)arg1;
- (void)setOptionClickCausesEditing:(BOOL)arg1;
- (void)setTableColumnProvider:(id)arg1;
- (void)showAllTableColumns:(id)arg1;
- (id)tableColumnProvider;
- (id)tableColumnWithIdentifier:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;

@end

