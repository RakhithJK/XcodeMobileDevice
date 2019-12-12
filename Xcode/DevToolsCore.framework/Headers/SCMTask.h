//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableData, NSMutableString, NSString, XCPosixTask, XCPosixTaskLaunchInfo;

@interface SCMTask : NSObject
{
    XCPosixTaskLaunchInfo *_taskInfo;
    XCPosixTask *_task;
    NSString *_description;
    BOOL _taskFinished;
    BOOL _outputDataFinished;
    BOOL _errorDataFinished;
    BOOL _handleOutput;
    NSMutableData *_errorDataBuffer;
    NSMutableData *_outputDataBuffer;
    NSMutableString *_errorStringBuffer;
    NSMutableString *_outputStringBuffer;
    NSMutableString *_errorLineBuffer;
    NSMutableString *_outputLineBuffer;
    SEL _completionSelector;
    id _completionTarget;
    SEL _outputParserSelector;
    id _outputParser;
    id _contextInfo;
    int _terminationStatus;
}

- (id)NSDataToNSString:(id)arg1;
- (BOOL)allFinished;
- (id)arguments;
@property SEL completionSelector; // @synthesize completionSelector=_completionSelector;
@property(retain) id completionTarget; // @synthesize completionTarget=_completionTarget;
@property(retain) id contextInfo; // @synthesize contextInfo=_contextInfo;
- (void)dealloc;
@property(copy) NSString *description; // @synthesize description=_description;
- (void)disconnectAndReleaseIfFinished;
@property(retain) NSMutableData *errorDataBuffer; // @synthesize errorDataBuffer=_errorDataBuffer;
@property BOOL errorDataFinished; // @synthesize errorDataFinished=_errorDataFinished;
@property(retain) NSMutableString *errorLineBuffer; // @synthesize errorLineBuffer=_errorLineBuffer;
@property(readonly) NSString *errorString;
@property(retain) NSMutableString *errorStringBuffer; // @synthesize errorStringBuffer=_errorStringBuffer;
- (void)gotErrorData:(id)arg1;
- (void)gotOutputData:(id)arg1;
- (void)handleData:(id)arg1 withBuffer:(id)arg2 lineBuffer:(id)arg3 isStdErr:(BOOL)arg4;
@property BOOL handleOutput; // @synthesize handleOutput=_handleOutput;
- (id)initWithLaunchPath:(id)arg1 directoryPath:(id)arg2 arguments:(id)arg3 environment:(id)arg4;
- (id)initWithLaunchPath:(id)arg1 directoryPath:(id)arg2 arguments:(id)arg3 environment:(id)arg4 handleOutput:(BOOL)arg5;
- (id)initWithLaunchPath:(id)arg1 directoryPath:(id)arg2 arguments:(id)arg3 environment:(id)arg4 outputParser:(id)arg5 outputParserSelector:(SEL)arg6 contextInfo:(id)arg7;
- (BOOL)launch;
@property(retain) NSMutableData *outputDataBuffer; // @synthesize outputDataBuffer=_outputDataBuffer;
@property BOOL outputDataFinished; // @synthesize outputDataFinished=_outputDataFinished;
@property(retain) NSMutableString *outputLineBuffer; // @synthesize outputLineBuffer=_outputLineBuffer;
@property(retain) id outputParser; // @synthesize outputParser=_outputParser;
@property SEL outputParserSelector; // @synthesize outputParserSelector=_outputParserSelector;
@property(readonly) NSString *outputString;
@property(retain) NSMutableString *outputStringBuffer; // @synthesize outputStringBuffer=_outputStringBuffer;
- (id)readErrorUntilString:(id)arg1 timeout:(long long)arg2;
- (id)readFileDescriptor:(long long)arg1;
- (id)readFileDescriptor:(long long)arg1 untilString:(id)arg2 timeout:(long long)arg3;
- (id)readFileHandle:(id)arg1 untilString:(id)arg2 timeout:(long long)arg3;
- (id)readOutputUntilString:(id)arg1 timeout:(long long)arg2;
- (void)setCompletionTarget:(id)arg1 selector:(SEL)arg2;
@property(retain) XCPosixTask *task; // @synthesize task=_task;
@property BOOL taskFinished; // @synthesize taskFinished=_taskFinished;
@property int terminationStatus; // @synthesize terminationStatus=_terminationStatus;
- (void)shouldCollect;
- (void)task:(id)arg1 hasSpawnStatus:(int)arg2;
- (void)task:(id)arg1 receivedStderrObject:(id)arg2;
- (void)task:(id)arg1 receivedStdoutObject:(id)arg2;
- (void)taskDidTerminate:(id)arg1;
- (void)taskOutputComplete:(id)arg1;
- (id)waitForOutputData;
- (void)waitUntilFinished;
- (void)writeData:(id)arg1;

@end

