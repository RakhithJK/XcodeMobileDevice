//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSTextView;

@interface PBXCodeAssistantStrategy : NSObject
{
    NSTextView *_textView;
    BOOL _shouldSetInfoString;
}

- (void)dealloc;
- (BOOL)getItems:(id *)arg1 withInfoString:(id)arg2;
- (id)initWithTextView:(id)arg1;
- (struct _NSRange)selectedRange;
- (void)setShouldSetInfoString:(BOOL)arg1;
- (BOOL)shouldSetInfoString;
- (id)storage;
- (id)string;

@end

