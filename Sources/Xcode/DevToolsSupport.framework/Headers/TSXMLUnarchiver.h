//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface TSXMLUnarchiver : NSObject
{
    struct __CFXMLParser *_parser;
    NSMutableDictionary *_entityNamesToClasses;
    id _delegate;
}

- (Class)classForEntityName:(id)arg1;
- (void)dealloc;
- (BOOL)decodeBoolAttribute:(id)arg1;
- (long long)decodeIntAttribute:(id)arg1;
- (id)decodeObject;
- (id)decodeStringAttribute:(id)arg1;
- (id)delegate;
- (void)finishDecoding;
- (id)init;
- (id)initForReadingWithData:(id)arg1;
- (void)setClass:(Class)arg1 forEntityName:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
