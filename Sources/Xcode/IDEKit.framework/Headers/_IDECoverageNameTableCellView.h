//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class IDEWorkspace, NSButton;

@interface _IDECoverageNameTableCellView : NSTableCellView
{
    NSButton *_jumpButton;
    id _coverageItem;
    IDEWorkspace *_workspace;
}

- (void).cxx_destruct;
@property __weak id coverageItem; // @synthesize coverageItem=_coverageItem;
@property __weak NSButton *jumpButton; // @synthesize jumpButton=_jumpButton;
- (void)jumpToSourceCode:(id)arg1;
@property __weak IDEWorkspace *workspace; // @synthesize workspace=_workspace;

@end

