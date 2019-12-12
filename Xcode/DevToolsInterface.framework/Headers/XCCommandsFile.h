//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class XCBinderActionSet;

@interface XCCommandsFile : NSObject
{
    XCBinderActionSet *_actionSet;
}

- (int)_actionTypeForPlistValue:(id)arg1;
- (int)_debuggerForPlistValue:(id)arg1;
- (id)_parseActionSetFromArray:(id)arg1 path:(id)arg2 error:(id *)arg3;
- (id)_plistValueForActionType:(int)arg1;
- (id)_plistValueForDebugger:(int)arg1;
- (id)_plistValueForWorkingDirectory:(int)arg1;
- (int)_workingDirectoryForPlistValue:(id)arg1;
@property(retain) XCBinderActionSet *actionSet; // @synthesize actionSet=_actionSet;
- (void)dealloc;
- (id)initWithActionSet:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1 error:(id *)arg2;
- (id)plistEntriesForActionSet:(id)arg1;
- (BOOL)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;

@end
