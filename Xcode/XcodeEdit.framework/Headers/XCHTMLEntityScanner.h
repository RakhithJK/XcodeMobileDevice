//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XcodeEdit/XCBlockScanner.h>

@class NSDictionary;

@interface XCHTMLEntityScanner : XCBlockScanner
{
    NSDictionary *entityMap;
}

- (void)dealloc;
- (id)initWithPropertyListDictionary:(id)arg1 language:(long long)arg2;
- (id)parse:(id)arg1 withContext:(id)arg2 initialToken:(long long)arg3 inputStream:(id)arg4 range:(struct _NSRange)arg5 dirtyRange:(struct _NSRange *)arg6;

@end

