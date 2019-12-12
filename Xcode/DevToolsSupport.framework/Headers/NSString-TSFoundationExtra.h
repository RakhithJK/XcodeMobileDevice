//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (TSFoundationExtra)
+ (id)stringWithBase64RepresentationOfBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (id)stringWithBase64RepresentationOfUniqueIdentifier;
+ (id)stringWithHexRepresentationOfBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (id)stringWithHexadecimalRepresentationOfUniqueIdentifier;
+ (id)stringWithUnicodeInvisibleSeparatorCharacter;
+ (id)stringWithUnicodeInvisibleTimesCharacter;
- (id)PBX_stringByReplacingBackslashWithSlash;
- (struct _NSRange)characterRangeForLineRange:(struct _NSRange)arg1;
- (id)dictionaryByParsingAsSimpleAssignmentsAndGetLocalizedErrorString:(id *)arg1;
- (id)firstMatchingPrefixFromArray:(id)arg1;
- (struct _NSRange)lineRangeForCharacterRange:(struct _NSRange)arg1;
- (unsigned long long)numberOfLines;
- (id)stringByAppendingPathSeparatorIfNeeded;
- (id)stringByQuotingIfNeeded;
- (id)stringByQuotingOnlyIfNeeded:(BOOL)arg1 quoteTabsAndEOLs:(BOOL)arg2 quoteHighBitUnichars:(BOOL)arg3;
- (id)stringByQuotingWhitespaceIfNeeded;
- (id)stringByRemovingLeadingAndTrailingCharactersFromSet:(id)arg1;
- (id)stringByRemovingLeadingAndTrailingWhitespace;
- (id)stringByRemovingLeadingAndTrailingWhitespaceAndNewlines;
- (id)stringByRemovingPrefix:(id)arg1;
- (id)stringByRemovingSuffix:(id)arg1;
- (id)stringByReplacingCharacter:(unsigned short)arg1 withCharacter:(unsigned short)arg2;
- (id)stringByReplacingSubstring:(id)arg1 withString:(id)arg2;
- (id)substringAfterString:(id)arg1 crossingLineBoundaries:(BOOL)arg2;
- (id)substringBeforeString:(id)arg1 crossingLineBoundaries:(BOOL)arg2;
- (id)substringBetweenString:(id)arg1 andString:(id)arg2 crossingLineBoundaries:(BOOL)arg3;
@end
