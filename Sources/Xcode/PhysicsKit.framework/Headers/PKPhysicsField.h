//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PKRegion;
@protocol NSObject;

@interface PKPhysicsField : NSObject
{
    shared_ptr_307a0f33 _field;
    PKRegion *_region;
    // Error parsing type: , name: _position
    float _rotation;
    // Error parsing type: , name: _scale
    BOOL _override;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (shared_ptr_307a0f33)_field;
@property(nonatomic) unsigned int categoryBitMask;
- (void)dealloc;
// Error parsing type for property direction:
// Property attributes: T,N

@property(nonatomic) float falloff;
- (id)init;
- (BOOL)isActive;
@property(nonatomic, getter=isEnabled) BOOL enabled;
@property(nonatomic, getter=isOverride) BOOL override; // @synthesize override=_override;
@property(nonatomic) float minimumRadius;
- (BOOL)override;
// Error parsing type for property position:
// Property attributes: T,N

@property(retain, nonatomic) id region;
@property(nonatomic) __weak id <NSObject> representedObject;
@property(nonatomic) float rotation;
// Error parsing type for property scale:
// Property attributes: T,N

- (void)setActive:(BOOL)arg1;
- (void)setIsOverride:(BOOL)arg1;
@property(nonatomic) float strength;
- (void)set_field:(shared_ptr_307a0f33)arg1;

@end
