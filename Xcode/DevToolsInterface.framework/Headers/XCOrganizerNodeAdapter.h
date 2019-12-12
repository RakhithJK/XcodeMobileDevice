//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsInterface/XCEDataNodeAdapterP-Protocol.h>

@class NSString, XCBinderModule;

@interface XCOrganizerNodeAdapter : NSObject <XCEDataNodeAdapterP>
{
    XCBinderModule *binderModule;
}

+ (id)adapterWithBinderModule:(id)arg1;
- (id)actionMenuForDataNode:(id)arg1;
- (id)addMenuForDataNode:(id)arg1;
@property XCBinderModule *binderModule; // @synthesize binderModule;
- (long long)compareDataNode:(id)arg1 withDataNode:(id)arg2;
- (id)contextualMenuForDataNode:(id)arg1;
- (void)dataNode:(id)arg1 acceptDroppedItems:(id)arg2 atIndex:(long long)arg3;
- (BOOL)dataNode:(id)arg1 canAcceptDroppedItem:(id)arg2 atChildIndex:(long long)arg3;
- (id)dataNode:(id)arg1 objectValueForTableColumn:(id)arg2;
- (id)dataNode:(id)arg1 outlineView:(id)arg2 dataCellForTableColumn:(id)arg3;
- (void)dataNode:(id)arg1 outlineView:(id)arg2 willDisplayCell:(id)arg3 forTableColumn:(id)arg4;
- (void)dataNodeInvalidate:(id)arg1;
- (double)heightOfRowForDataNode:(id)arg1;
- (id)instantiateAddedChildWithData:(id)arg1 forDataNode:(id)arg2;
- (void)invalidate;
- (BOOL)isDataNodeSelectable:(id)arg1;
- (void)refreshDataNode:(id)arg1;
- (id)removalConfirmationAlertForDataNode:(id)arg1;
- (void)removeChild:(id)arg1 fromDataNode:(id)arg2;
- (void)removeDataNode:(id)arg1;
- (void)renameChild:(id)arg1 withinDataNode:(id)arg2;
- (BOOL)shouldSortChildrenOfNode:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

