//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@class XCSAssigneeIssueAssociation, XCSRadarIssueAssociation;

@interface XCSIssueAssociations : XCSObject
{
    XCSRadarIssueAssociation *_radar;
    XCSAssigneeIssueAssociation *_assignee;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) XCSAssigneeIssueAssociation *assignee; // @synthesize assignee=_assignee;
- (id)dictionaryRepresentation;
- (id)extractAssociationWithClass:(Class)arg1 fromInfo:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
@property(readonly, nonatomic) XCSRadarIssueAssociation *radar; // @synthesize radar=_radar;

@end

