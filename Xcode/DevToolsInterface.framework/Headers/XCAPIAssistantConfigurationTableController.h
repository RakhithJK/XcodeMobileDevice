//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsInterface/NSTableViewDataSource-Protocol.h>
#import <DevToolsInterface/NSTableViewDelegate-Protocol.h>

@class NSArray, NSString, XCAPIAssistantConfigurationArrayController, XCAPIAssistantConfigurationTable;

@interface XCAPIAssistantConfigurationTableController : NSObject <NSTableViewDataSource, NSTableViewDelegate>
{
    XCAPIAssistantConfigurationTable *_tableView;
    XCAPIAssistantConfigurationArrayController *configurationArrayController;
    NSArray *m_userOrderedSlices;
}

- (void)_updateSliceOrderProperties;
- (id)availableSlices;
- (void)awakeFromNib;
@property(retain, nonatomic) XCAPIAssistantConfigurationArrayController *configurationArrayController; // @synthesize configurationArrayController;
- (id)configurationTableFont;
- (void)persistUserSlices;
- (void)printOrder:(id)arg1;
- (void)resetSliceDefaults;
@property(retain, nonatomic) XCAPIAssistantConfigurationTable *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *userOrderedSlices; // @synthesize userOrderedSlices=m_userOrderedSlices;
- (void)sortUserSlices;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (void)updateSliceVisibilityProperty:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

