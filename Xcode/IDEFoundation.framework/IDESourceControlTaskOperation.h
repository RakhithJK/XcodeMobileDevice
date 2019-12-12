//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDESourceControlOperation.h>

@class DVTPerformanceMetric, DVTTask, NSArray, NSMutableData, NSString;

@interface IDESourceControlTaskOperation : IDESourceControlOperation
{
    DVTTask *_task;
    DVTTask *_pipeTask;
    NSString *_launchPath;
    NSString *_currentDirectoryPath;
    NSArray *_arguments;
    NSMutableData *_data;
    NSMutableData *_errorData;
    DVTPerformanceMetric *_metric;
    BOOL _readyToParseData;
    CDUnknownBlockType _standardOutputFeedbackBlock;
    CDUnknownBlockType _standardErrorFeedbackBlock;
}

+ (id)_authenticationAgentExecutablePath;
+ (void)setupFilePath:(id)arg1 asUnversionedWithDictionary:(id)arg2 blacklistedFiles:(id)arg3;
+ (id)sourceControlTaskOperationLogAspect;
- (void).cxx_destruct;
- (void)_real_main;
@property(retain) NSArray *arguments; // @synthesize arguments=_arguments;
@property(copy) NSString *currentDirectoryPath; // @synthesize currentDirectoryPath=_currentDirectoryPath;
@property(retain) NSMutableData *data; // @synthesize data=_data;
@property(retain) NSMutableData *errorData; // @synthesize errorData=_errorData;
- (id)errorFromErrorMessage:(id)arg1;
@property(copy) NSString *launchPath; // @synthesize launchPath=_launchPath;
- (void)main;
- (void)parseData;
- (void)parseDataOrGenerateErrorForTask:(id)arg1 operation:(id)arg2;
@property(retain) DVTTask *pipeTask; // @synthesize pipeTask=_pipeTask;
- (id)pipeToOperation;
- (id)rawErrorOutput;
- (id)rawInput;
- (id)rawStandardOutput;
- (id)readDataFromFileHandle:(id)arg1 intoBuffer:(id)arg2 runloopMode:(id)arg3 outstandingOperationCounter:(long long *)arg4 dataParsingBlock:(CDUnknownBlockType)arg5;
@property BOOL readyToParseData; // @synthesize readyToParseData=_readyToParseData;
@property(copy) CDUnknownBlockType standardErrorFeedbackBlock; // @synthesize standardErrorFeedbackBlock=_standardErrorFeedbackBlock;
@property(copy) CDUnknownBlockType standardOutputFeedbackBlock; // @synthesize standardOutputFeedbackBlock=_standardOutputFeedbackBlock;
- (void)setWaitToParseData:(BOOL)arg1;
@property(readonly) DVTTask *task; // @synthesize task=_task;

@end
