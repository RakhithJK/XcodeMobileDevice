//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/SCMObject.h>

@class NSArray, NSString;

@interface SCMLog : SCMObject
{
    NSArray *_children;
    NSString *_path;
}

- (void)addLogEntry:(id)arg1;
- (id)children;
- (void)dealloc;
- (void)finishLog:(id)arg1;
- (id)initWithModel:(id)arg1 parent:(id)arg2 path:(id)arg3;
@property(copy) NSString *path; // @synthesize path=_path;
- (void)setChildren:(id)arg1;

@end

