//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DocSetViewing/NSObject-Protocol.h>

@class NSAttributedString, NSString;

@protocol WebDocumentText <NSObject>
- (NSAttributedString *)attributedString;
- (void)deselectAll;
- (void)selectAll;
- (NSAttributedString *)selectedAttributedString;
- (NSString *)selectedString;
- (NSString *)string;
- (BOOL)supportsTextEncoding;
@end

