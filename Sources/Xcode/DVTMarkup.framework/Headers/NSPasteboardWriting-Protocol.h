//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTMarkup/NSObject-Protocol.h>

@class NSArray, NSPasteboard, NSString;

@protocol NSPasteboardWriting <NSObject>
- (id)pasteboardPropertyListForType:(NSString *)arg1;
- (NSArray *)writableTypesForPasteboard:(NSPasteboard *)arg1;

@optional
- (unsigned long long)writingOptionsForType:(NSString *)arg1 pasteboard:(NSPasteboard *)arg2;
@end

