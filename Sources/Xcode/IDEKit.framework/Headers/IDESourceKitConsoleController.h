//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <IDEKit/IDECommandHandler-Protocol.h>
#import <IDEKit/IDECommandHandlerVendor-Protocol.h>

@class NSString, NSTextField, NSTextView, _IDESourceKitConsoleCommandHandler;

@interface IDESourceKitConsoleController : NSWindowController <IDECommandHandlerVendor, IDECommandHandler>
{
    _IDESourceKitConsoleCommandHandler *_commandHandler;
    NSTextView *_logTextView;
    NSTextField *_inputTextField;
}

+ (id)handlerForAction:(SEL)arg1 withSelectionSource:(id)arg2;
- (void).cxx_destruct;
- (void)_appendCommandResult:(id)arg1;
- (void)_appendPrompt;
- (void)_handleCommandString:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_scrollToBottom;
- (id)init;
@property(retain, nonatomic) NSTextField *inputTextField; // @synthesize inputTextField=_inputTextField;
- (void)inputTextFieldDidChange:(id)arg1;
- (void)loadSourceKitConsole:(id)arg1;
@property(retain, nonatomic) NSTextView *logTextView; // @synthesize logTextView=_logTextView;
- (BOOL)validateUserInterfaceItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

