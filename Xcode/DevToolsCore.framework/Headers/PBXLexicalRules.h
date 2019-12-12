//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCharacterSet, NSMutableArray, NSMutableCharacterSet, NSString, PBXSourceTokens;

@interface PBXLexicalRules : NSObject
{
    NSMutableCharacterSet *_commentStartChars;
    NSMutableCharacterSet *_endCommentStartChars;
    NSMutableCharacterSet *_singleLineCommentStartChars;
    NSMutableCharacterSet *_stringStartChars;
    NSMutableCharacterSet *_endStringStartChars;
    NSMutableCharacterSet *_charStartChars;
    NSMutableCharacterSet *_endCharStartChars;
    NSMutableCharacterSet *_identifierStartChars;
    NSMutableCharacterSet *_identifierChars;
    NSCharacterSet *_nonIdentifierCharacters;
    NSMutableCharacterSet *_numericStartChars;
    NSMutableCharacterSet *_numericChars;
    NSMutableCharacterSet *_endOfLineChars;
    NSCharacterSet *_whitespaceChars;
    NSCharacterSet *_nonWhitespaceChars;
    PBXSourceTokens *_keywords;
    PBXSourceTokens *_altKeywords;
    PBXSourceTokens *_docCommentKeywords;
    PBXSourceTokens *_preprocessorKeywords;
    NSMutableArray *_stringDelimiters;
    NSMutableArray *_commentDelimiters;
    NSMutableArray *_singleLineComment;
    NSMutableArray *_characterDelimiters;
    NSString *_docComment;
    unsigned short _docCommentKeywordStart;
    unsigned short _preprocessorKeywordStart;
    unsigned short _escapeCharacter;
    NSCharacterSet *_linkStartChars;
    NSCharacterSet *_linkPrefixChars;
    NSCharacterSet *_urlLocationChars;
    NSCharacterSet *_domainNameStartChars;
    NSCharacterSet *_domainNameChars;
    NSString *_urlSchemeDelimiter;
    NSString *_mailLocalNameDelimiter;
    BOOL _caseSensitive;
    BOOL _unicodeSymbols;
    BOOL _indexedSymbols;
    BOOL _commentsCanBeNested;
    BOOL _fortranStyleComments;
}

- (void)addDictionary:(id)arg1;
- (id)altKeywords;
- (BOOL)caseSensitive;
- (id)characterDelimiters;
- (id)commentDelimiters;
- (BOOL)commentsCanBeNested;
- (id)docComment;
- (unsigned short)docCommentKeywordStart;
- (id)docCommentKeywords;
- (id)domainNameChars;
- (unsigned short)escapeCharacter;
- (BOOL)fortranStyleComments;
- (BOOL)indexedSymbols;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isAltKeyword:(id)arg1;
- (BOOL)isCharStartChar:(unsigned short)arg1;
- (BOOL)isCommentStartChar:(unsigned short)arg1;
- (BOOL)isDocCommentKeyword:(id)arg1;
- (BOOL)isDomainNameStartChar:(unsigned short)arg1;
- (BOOL)isEndCharStartChar:(unsigned short)arg1;
- (BOOL)isEndCommentStartChar:(unsigned short)arg1;
- (BOOL)isEndOfLineChar:(unsigned short)arg1;
- (BOOL)isEndStringStartChar:(unsigned short)arg1;
- (BOOL)isIdentifierChar:(unsigned short)arg1;
- (BOOL)isIdentifierStartChar:(unsigned short)arg1;
- (BOOL)isKeyword:(id)arg1;
- (BOOL)isLinkStartChar:(unsigned short)arg1;
- (BOOL)isNumber:(id)arg1 withRange:(struct _NSRange *)arg2;
- (BOOL)isNumericChar:(unsigned short)arg1;
- (BOOL)isNumericStartChar:(unsigned short)arg1;
- (BOOL)isPreprocessorKeyword:(id)arg1;
- (BOOL)isSingleLineCommentStartChar:(unsigned short)arg1;
- (BOOL)isStringStartChar:(unsigned short)arg1;
- (BOOL)isWhitespaceChar:(unsigned short)arg1;
- (id)keywords;
- (id)linkPrefixChars;
- (id)mailLocalNameDelimiter;
- (id)nonIdentifierCharacterSet;
- (id)nonWhitespaceCharacterSet;
- (unsigned short)preprocessorKeywordStart;
- (id)preprocessorKeywords;
- (id)singleLineComment;
- (id)stringDelimiters;
- (long long)tokenForString:(id)arg1;
- (BOOL)unicodeSymbols;
- (id)urlLocationChars;
- (id)urlSchemeDelimiter;

@end

