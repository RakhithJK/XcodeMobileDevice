//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTMarkup/DVTMarkdownWalkingDelegate-Protocol.h>

@interface _TtC9DVTMarkup23CommonMarkContentParser : NSObject <DVTMarkdownWalkingDelegate>
{
    // Error parsing type: , name: style
    // Error parsing type: , name: containerLevel
    // Error parsing type: , name: contentBlocks
    // Error parsing type: , name: currentBlockStack
    // Error parsing type: , name: currentParser
    // Error parsing type: , name: paragraphAutoOpened
    // Error parsing type: , name: pendingMediaBlock
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)parser:(id)arg1 didEndHeaderWithLevel:(unsigned long long)arg2;
- (void)parser:(id)arg1 didEndImageWithURL:(id)arg2 title:(id)arg3 parameters:(id)arg4;
- (void)parser:(id)arg1 didEndLinkWithURL:(id)arg2 title:(id)arg3 parameters:(id)arg4;
- (void)parser:(id)arg1 didEndOrderedListWithStartingNumber:(long long)arg2 delimiter:(unsigned long long)arg3;
- (void)parser:(id)arg1 didFindCodeBlock:(id)arg2 fenced:(BOOL)arg3 infoString:(id)arg4;
- (void)parser:(id)arg1 didFindInlineCode:(id)arg2;
- (void)parser:(id)arg1 didFindRawHTML:(id)arg2 blockLevel:(BOOL)arg3;
- (void)parser:(id)arg1 didFindText:(id)arg2;
- (void)parser:(id)arg1 didStartHeaderWithLevel:(unsigned long long)arg2;
- (void)parser:(id)arg1 didStartImageWithURL:(id)arg2 title:(id)arg3 parameters:(id)arg4;
- (void)parser:(id)arg1 didStartLinkWithURL:(id)arg2 title:(id)arg3 parameters:(id)arg4;
- (void)parser:(id)arg1 didStartOrderedListWithStartingNumber:(long long)arg2 delimiter:(unsigned long long)arg3;
- (void)parserDidEndBlockQuote:(id)arg1;
- (void)parserDidEndDocument:(id)arg1;
- (void)parserDidEndEmphasis:(id)arg1;
- (void)parserDidEndListItem:(id)arg1;
- (void)parserDidEndParagraph:(id)arg1;
- (void)parserDidEndStrong:(id)arg1;
- (void)parserDidEndUnorderedList:(id)arg1;
- (void)parserDidFindHorizontalRule:(id)arg1;
- (void)parserDidFindLineBreak:(id)arg1;
- (void)parserDidFindSoftLineBreak:(id)arg1;
- (void)parserDidStartBlockQuote:(id)arg1;
- (void)parserDidStartDocument:(id)arg1;
- (void)parserDidStartEmphasis:(id)arg1;
- (void)parserDidStartListItem:(id)arg1;
- (void)parserDidStartParagraph:(id)arg1;
- (void)parserDidStartStrong:(id)arg1;
- (void)parserDidStartUnorderedList:(id)arg1;

@end

