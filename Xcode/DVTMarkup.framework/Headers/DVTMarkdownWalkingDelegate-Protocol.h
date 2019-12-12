//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTMarkup/NSObject-Protocol.h>

@class DVTMarkdownParser, NSDictionary, NSError, NSString;

@protocol DVTMarkdownWalkingDelegate <NSObject>

@optional
- (void)parser:(DVTMarkdownParser *)arg1 didAbortWithError:(NSError *)arg2;
- (void)parser:(DVTMarkdownParser *)arg1 didEndHeaderWithLevel:(unsigned long long)arg2;
- (void)parser:(DVTMarkdownParser *)arg1 didEndImageWithURL:(NSString *)arg2 title:(NSString *)arg3 parameters:(NSDictionary *)arg4;
- (void)parser:(DVTMarkdownParser *)arg1 didEndLinkWithURL:(NSString *)arg2 title:(NSString *)arg3 parameters:(NSDictionary *)arg4;
- (void)parser:(DVTMarkdownParser *)arg1 didEndOrderedListWithStartingNumber:(long long)arg2 delimiter:(unsigned long long)arg3;
- (void)parser:(DVTMarkdownParser *)arg1 didFindCodeBlock:(NSString *)arg2 fenced:(BOOL)arg3 infoString:(NSString *)arg4;
- (void)parser:(DVTMarkdownParser *)arg1 didFindInlineCode:(NSString *)arg2;
- (void)parser:(DVTMarkdownParser *)arg1 didFindRawHTML:(NSString *)arg2 blockLevel:(BOOL)arg3;
- (void)parser:(DVTMarkdownParser *)arg1 didFindText:(NSString *)arg2;
- (void)parser:(DVTMarkdownParser *)arg1 didStartHeaderWithLevel:(unsigned long long)arg2;
- (void)parser:(DVTMarkdownParser *)arg1 didStartImageWithURL:(NSString *)arg2 title:(NSString *)arg3 parameters:(NSDictionary *)arg4;
- (void)parser:(DVTMarkdownParser *)arg1 didStartLinkWithURL:(NSString *)arg2 title:(NSString *)arg3 parameters:(NSDictionary *)arg4;
- (void)parser:(DVTMarkdownParser *)arg1 didStartOrderedListWithStartingNumber:(long long)arg2 delimiter:(unsigned long long)arg3;
- (void)parserDidEndBlockQuote:(DVTMarkdownParser *)arg1;
- (void)parserDidEndDocument:(DVTMarkdownParser *)arg1;
- (void)parserDidEndEmphasis:(DVTMarkdownParser *)arg1;
- (void)parserDidEndListItem:(DVTMarkdownParser *)arg1;
- (void)parserDidEndParagraph:(DVTMarkdownParser *)arg1;
- (void)parserDidEndStrong:(DVTMarkdownParser *)arg1;
- (void)parserDidEndUnorderedList:(DVTMarkdownParser *)arg1;
- (void)parserDidFindHorizontalRule:(DVTMarkdownParser *)arg1;
- (void)parserDidFindLineBreak:(DVTMarkdownParser *)arg1;
- (void)parserDidFindSoftLineBreak:(DVTMarkdownParser *)arg1;
- (void)parserDidStartBlockQuote:(DVTMarkdownParser *)arg1;
- (void)parserDidStartDocument:(DVTMarkdownParser *)arg1;
- (void)parserDidStartEmphasis:(DVTMarkdownParser *)arg1;
- (void)parserDidStartListItem:(DVTMarkdownParser *)arg1;
- (void)parserDidStartParagraph:(DVTMarkdownParser *)arg1;
- (void)parserDidStartStrong:(DVTMarkdownParser *)arg1;
- (void)parserDidStartUnorderedList:(DVTMarkdownParser *)arg1;
@end

