//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/XCBuildSettingEditorModule.h>

@class NSTextField, NSTextView;

@interface XCStringEditorModule : XCBuildSettingEditorModule
{
    NSTextField *_titleField;
    NSTextView *_stringTextView;
}

- (void)keyUp:(id)arg1;
- (id)moduleWindowFrameAutosaveName;
- (void)setString:(id)arg1;
- (id)string;
- (id)stringEditorModule;
- (void)viewDidLoad;

@end

