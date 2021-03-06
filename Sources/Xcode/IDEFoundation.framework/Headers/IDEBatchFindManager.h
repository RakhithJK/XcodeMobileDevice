//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSArray, NSMutableArray, NSString;

@interface IDEBatchFindManager : NSObject <DVTInvalidation>
{
    NSMutableArray *_history;
    unsigned long long _maxHistoryCount;
    NSString *_archivePath;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)_removeExtraHistory;
- (void)_removeHistoryFile;
- (void)addHistoryItem:(id)arg1;
- (void)clearHistory;
@property(readonly) NSArray *findHistory; // @synthesize findHistory=_history;
- (id)historyItemForDescription:(id)arg1;
- (id)initWithDerivedDataFolderPath:(id)arg1;
- (void)loadHistory;
@property(nonatomic) unsigned long long maxHistoryCount; // @synthesize maxHistoryCount=_maxHistoryCount;
- (void)primitiveInvalidate;
- (void)saveHistory;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

