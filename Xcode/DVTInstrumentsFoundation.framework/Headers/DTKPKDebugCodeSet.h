//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface DTKPKDebugCodeSet : NSObject
{
    NSMutableSet *_kdebugCodes;
}

+ (void)releaseFilterMask:(char *)arg1;
- (void).cxx_destruct;
- (void)addClass:(unsigned int)arg1;
- (void)addClass:(unsigned int)arg1 subclassID:(unsigned int)arg2;
- (void)addCodeSet:(id)arg1;
- (void)addCodes:(id)arg1;
- (BOOL)containsClass:(unsigned int)arg1;
- (BOOL)containsClass:(unsigned int)arg1 subclassID:(unsigned int)arg2;
- (char *)createFilterMask:(BOOL)arg1;
- (id)description;
- (id)init;
- (id)initWithCodes:(id)arg1;
@property(readonly, retain, nonatomic) NSMutableSet *kdebugCodes; // @synthesize kdebugCodes=_kdebugCodes;
- (id)legacyXML;

@end

