//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMAMDConnection;

@interface CAMCoreAutomationdConnection : NSObject
{
    CAMAMDConnection *_connection;
    BOOL _isRoot;
}

+ (id)connectionWithAMDConnection:(id)arg1;
+ (id)connectionWithAMDConnection:(id)arg1 asUserRoot:(BOOL)arg2;
+ (BOOL)installCoreAutomationd:(id)arg1;
+ (void)setGlobalTimeout:(long long)arg1;
- (void).cxx_destruct;
- (id)initWithAMDConnection:(id)arg1;
- (id)initWithAMDConnection:(id)arg1 asUserRoot:(BOOL)arg2;
- (id)performCommandFromClass:(id)arg1 method:(id)arg2 arguments:(id)arg3;

@end

