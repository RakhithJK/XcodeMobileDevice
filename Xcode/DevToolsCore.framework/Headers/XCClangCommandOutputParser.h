//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/XCGenericCommandOutputParser.h>

@class NSMutableArray, NSString;

@interface XCClangCommandOutputParser : XCGenericCommandOutputParser
{
    NSMutableArray *_pendedFileInclusionNoteMessages;
    NSString *_pathForMostRecentIncludedMessage;
    BOOL _pendingMessagesHaveBeenAdded;
    BOOL _warningsBeingTreatedAsErrors;
}

+ (id)messagePatternListDefinitionFilename;
- (void)dealloc;
- (id)initWithNextOutputStream:(id)arg1;
- (BOOL)parseOutputLineBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void)willAddLogMessage:(id)arg1;

@end

