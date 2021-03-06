//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/XCWorkQueueCommand.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, PBXTargetBuildContext, XCCommandLineToolSpecification, XCPropertyDictionary, XCWorkQueueCommandInvocation;

@interface XCDependencyCommand : XCWorkQueueCommand
{
    PBXTargetBuildContext *_buildContext;
    unsigned long long _commandNumber;
    NSMutableArray *_filePathsToRemove;
    unsigned long long _phaseNumber;
    NSMutableArray *_inputNodes;
    NSMutableArray *_outputNodes;
    XCCommandLineToolSpecification *_toolSpecification;
    NSArray *_ruleInfo;
    NSString *_commandPath;
    NSMutableArray *_arguments;
    NSMutableDictionary *_environment;
    NSString *_architecture;
    NSString *_variant;
    NSString *_workingDirPath;
    id _customToolInfoObject;
    CDStruct_7eef4560 _inputSignature;
    CDStruct_7eef4560 _configSignature;
    int _state;
    BOOL _waitCountBeingAdjusted;
    BOOL _beingEnqueued;
    BOOL _caresAboutIncludes;
    BOOL _mightHavePredProcOutput;
    BOOL _shouldSynchronizeOnFiles;
    BOOL _isBlockedOnFileLocks;
    BOOL _neededToRunWhenLastEnqueued;
    BOOL _emitEnvVars;
    NSMutableArray *_buildMessages;
    BOOL _specialEditingWasDone;
    NSString *_whyState;
    XCWorkQueueCommandInvocation *_currentInvocation;
    NSString *_commandLineDisplayString;
    XCPropertyDictionary *_launchPropertyDict;
    NSString *_extraSignatureInfo;
    struct {
        int state;
        CDStruct_7eef4560 configSig;
        NSString *whyDirty;
        unsigned char markByte;
    } _cmnd2009;
}

- (BOOL)_2009_doesCommandNeedToRun;
- (void)_2009_enqueueCommandsOntoWorkQueue:(id)arg1 whenceDebugDesc:(id)arg2;
- (void)_addConfigurationSignatureIngredientsToMD5Context:(struct CC_MD5state_st *)arg1;
- (void)_addDependingNode:(id)arg1;
- (id)_buildStateId;
- (void)addArgument:(id)arg1;
- (void)addArguments:(id)arg1;
- (void)addArgumentsFromArray:(id)arg1;
- (void)addBuildMessage:(id)arg1;
- (void)addCommandIdentToBuildStateStoreDependencyList;
- (void)addEnvironmentEntriesFromDictionary:(id)arg1;
- (void)addEnvironmentValue:(id)arg1 forKey:(id)arg2;
- (void)addFilePathToRemove:(id)arg1;
- (void)addInputNode:(id)arg1;
- (void)addOutputNode:(id)arg1;
- (id)architecture;
- (id)argumentAtIndex:(unsigned long long)arg1;
- (id)arguments;
- (id)buildCommandState;
- (id)buildContext;
- (BOOL)caresAboutIncludes;
- (void)checkWaitCounts;
- (void)commandInvocation:(id)arg1 didEmitBytes:(const char *)arg2 length:(unsigned long long)arg3;
- (void)commandInvocationDidEnd:(id)arg1 successfully:(BOOL)arg2;
- (void)commandInvocationWillStart:(id)arg1;
- (id)commandLine;
- (unsigned long long)commandNumber;
- (id)commandPath;
- (void)computeStateIfNeeded;
- (CDStruct_7eef4560)configurationSignature;
- (id)createStartedCommandInvocationInSlot:(unsigned long long)arg1 ofWorkQueueOperation:(id)arg2;
- (id)customToolInfoObject;
- (void)dealloc;
- (void)decrementWaitCount;
- (void)decrementWaitCountsOfDependingNodes;
- (id)dependencyNode;
- (id)description;
- (id)descriptionForWorkQueueLog;
- (void)detachFromOtherGraphObjects;
- (void)didDeactivateInWorkQueue:(id)arg1 didCompleteSuccessfully:(BOOL)arg2;
- (id)displayString;
- (BOOL)emitEnvVars;
- (void)enqueueOutOfDateCommandsOntoWorkQueue:(id)arg1;
- (id)environment;
- (id)extraSignatureInfo;
- (void)fileMayHaveChanged;
- (id)filePathsToRemove;
- (BOOL)hasCachedOutputs;
- (void)incrementWaitCount;
- (void)incrementWaitCountsOfDependingNodes;
- (unsigned long long)indexOfArgumentHavingPrefix:(id)arg1 startingAtIndex:(unsigned long long)arg2;
- (id)init;
- (id)initWithCommandNumber:(unsigned long long)arg1 ruleInfo:(id)arg2 commandPath:(id)arg3;
- (id)initWithCommandNumber:(unsigned long long)arg1 ruleInfo:(id)arg2 commandPath:(id)arg3 arguments:(id)arg4 environment:(id)arg5;
- (BOOL)inputAndOutputFilesAreAvailable;
- (id)inputNodes;
- (CDStruct_7eef4560)inputSignature;
- (id)instantiatedCommandOutputParserWithLogSectionRecorder:(id)arg1;
- (id)instantiatedCommandResultsPostprocessor;
- (void)invalidateConfigurationSignature;
- (void)invalidateInputSignature;
- (BOOL)isBlockedOnInputOrOutputFileLocks;
- (BOOL)isReadyForProcessing;
- (BOOL)isUpToDate;
- (id)launchPropertyExpansionDictionary;
- (void)lockInputAndOutputFiles;
- (void)makeConsumerCommandsOfOutputNodesPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)makeOutputNodesPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (id)name;
- (id)nameForGraphViz;
- (BOOL)neededToRunWhenLastEnqueued;
- (BOOL)needsToRun;
- (void)noteMightHavePredictiveProcessingOutput;
- (unsigned long long)numberOfArguments;
- (BOOL)outputFilesHaveBeenUpdated;
- (id)outputNodes;
- (id)path;
- (id)paths;
- (unsigned long long)phaseNumber;
- (id)predictiveProcessingCandidateFilePath;
- (id)predictiveProcessingInputFilePath;
- (id)predictiveProcessingValiditySignature;
- (void)propagateCachedOutputs;
- (void)propagateSignatureToOutputNodes;
- (void)removeArgumentAtIndex:(unsigned long long)arg1;
- (void)removePredictiveProcessingOutputRecursivelyBecauseOfChangedNode:(id)arg1;
- (void)replaceArgumentAtIndex:(unsigned long long)arg1 withArgument:(id)arg2;
- (void)rerunCommand;
- (void)resetState;
- (void)resetStateRecursively;
- (id)ruleInfo;
- (void)setArchitecture:(id)arg1;
- (void)setBuildContext:(id)arg1 commandNumber:(unsigned long long)arg2;
- (void)setCaresAboutIncludes:(BOOL)arg1;
- (void)setCommandPath:(id)arg1;
- (void)setCustomToolInfoObject:(id)arg1;
- (void)setEmitEnvVars:(BOOL)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setExtraSignatureInfo:(id)arg1;
- (void)setLaunchPropertyExpansionDictionary:(id)arg1;
- (void)setNeededToRunWhenLastEnqueued:(BOOL)arg1;
- (void)setPhaseNumber:(unsigned long long)arg1;
- (void)setRuleInfo:(id)arg1;
- (void)setShouldSynchronizeOnFiles:(BOOL)arg1;
- (void)setSpecialEditingOfCommandLineHasBeenPerformed:(BOOL)arg1;
- (void)setToolSpecification:(id)arg1;
- (void)setVariant:(id)arg1;
- (void)setWorkingDirectoryPath:(id)arg1;
- (id)sharedMemoryName;
- (id)shortNameForDebugging;
- (BOOL)shouldPropagateCachedOutputs;
- (BOOL)shouldSynchronizeOnFiles;
- (CDStruct_7eef4560)signature;
- (id)signatureDescription;
- (BOOL)specialEditingOfCommandLineHasBeenPerformed;
- (void)statFileIfNeeded;
- (int)state;
- (id)stateDescription;
- (id)subprocessCommandLineForProcessing;
- (id)subprocessExtraEnvironmentEntriesForProcessing;
- (id)subprocessWorkingDirectoryForProcessing;
- (id)toolSpecification;
- (void)touch;
- (unsigned long long)transformArgumentsHavingPrefix:(id)arg1 inRange:(struct _NSRange)arg2 usingFormatString:(id)arg3;
- (unsigned long long)transformArgumentsHavingPrefix:(id)arg1 usingFormatString:(id)arg2;
- (void)unlockInputAndOutputFiles;
- (void)untouch;
- (id)variant;
- (void)willActivateInWorkQueue:(id)arg1;
- (id)workingDirectoryPath;
- (void)writeDefinitionToGraphVizFile:(struct __sFILE *)arg1;
- (void)writeInputEdgesToGraphVizFile:(struct __sFILE *)arg1;

@end

