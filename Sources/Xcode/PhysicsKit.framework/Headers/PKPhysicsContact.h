//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PKPhysicsBody;

@interface PKPhysicsContact : NSObject
{
    PKPhysicsBody *_bodyA;
    PKPhysicsBody *_bodyB;
    struct CGPoint _contactPoint;
    struct CGVector _contactNormal;
    double _impulse;
    BOOL _didBegin;
    BOOL _didEnd;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PKPhysicsBody *bodyA;
@property(readonly, nonatomic) PKPhysicsBody *bodyB;
@property(readonly, nonatomic) double collisionImpulse;
@property(readonly, nonatomic) struct CGVector contactNormal;
@property(readonly, nonatomic) struct CGPoint contactPoint;
@property BOOL didBegin;
@property BOOL didEnd;
- (id)init;
- (void)setBodyA:(id)arg1;
- (void)setBodyB:(id)arg1;
- (void)setCollisionImpulse:(double)arg1;
- (void)setContactNormal:(struct CGVector)arg1;
- (void)setContactPoint:(struct CGPoint)arg1;

@end

