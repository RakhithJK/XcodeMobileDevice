//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DYGuestAppSession;

@interface DYGuestAppControlStrategy : NSObject
{
    DYGuestAppSession *_session;
}

+ (Class)symbolicatorClass;
- (void).cxx_destruct;
- (void)bringToForeground;
- (void)createSymbolicator:(id)arg1;
- (id)init;
- (id)initWithSession:(id)arg1;
- (void)resume;
- (void)terminate;

@end

