//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSCore/XCSRadarIssueAssociation.h>

#import <XCSUI/DVTRadar_Associate-Protocol.h>

@class NSAttributedString, NSString;

@interface XCSRadarIssueAssociation (Doppler) <DVTRadar_Associate>
@property(copy, nonatomic) NSString *assignee;
@property(nonatomic) unsigned long long duplicateOfProblemID;
@property(nonatomic) unsigned long long priority;
@property(readonly, copy, nonatomic) NSAttributedString *radarSummary;
@property(copy, nonatomic) NSString *resolution;
@property(copy, nonatomic) NSString *state;
@property(copy, nonatomic) NSString *substate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

