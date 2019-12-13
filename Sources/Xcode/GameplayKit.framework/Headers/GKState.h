//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GKStateMachine;

@interface GKState : NSObject
{
    GKStateMachine *_stateMachine;
}

+ (id)state;
- (void).cxx_destruct;
- (void)_setStateMachine:(id)arg1;
- (void)didEnterWithPreviousState:(id)arg1;
- (id)init;
- (BOOL)isValidNextState:(Class)arg1;
@property(readonly, nonatomic) __weak GKStateMachine *stateMachine;
- (void)updateWithDeltaTime:(double)arg1;
- (void)willExitWithNextState:(id)arg1;

@end
