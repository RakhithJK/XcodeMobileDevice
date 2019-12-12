//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableData, NSString, PBXLexicalRules, XCAttributeRun;
@protocol PBXSourceLexerDelegate;

@interface PBXSourceLexer : NSObject
{
    PBXLexicalRules *_rules;
    struct _NSRange _tokenRange;
    NSString *_tokenString;
    id <PBXSourceLexerDelegate> _delegate;
    BOOL _ignoreNewLines;
    BOOL fortranStyleComments;
    NSMutableData *characterMapData;
    char *characterMap;
    XCAttributeRun *_tokenRun;
}

- (long long)_matchIn2DArray:(id)arg1 atIndex:(long long)arg2;
- (unsigned long long)_matchInArray:(id)arg1 atIndex:(long long)arg2;
- (long long)_nextToken;
- (void)buildCharacterMap;
- (long long)cachedTokenTypeAtLocation:(unsigned long long)arg1 tokenRange:(struct _NSRange *)arg2;
- (unsigned long long)curLocation;
- (void)dealloc;
- (void)decLocation;
- (void)gotAltKeywordForRange:(struct _NSRange)arg1;
- (void)gotCharacterForRange:(struct _NSRange)arg1;
- (void)gotCommentForRange:(struct _NSRange)arg1;
- (void)gotDocCommentForRange:(struct _NSRange)arg1;
- (void)gotDocCommentKeywordForRange:(struct _NSRange)arg1;
- (void)gotIdentifierForRange:(struct _NSRange)arg1;
- (void)gotKeywordForRange:(struct _NSRange)arg1;
- (void)gotMailAddressForRange:(struct _NSRange)arg1;
- (void)gotMultilineCommentForRange:(struct _NSRange)arg1;
- (void)gotNumberForRange:(struct _NSRange)arg1;
- (void)gotPreprocessorForRange:(struct _NSRange)arg1;
- (void)gotStringForRange:(struct _NSRange)arg1;
- (void)gotURLForRange:(struct _NSRange)arg1;
- (void)incLocation;
- (id)initWithLexicalRules:(id)arg1;
- (BOOL)inputIsInSet:(id)arg1;
- (BOOL)inputMatchesString:(id)arg1;
- (unsigned long long)length;
- (unsigned short)nextChar;
- (unsigned short)nextCharWithoutSkippingWhitespace;
- (long long)nextToken;
- (long long)nextToken:(BOOL)arg1;
- (void)parseDocCommentFromLoc:(unsigned long long)arg1 matchIndex:(long long)arg2;
- (unsigned short)peekChar;
- (unsigned short)peekCharWithoutSkippingWhitespace;
- (unsigned long long)peekCharacterInSet:(id)arg1;
- (long long)peekToken;
- (id)rules;
- (void)scanForLinksInRange:(struct _NSRange)arg1;
- (void)scanSubRange:(struct _NSRange)arg1 startingInState:(int)arg2;
- (void)setDelegate:(id)arg1;
- (void)setIgnoreNewLines:(BOOL)arg1;
- (void)setLocation:(unsigned long long)arg1;
- (void)setString:(id)arg1 range:(struct _NSRange)arg2;
- (void)setTokenStringToRange:(struct _NSRange)arg1;
- (void)skipMultiLineCommentFromLoc:(unsigned long long)arg1 matchIndex:(long long)arg2;
- (unsigned short)skipToCharacter:(unsigned short)arg1 orCharacter:(unsigned short)arg2 withEscape:(BOOL)arg3;
- (void)skipToCharacter:(unsigned short)arg1 withEscape:(BOOL)arg2;
- (void)skipToEndDelimeter:(unsigned short)arg1 withStart:(unsigned short)arg2;
- (void)skipToEndOfLineWithEscape:(BOOL)arg1;
- (void)skipToString:(id)arg1 withEscape:(BOOL)arg2;
- (void)skipWhitespace;
- (id)stringForRange:(struct _NSRange)arg1;
- (void)stringWasEdited:(struct _NSRange *)arg1 replacementLength:(long long)arg2;
- (struct _NSRange)tokenRange;
- (id)tokenString;

@end

