//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXFileTableDataSource.h>

@class NSMutableDictionary, PBXPopUpButtonCell;

@interface PBXTargetDataSource : PBXFileTableDataSource
{
    NSMutableDictionary *_buildFileCache;
    PBXPopUpButtonCell *_cachedPopupButtonCell;
}

- (id)_buildFileForItem:(id)arg1;
- (id)_primaryAttributeStringForItem:(id)arg1;
- (id)_setupMenuDictionary;
- (id)columnForIdentifier:(id)arg1;
- (id)configurationIdentifier;
- (void)configureColumnsForTable:(id)arg1;
- (void)dealloc;
- (void)disconnect;
- (id)optionalColumnIdentifiers:(id)arg1;
- (void)refresh;
- (id)requiredColumnIdentifiers:(id)arg1;
- (CDUnknownFunctionPointerType)sortFunctionForColumnIdentifier:(id)arg1;
- (CDUnknownFunctionPointerType)stringFunctionForColumnIdentifier:(id)arg1;
- (id)summary;
- (id)tableView:(id)arg1 dataCellForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldTrackCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;

@end

