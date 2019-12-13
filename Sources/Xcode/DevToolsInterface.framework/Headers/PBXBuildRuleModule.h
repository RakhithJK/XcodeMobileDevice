//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXModule.h>

#import <DevToolsInterface/NSTextViewDelegate-Protocol.h>

@class NSBox, NSButton, NSPopUpButton, NSString, NSTextField, NSTextView, NSUndoManager, PBXBuildRule, PBXExtendedTableView;

@interface PBXBuildRuleModule : PBXModule <NSTextViewDelegate>
{
    NSPopUpButton *_fileTypePopup;
    NSTextField *_filePatternsField;
    NSPopUpButton *_compilerSpecPopup;
    NSTextView *_scriptField;
    PBXExtendedTableView *_outputFilesTableView;
    NSButton *_addOutputFileButton;
    NSButton *_removeOutputFileButton;
    NSUndoManager *_scriptUndo;
    NSBox *_typeAndCompilerBox;
    NSBox *_scriptBox;
    NSBox *_outputFilesBox;
    double _viewHeightSansScriptField;
    double _viewHeightSansOutputFilesTable;
    long long _numRowsOutputFilesTableSizedTo;
    unsigned int _resizingView:1;
    NSString *_specificationDomain;
    PBXBuildRule *_buildRule;
    NSString *_unknownCompilerSpecTitle;
}

- (void)_resizeViewIfNeeded;
- (void)_updateButtonState;
- (BOOL)_userCanEditBuildRule;
- (void)addOutputFile:(id)arg1;
- (id)buildRule;
- (void)dealloc;
- (id)initWithBuildRule:(id)arg1;
- (id)initWithBuildRule:(id)arg1 inDomain:(id)arg2;
- (id)label;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)redo:(id)arg1;
- (void)removeOutputFile:(id)arg1;
- (void)setBuildRule:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)tableViewSelectionIsChanging:(id)arg1;
- (void)takeCompilerSpecFrom:(id)arg1;
- (void)takeFilePatternsFrom:(id)arg1;
- (void)takeFileTypeFrom:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
- (void)textFrameDidChange:(id)arg1;
- (void)undo:(id)arg1;
- (id)undoManagerForTextView:(id)arg1;
- (void)update;
- (BOOL)validateLocalMenuItem:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
