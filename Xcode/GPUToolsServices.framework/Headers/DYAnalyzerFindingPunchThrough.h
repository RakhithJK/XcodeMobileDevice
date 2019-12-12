//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUToolsServices/DYAnalyzerFinding.h>

@interface DYAnalyzerFindingPunchThrough : DYAnalyzerFinding
{
    unsigned int _punchThroughReasons;
    unsigned int _numReasons;
}

- (id)_apiSpecificReasonString:(int)arg1;
- (id)_determineSeparatorByNumReasonsAdded:(unsigned int)arg1;
- (void)_initCommon;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPunchThroughReasons:(unsigned int)arg1;
- (BOOL)isBufferDataCompletelyUpdated;
- (BOOL)isDataRestoreUnnecessaryForFunc:(const struct Function *)arg1 targetArgIndex:(int)arg2 objectType:(unsigned int)arg3 analyzerEngine:(id)arg4;
- (BOOL)isFrameStatistics;
- (BOOL)isInefficientStateUpdate;
- (BOOL)isRedundantCall;
- (BOOL)isRedundantCallOrQuery;
- (BOOL)isTextureImageCompletelyUpdated;
@property(readonly, nonatomic) unsigned int numReasons; // @synthesize numReasons=_numReasons;
@property(readonly, nonatomic) unsigned int punchThroughReasons; // @synthesize punchThroughReasons=_punchThroughReasons;
- (id)reasonsString;

@end

