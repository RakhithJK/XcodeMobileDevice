//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUToolsServices/DYAnalyzerFinding.h>

@class NSBundle;

@interface DYMTLAnalyzerFinding : DYAnalyzerFinding
{
    NSBundle *_pluginBundle;
}

- (void).cxx_destruct;
- (id)_getLocalizedStringFromBundle:(id)arg1 withKey:(id)arg2 table:(id)arg3;
- (id)_simplifiedDetailsStringSubstituted:(id)arg1 plural:(BOOL)arg2;
- (id)initWithPlatform:(int)arg1;
- (id)initWithPlatform:(int)arg1 unsorted:(BOOL)arg2;
- (BOOL)isBufferDataCompletelyUpdated;
- (BOOL)isDataRestoreUnnecessaryForFunc:(const struct Function *)arg1 targetArgIndex:(int)arg2 objectType:(unsigned int)arg3 analyzerEngine:(id)arg4;
- (BOOL)isEncoderStatistics;
- (BOOL)isFrameStatistics;
- (BOOL)isInefficientStateUpdate;
- (BOOL)isRedundantCall;
- (BOOL)isRedundantCallOrQuery;
- (BOOL)isTextureImageCompletelyUpdated;
- (id)localizedKind;
- (id)synopsis;

@end

