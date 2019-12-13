//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableData, NSString, NSTask, NSTextView;

@interface PBXPipeCommand : NSObject
{
    NSString *_commandString;
    int _inputSource;
    int _outputDestination;
    int _errorDestination;
    NSString *_workingDirectory;
    NSArray *_arguments;
    id _context;
    NSTask *_runningTask;
    NSString *_shellScriptPath;
    NSTextView *_outputTextView;
    struct _NSRange _outputRange;
    NSMutableData *_outputData;
    NSMutableData *_errorData;
    BOOL _stdErrDone;
    BOOL _stdOutDone;
}

+ (void)_setPipeIsRunning:(BOOL)arg1 withContext:(id)arg2;
+ (id)_xcUserScriptOutputDirectory:(BOOL)arg1;
+ (void)applicationWillTerminate:(id)arg1;
+ (void)cleanupOutputDirectory;
+ (void)initialize;
+ (BOOL)isPipeRunningWithContext:(id)arg1;
+ (void)setShellPath:(id)arg1;
+ (id)shellPath;
- (void)_checkForEndOfOutput;
- (id)_documentForTextView:(id)arg1;
- (void)_executeBinaryWithInputString:(id)arg1;
- (id)_expansionForPipeOutputVariableName:(id)arg1 inputString:(id)arg2 variableNameRange:(struct _NSRange)arg3 fullVariableRange:(struct _NSRange)arg4 context:(void *)arg5;
- (id)_expansionForPipeRuntimeVariableName:(id)arg1 inputString:(id)arg2 variableNameRange:(struct _NSRange)arg3 fullVariableRange:(struct _NSRange)arg4 context:(void *)arg5;
- (void)_finishExecuteBinary;
- (void)_handleErrorData:(id)arg1;
- (void)_handleOutputData:(id)arg1;
- (BOOL)_replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2 withContext:(id)arg3;
- (BOOL)_runWithInputString:(id)arg1;
- (id)_scriptData;
- (void)_stderrNowAvailable:(id)arg1;
- (void)_stdoutNowAvailable:(id)arg1;
- (void)_writeInputStream:(id)arg1;
- (BOOL)_writeTempScriptFile;
@property(copy) NSArray *arguments; // @synthesize arguments=_arguments;
- (BOOL)canRunWithContext:(id)arg1;
@property(copy) NSString *commandString; // @synthesize commandString=_commandString;
@property(retain) id context; // @synthesize context=_context;
- (void)dealloc;
- (id)description;
@property(readonly) int effectiveErrorDestination; // @dynamic effectiveErrorDestination;
@property(retain) NSMutableData *errorData; // @synthesize errorData=_errorData;
@property int errorDestination; // @synthesize errorDestination=_errorDestination;
- (unsigned long long)hash;
- (id)init;
@property int inputSource; // @synthesize inputSource=_inputSource;
- (BOOL)isEqual:(id)arg1;
@property(retain) NSMutableData *outputData; // @synthesize outputData=_outputData;
@property int outputDestination; // @synthesize outputDestination=_outputDestination;
@property struct _NSRange outputRange; // @synthesize outputRange=_outputRange;
@property(retain) NSTextView *outputTextView; // @synthesize outputTextView=_outputTextView;
- (BOOL)runWithContext:(id)arg1;
@property(retain) NSTask *runningTask; // @synthesize runningTask=_runningTask;
@property(copy) NSString *shellScriptPath; // @synthesize shellScriptPath=_shellScriptPath;
@property BOOL stdErrDone; // @synthesize stdErrDone=_stdErrDone;
@property BOOL stdOutDone; // @synthesize stdOutDone=_stdOutDone;
@property(copy) NSString *workingDirectory; // @synthesize workingDirectory=_workingDirectory;

@end
