//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XcodeEdit/XCSourceScanner.h>

@class NSCharacterSet, NSMutableArray;

@interface XCRegExScanner : XCSourceScanner
{
    NSCharacterSet *_startSet;
    NSCharacterSet *_invertedOtherSet;
    NSMutableArray *_regExes;
    NSMutableArray *_captureColors;
    struct _NSRange _previousTokenRange;
    BOOL _isSimpleToken;
    BOOL _altIsSimpleToken;
    BOOL _caseSensitive;
}

- (BOOL)canTokenize;
- (void)dealloc;
- (id)initWithPropertyListDictionary:(id)arg1 language:(long long)arg2;
- (long long)nextToken:(id)arg1 withContext:(id)arg2 initialToken:(long long)arg3 until:(unsigned long long)arg4 subItems:(id *)arg5;
- (id)parse:(id)arg1 withContext:(id)arg2 initialToken:(long long)arg3 inputStream:(id)arg4 range:(struct _NSRange)arg5 dirtyRange:(struct _NSRange *)arg6;
- (BOOL)predictsRule:(long long)arg1 inputStream:(id)arg2;
- (long long)tokenForString:(id)arg1 forRange:(struct _NSRange *)arg2 subItems:(id *)arg3;
- (struct _NSRange)wordRangeInString:(id)arg1 fromIndex:(unsigned long long)arg2;

@end
