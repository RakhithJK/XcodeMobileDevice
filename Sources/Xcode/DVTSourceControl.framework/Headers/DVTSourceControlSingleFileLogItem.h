//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTSourceControl/DVTSourceControlLogItem-Protocol.h>
#import <DVTSourceControl/NSCopying-Protocol.h>
#import <DVTSourceControl/NSSecureCoding-Protocol.h>

@class DVTSourceControlAuthor, DVTSourceControlRevision, DVTSourceControlWorkingCopy, NSDate, NSString;

@interface DVTSourceControlSingleFileLogItem : NSObject <NSSecureCoding, NSCopying, DVTSourceControlLogItem>
{
    NSString *_currentFilePath;
    NSString *_filePath;
    NSString *_previousFilePath;
    unsigned long long _status;
    DVTSourceControlAuthor *_author;
    DVTSourceControlRevision *_revision;
    NSDate *_date;
    NSString *_message;
    DVTSourceControlWorkingCopy *_workingCopy;
    unsigned long long _revisionType;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) DVTSourceControlAuthor *author; // @synthesize author=_author;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSString *currentFilePath; // @synthesize currentFilePath=_currentFilePath;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(readonly) unsigned long long hash;
- (id)initWithAuthor:(id)arg1 revision:(id)arg2 date:(id)arg3 message:(id)arg4 workingCopy:(id)arg5 currentFilePath:(id)arg6 filePath:(id)arg7 previousFilePath:(id)arg8 status:(unsigned long long)arg9 revisionType:(unsigned long long)arg10;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) BOOL isMerge;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *previousFilePath; // @synthesize previousFilePath=_previousFilePath;
@property(retain, nonatomic) DVTSourceControlRevision *revision; // @synthesize revision=_revision;
@property(nonatomic) unsigned long long revisionType; // @synthesize revisionType=_revisionType;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(retain, nonatomic) DVTSourceControlWorkingCopy *workingCopy; // @synthesize workingCopy=_workingCopy;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

