//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/XCBreakpointAction.h>

@class NSAppleScript, NSString;

@interface XCBreakpointAppleScriptAction : XCBreakpointAction
{
    NSString *_script;
    NSAppleScript *_compiledScript;
}

+ (id)archivableAttributes;
+ (id)displayName;
- (id)compile;
- (void)dealloc;
- (id)editorClassName;
- (id)macroExpandedScriptWithBreakpoint:(id)arg1;
- (void)performInSession:(id)arg1 onBreakpoint:(id)arg2;
- (id)run;
- (id)script;
- (void)setScript:(id)arg1;

@end

