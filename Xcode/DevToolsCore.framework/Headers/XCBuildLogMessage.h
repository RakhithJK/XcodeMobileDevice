//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/XCActivityLogMessage.h>

#import <DevToolsCore/NSCopying-Protocol.h>

@class NSArray, NSString, XCTextFileLocation;

@interface XCBuildLogMessage : XCActivityLogMessage <NSCopying>
{
    XCTextFileLocation *_fileLocation;
    NSString *_categoryIdent;
    NSArray *_secondaryFileLocations;
}

+ (id)messageWithTitle:(id)arg1 fileLocation:(id)arg2;
+ (id)messageWithTitle:(id)arg1 filePath:(id)arg2 lineNumber:(unsigned long long)arg3;
- (unsigned long long)buildLogItemIdentifier;
- (struct _NSRange)buildLogTranscriptCharacterRange;
- (unsigned long long)buildLogTranscriptCharacterRangeBaseForSubitems;
- (id)buildable;
- (id)categoryIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)displayFilePath;
- (id)fileLocation;
- (id)fileLocations;
- (id)filePath;
- (BOOL)haveAnyMessagesBeenSuppressed;
- (id)initFromDeserializer:(id)arg1;
- (id)initWithTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 fileLocation:(id)arg2;
- (id)initWithTitle:(id)arg1 filePath:(id)arg2;
- (id)initWithTitle:(id)arg1 filePath:(id)arg2 lineNumber:(unsigned long long)arg3;
- (BOOL)isActive;
- (BOOL)isAnalyzerControlFlowStepMessage;
- (BOOL)isAnalyzerEventStepMessage;
- (BOOL)isAnalyzerResult;
- (BOOL)isAnalyzerResultMessage;
- (BOOL)isAnalyzerStepMessage;
- (BOOL)isAnalyzerWarningMessage;
- (BOOL)isContextInfo;
- (BOOL)isContextInfoMessage;
- (BOOL)isError;
- (BOOL)isErrorMessage;
- (BOOL)isHeaderInclusion;
- (BOOL)isHeaderInclusionMessage;
- (BOOL)isNotice;
- (BOOL)isNoticeMessage;
- (BOOL)isRuleInvocation;
- (BOOL)isTargetHeadingItem;
- (BOOL)isToplevelItem;
- (BOOL)isWarning;
- (BOOL)isWarningMessage;
- (unsigned long long)lineNumber;
- (id)messageString;
- (id)nextSiblingItem;
- (id)secondaryFileLocations;
- (void)setCategoryIdentifier:(id)arg1;
- (void)setSecondaryFileLocations:(id)arg1;
- (id)shortMessageString;
- (id)shortTitle;
- (id)subitems;
- (id)title;
- (unsigned long long)totalNumberOfAnalyzerResults;
- (unsigned long long)totalNumberOfAnalyzerWarnings;
- (unsigned long long)totalNumberOfErrors;
- (unsigned long long)totalNumberOfItems;
- (unsigned long long)totalNumberOfWarnings;
- (int)type;
- (void)writeToSerializer:(id)arg1;

@end

