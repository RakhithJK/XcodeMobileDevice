//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXCodeAssistantDataSource.h>

@class NSMutableArray;

@interface PBXCodeAssistantCLanguageDataSource : PBXCodeAssistantDataSource
{
    NSMutableArray *_cachedBigList;
    BOOL _isObjC;
    BOOL _isJava;
    BOOL _isCpp;
}

- (BOOL)_looksLikeObjCMessageExpression;
- (void)dealloc;
- (id)initWithTextView:(id)arg1 languageSpec:(id)arg2;
- (BOOL)isPopupTrigger:(unsigned short)arg1;

@end

