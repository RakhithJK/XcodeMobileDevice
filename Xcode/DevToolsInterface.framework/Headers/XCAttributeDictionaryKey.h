//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface XCAttributeDictionaryKey : NSString
{
    NSString *keyString;
    NSString *keyStringAlias;
    XCAttributeDictionaryKey *nextByLetter;
    unsigned char index;
    unsigned char warned;
}

+ (void)initialize;
+ (id)keyForString:(id)arg1 shouldCreate:(BOOL)arg2;
- (id)autorelease;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (unsigned long long)hash;
- (id)initWithKeyString:(id)arg1 index:(unsigned long long)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToString:(id)arg1;
- (unsigned long long)length;
- (void)release;
- (id)retain;

@end
