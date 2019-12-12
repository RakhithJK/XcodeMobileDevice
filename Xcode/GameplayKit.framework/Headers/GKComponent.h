//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameplayKit/NSCoding-Protocol.h>
#import <GameplayKit/NSCopying-Protocol.h>

@class GKComponentSystem, GKEntity, NSString;

@interface GKComponent : NSObject <NSCopying, NSCoding>
{
    GKEntity *_entity;
    int _usesPerComponentUpdateCount;
    GKComponentSystem *_componentSystem;
    NSString *_componentName;
}

- (void).cxx_destruct;
@property(nonatomic) NSString *componentName;
@property(nonatomic) GKComponentSystem *componentSystem;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)didAddToEntity;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) __weak GKEntity *entity;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (void)setEntity:(id)arg1;
@property(nonatomic) BOOL usesPerComponentUpdate;
- (void)updateWithDeltaTime:(double)arg1;
- (void)willRemoveFromEntity;

@end

