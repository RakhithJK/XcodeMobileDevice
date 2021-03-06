//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSArray, NSButton, NSImageView, NSMutableSet, NSSet, NSTableView, NSTextField;

@interface XCSUIDeviceChooserSheet : NSWindowController
{
    NSMutableSet *_selectedDevices;
    NSArray *_knownPlatforms;
    NSArray *_devices;
    NSSet *_disabledDevices;
    NSTableView *_tableView;
    NSImageView *_selectedImageView;
    NSTextField *_selectedNameLabel;
    NSTextField *_selectedModelLabel;
    NSTextField *_selectedOSLabel;
    NSButton *_addButton;
    NSArray *_groupedDevices;
}

+ (id)deviceChooserSheet;
- (void).cxx_destruct;
@property __weak NSButton *addButton; // @synthesize addButton=_addButton;
- (void)cancel:(id)arg1;
@property(retain, nonatomic) NSArray *devices; // @synthesize devices=_devices;
@property(retain, nonatomic) NSSet *disabledDevices; // @synthesize disabledDevices=_disabledDevices;
- (void)groupDevices;
@property(retain) NSArray *groupedDevices; // @synthesize groupedDevices=_groupedDevices;
@property(retain, nonatomic) NSArray *knownPlatforms; // @synthesize knownPlatforms=_knownPlatforms;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)ok:(id)arg1;
- (id)platformForIdentifier:(id)arg1;
- (void)rowSelectedAtIndex:(long long)arg1;
- (void)selectOrDeselectDevice:(id)arg1;
@property(readonly) NSSet *selectedDevices; // @synthesize selectedDevices=_selectedDevices;
@property __weak NSImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property __weak NSTextField *selectedModelLabel; // @synthesize selectedModelLabel=_selectedModelLabel;
@property __weak NSTextField *selectedNameLabel; // @synthesize selectedNameLabel=_selectedNameLabel;
@property __weak NSTextField *selectedOSLabel; // @synthesize selectedOSLabel=_selectedOSLabel;
@property __weak NSTableView *tableView; // @synthesize tableView=_tableView;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)windowDidLoad;

@end

