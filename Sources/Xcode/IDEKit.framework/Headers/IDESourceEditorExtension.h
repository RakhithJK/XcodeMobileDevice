//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTToolsVersion, NSArray, NSDictionary, NSExtension, NSMutableDictionary, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, _XCSourceEditorServiceProtocol;

@interface IDESourceEditorExtension : NSObject
{
    NSObject<OS_dispatch_queue> *_serviceQueue;
    NSXPCConnection *_serviceConnection;
    id <_XCSourceEditorServiceProtocol> _service;
    NSMutableDictionary *_outstandingCommandInvocations;
    NSExtension *_extension;
    NSString *_name;
    NSString *_identifier;
    NSArray *_commands;
    DVTToolsVersion *_builtAgainstXcodeVersion;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    NSDictionary *_commandsByIdentifier;
}

+ (void)_keyBindingDidChange:(id)arg1;
+ (void)_updateEditorMenu;
+ (BOOL)_updateKeyBinding:(id)arg1 forCommand:(id)arg2;
+ (void)_updateKeyBindingsForCommands;
+ (void)initialize;
+ (void)registerMenuKeyBindingsToMenuKeyBindingSet:(id)arg1;
+ (id)sourceEditorExtensions;
+ (void)startLocatingSourceEditorExtensions;
- (void).cxx_destruct;
- (void)_instantiateProperCommandDefinitions:(id)arg1;
- (void)_safelyAbortCheckInWithHostContext:(id)arg1 reason:(id)arg2;
- (BOOL)_safelyAwaitCheckInWithHostContext:(id)arg1;
@property(readonly, copy) DVTToolsVersion *builtAgainstXcodeVersion; // @synthesize builtAgainstXcodeVersion=_builtAgainstXcodeVersion;
@property(readonly, copy) NSArray *commands; // @synthesize commands=_commands;
@property(readonly, copy) NSDictionary *commandsByIdentifier; // @synthesize commandsByIdentifier=_commandsByIdentifier;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)description;
@property(readonly) NSExtension *extension; // @synthesize extension=_extension;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithExtension:(id)arg1;
@property(copy) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(copy) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (void)restart:(CDUnknownBlockType)arg1;
- (void)sendCancelCommandWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendPerformCommandRequestWithUUID:(id)arg1 commandIdentifier:(id)arg2 parameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)start:(CDUnknownBlockType)arg1;
- (void)stop:(CDUnknownBlockType)arg1;

@end

