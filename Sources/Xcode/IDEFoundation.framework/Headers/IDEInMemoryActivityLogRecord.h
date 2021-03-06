//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEActivityLogRecord.h>

@class DVTFileDataType, IDEActivityLogSection, IDEInMemoryLogStore_Impl;

@interface IDEInMemoryActivityLogRecord : IDEActivityLogRecord
{
    IDEInMemoryLogStore_Impl *_logStore;
    IDEActivityLogSection *_fullLog;
    DVTFileDataType *_documentType;
}

+ (id)keyPathsForValuesAffectingIsRecording;
+ (id)keyPathsForValuesAffectingTimeStoppedRecording;
- (void).cxx_destruct;
- (id)description;
- (id)documentType;
- (id)domainType;
- (id)fullLogIfInMemory;
- (id)fullLogWithError:(id *)arg1;
- (id)highLevelStatus;
- (id)initWithLog:(id)arg1 entityIdentifier:(id)arg2 store:(id)arg3;
- (BOOL)isRecording;
- (BOOL)isRemoved;
- (void)removeSelfWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)signature;
- (double)timeStartedRecording;
- (double)timeStoppedRecording;
- (id)title;
- (id)uniqueIdentifier;

@end

