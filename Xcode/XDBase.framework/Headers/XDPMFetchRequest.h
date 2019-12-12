//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XDBase/NSCoding-Protocol.h>

@class NSMutableDictionary, NSString, XDPMEntity, XDPMFetchedProperty;

@interface XDPMFetchRequest : NSObject <NSCoding>
{
    NSString *_name;
    XDPMEntity *_entity;
    NSString *_predicateString;
    XDPMFetchedProperty *_fetchedProperty;
    NSMutableDictionary *_initializationPendingKeys;
}

- (id)addKeysToDictionary:(id)arg1;
- (void)dealloc;
- (void)didChangeValueForKey:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)entity;
- (id)fetchedProperty;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)name;
- (id)predicateString;
- (void)setEntity:(id)arg1;
- (void)setFetchedProperty:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPredicateString:(id)arg1;
- (id)undoManager;
- (BOOL)validateName:(id *)arg1 error:(id *)arg2;

@end

