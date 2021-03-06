//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEBatchFindScopeRuleRow.h>

#import <IDEKit/NSWindowDelegate-Protocol.h>

@class NSPathControl, NSString, NSTextField;

@interface IDEBatchFindScopeLocationRow : IDEBatchFindScopeRuleRow <NSWindowDelegate>
{
    NSTextField *textField;
    NSPathControl *_otherPathControl;
    BOOL _isShowingPathControl;
}

+ (void)initialize;
- (void).cxx_destruct;
- (long long)childCountForIndexPath:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)criteriaNodesForMatchingPredicate:(id)arg1;
- (id)displayValueForPath:(id)arg1;
- (id)init;
- (BOOL)isEqual:(id)arg1;
@property(readonly) BOOL isShowingPathControl; // @synthesize isShowingPathControl=_isShowingPathControl;
- (void)pathControl:(id)arg1 willDisplayOpenPanel:(id)arg2;
- (id)predicateForIndexPath:(id)arg1;
- (id)rhsPredicateValue;
- (void)rowChanged:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

