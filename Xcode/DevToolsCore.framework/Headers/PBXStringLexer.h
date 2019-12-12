//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/PBXSourceLexer.h>

@class NSMutableData, NSString;

@interface PBXStringLexer : PBXSourceLexer
{
    NSMutableData *_buffData;
    void *_buff;
    NSString *_realString;
    unsigned long long _realStringLength;
    unsigned long long _scanLimit;
    BOOL _scanInProgress;
}

- (void)_beginScanning;
- (void)_endScanning;
- (unsigned long long)curLocation;
- (void)dealloc;
- (id)initWithLexicalRules:(id)arg1;
- (BOOL)inputIsInSet:(id)arg1;
- (BOOL)inputMatchesString:(id)arg1;
- (unsigned long long)length;
- (unsigned short)nextChar;
- (unsigned short)nextCharWithoutSkippingWhitespace;
- (unsigned short)peekChar;
- (unsigned short)peekCharWithoutSkippingWhitespace;
- (unsigned long long)peekCharacterInSet:(id)arg1;
- (void)scanForLinksInRange:(struct _NSRange)arg1;
- (void)scanSubRange:(struct _NSRange)arg1 startingInState:(int)arg2;
- (void)setLocation:(unsigned long long)arg1;
- (void)setString:(id)arg1 range:(struct _NSRange)arg2;
- (void)setTokenStringToRange:(struct _NSRange)arg1;
- (unsigned short)skipToCharacter:(unsigned short)arg1 orCharacter:(unsigned short)arg2 withEscape:(BOOL)arg3;
- (void)skipToCharacter:(unsigned short)arg1 withEscape:(BOOL)arg2;
- (void)skipToEndOfLineWithEscape:(BOOL)arg1;
- (void)skipWhitespace;
- (void)stringWasEdited:(struct _NSRange *)arg1 replacementLength:(long long)arg2;

@end

