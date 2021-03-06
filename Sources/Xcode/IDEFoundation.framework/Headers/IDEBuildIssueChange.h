//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEContainer, IDEIssueProviderSession, NSArray;
@protocol IDEBlueprint;

@interface IDEBuildIssueChange : NSObject
{
    int _type;
    NSArray *_issues;
    IDEIssueProviderSession *_session;
    id _providerContext;
    IDEContainer *_container;
    id <IDEBlueprint> _blueprint;
}

+ (id)additionChangeWithIssues:(id)arg1 session:(id)arg2 forProviderContext:(id)arg3 container:(id)arg4 blueprint:(id)arg5;
+ (id)removeChangeWithIssues:(id)arg1 session:(id)arg2 forProviderContext:(id)arg3 container:(id)arg4 blueprint:(id)arg5;
+ (id)setChangeWithIssues:(id)arg1 session:(id)arg2 forProviderContext:(id)arg3 container:(id)arg4 blueprint:(id)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) id <IDEBlueprint> blueprint; // @synthesize blueprint=_blueprint;
@property(retain, nonatomic) IDEContainer *container; // @synthesize container=_container;
- (id)initWithType:(int)arg1 session:(id)arg2 issues:(id)arg3 forProviderContext:(id)arg4 container:(id)arg5 blueprint:(id)arg6;
@property(retain, nonatomic) NSArray *issues; // @synthesize issues=_issues;
@property(retain, nonatomic) id providerContext; // @synthesize providerContext=_providerContext;
@property(retain, nonatomic) IDEIssueProviderSession *session; // @synthesize session=_session;
@property(nonatomic) int type; // @synthesize type=_type;

@end

