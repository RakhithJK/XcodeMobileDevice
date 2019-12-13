//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsInterface/NSMenuDelegate-Protocol.h>

@class NSString;
@protocol XCMenuTableDataSource;

@interface XCMenuTable : NSObject <NSMenuDelegate>
{
    id <XCMenuTableDataSource> _datasource;
    SEL _action;
    id _target;
    long long _leftColumnLength;
    long long _rightColumnLength;
}

+ (id)createRowWithAttributedStringsAndWidths:(id)arg1;
- (void)_menuItemCallback:(id)arg1;
- (SEL)action;
- (void)addItemsToMenu:(id)arg1;
- (id)createMenuForTable;
- (id)dataSource;
- (void)menuNeedsUpdate:(id)arg1;
- (void)setAction:(SEL)arg1;
- (void)setDataSource:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
