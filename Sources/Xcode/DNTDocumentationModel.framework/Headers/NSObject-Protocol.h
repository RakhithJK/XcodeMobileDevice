//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, Protocol;

@protocol NSObject
- (id)autorelease;
- (Class)class;
- (BOOL)conformsToProtocol:(Protocol *)arg1;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) long long hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (BOOL)isMemberOfClass:(Class)arg1;
- (BOOL)isProxy;
- (id *)performSelector:(SEL)arg1;
- (id *)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id *)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)release;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)retain;
- (long long)retainCount;
- (id)self;
@property(nonatomic, readonly) Class superclass;
- (void *)zone;

@optional
@property(nonatomic, readonly) NSString *debugDescription;
@end
