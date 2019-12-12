//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhysicsKit/PKPhysicsJoint.h>

@interface PKPhysicsJointPrismatic : PKPhysicsJoint
{
    struct b2PrismaticJointDef _jointDef;
    struct b2PrismaticJoint *_joint;
    struct CGPoint _anchor;
    struct CGVector _axis;
}

+ (id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(struct CGPoint)arg3 axis:(struct CGVector)arg4;
- (id).cxx_construct;
- (struct b2Joint *)_joint;
- (struct b2JointDef *)_jointDef;
- (void)create;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(struct CGPoint)arg3 axis:(struct CGVector)arg4;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) double lowerDistanceLimit;
@property(nonatomic) BOOL shouldEnableLimits;
@property(nonatomic) double upperDistanceLimit;
- (void)set_joint:(struct b2Joint *)arg1;

@end
