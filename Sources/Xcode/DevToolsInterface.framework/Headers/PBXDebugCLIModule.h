//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXProjectModule.h>

#import <DevToolsInterface/PBXIncrementalFindable-Protocol.h>
#import <DevToolsInterface/PBXTSCharacterStreamConsuming-Protocol.h>
#import <DevToolsInterface/XCDebuggerConsoleCompletion-Protocol.h>

@class NSMutableArray, NSString, PBXTSCharacterStream, PBXTSUTF8BufferFilter, PBXTSUTF8EncoderFilter, PBXTtyText, XCIncrementalFinder;

@interface PBXDebugCLIModule : PBXProjectModule <PBXIncrementalFindable, PBXTSCharacterStreamConsuming, XCDebuggerConsoleCompletion>
{
    PBXTtyText *_ttyText;
    NSMutableArray *_commands;
    long long _currentCommand;
    PBXTSCharacterStream *_streamFromTTY;
    PBXTSUTF8EncoderFilter *_utf8Encoder;
    PBXTSUTF8BufferFilter *_utf8Buffer;
    PBXDebugCLIModule *_consoleToCopyTo;
    BOOL _sendTextEnabled;
    BOOL _repeatLastCommandOnNewline;
    BOOL _supportsCompletion;
    PBXTSCharacterStream *_stdinStream;
    PBXTSUTF8EncoderFilter *_utf8StdinEncoder;
    PBXTSUTF8BufferFilter *_utf8StdoutBuffer;
    BOOL _isIncrementalFinderBarVisible;
    XCIncrementalFinder *_incrementalFinder;
    BOOL _isTiling;
}

+ (void)initialize;
- (void)_viewFrameDidChange:(id)arg1;
- (BOOL)allowsReplace;
- (void)becomeActive;
- (id)byteStreamConsumerToTTY;
- (id)characterStreamFromTTY;
- (void)clear;
- (void)complete:(id)arg1;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (void)doNextCommand:(id)arg1;
- (void)doPrevCommand:(id)arg1;
- (id)executableStdoutConsumer;
- (BOOL)findRegularExpression:(id)arg1 ignoreCase:(BOOL)arg2 backwards:(BOOL)arg3 wrap:(BOOL)arg4;
- (BOOL)findText:(id)arg1 ignoreCase:(BOOL)arg2 matchStyle:(int)arg3 backwards:(BOOL)arg4 wrap:(BOOL)arg5;
- (void)hideIncrementalFindBar:(id)arg1;
- (void)incrementalFindBarChangedSize;
- (void)incrementalFindBarDismissed;
- (id)incrementalFindNextKeyView;
- (id)initWithModuleNibName:(id)arg1;
- (void)insertText:(id)arg1;
- (void)insertText:(id)arg1 withTextAttributes:(id)arg2;
- (BOOL)isIncrementalFinderBarVisible;
- (void)launchSession:(id)arg1 displayString:(id)arg2;
- (void)launchSession:(id)arg1 setCLIPrompt:(id)arg2;
- (void)launchSession:(id)arg1 setStringAsIfTypedByUser:(id)arg2;
- (id)mainEditor;
- (BOOL)moduleEnforcesViewMinSize;
- (id)moduleForAction:(SEL)arg1;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (unsigned long long)replaceAllStringsMatchingRegularExpression:(id)arg1 withString:(id)arg2 inSelection:(BOOL)arg3 ignoreCase:(BOOL)arg4;
- (unsigned long long)replaceAllStringsMatchingString:(id)arg1 withString:(id)arg2 inSelection:(BOOL)arg3 ignoreCase:(BOOL)arg4 matchStyle:(int)arg5;
- (BOOL)replaceCurrentSelectionWithString:(id)arg1;
- (void)reset;
- (id)selectedString;
- (void)setCopyStreamedTextToConsole:(id)arg1;
- (void)setIncrementalFinderBarVisible:(BOOL)arg1 withReplace:(BOOL)arg2;
- (void)setInputText:(id)arg1;
- (void)setProcessIsRunning;
- (void)setPromptString:(id)arg1;
- (void)setRepeatLastCommandOnNewline:(BOOL)arg1;
- (void)setSendTextEnabled:(BOOL)arg1;
- (void)setSupportsCompletion:(BOOL)arg1;
- (void)showIncrementalFindAndReplaceBar:(id)arg1;
- (void)showIncrementalFindBar:(id)arg1;
- (id)stdinStreamForExecutable;
- (void)stream:(id)arg1 processCharacters:(id)arg2;
- (void)streamDidEnd:(id)arg1;
- (BOOL)supportsCompletion;
- (unsigned long long)textLength;
- (id)textView;
- (void)tile;
- (void)ttyText:(id)arg1 inputText:(id)arg2;
- (void)ttyText:(id)arg1 stdinText:(id)arg2;
- (void)ttyTextDoInterrupt:(id)arg1;
- (id)ttyTextView;
- (id)utf8ExecutableStdinStream;
- (id)utf8StreamFromTTY;
- (void)viewDidLoad;
- (struct CGSize)viewMinSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

