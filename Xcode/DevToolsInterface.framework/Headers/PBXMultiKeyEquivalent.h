//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXKeyEquivalent.h>

@interface PBXMultiKeyEquivalent : PBXKeyEquivalent
{
    PBXKeyEquivalent *_prefix;
}

+ (id)keyEquivalentWithKey:(id)arg1 modifierMask:(unsigned long long)arg2 prefix:(id)arg3;
- (id)_makeAttributedStringValue;
- (void)dealloc;
- (unsigned long long)hash;
- (id)inverseArray;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isMultiKeyEquivalent;
- (id)prefix;

@end
