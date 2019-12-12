//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XcodeEdit/NSObject-Protocol.h>

@class NSDictionary, NSFont, NSLayoutManager, NSTextContainer;

@protocol NSLayoutManagerDelegate <NSObject>

@optional
- (struct CGRect)layoutManager:(NSLayoutManager *)arg1 boundingBoxForControlGlyphAtIndex:(unsigned long long)arg2 forTextContainer:(NSTextContainer *)arg3 proposedLineFragment:(struct CGRect)arg4 glyphPosition:(struct CGPoint)arg5 characterIndex:(unsigned long long)arg6;
- (void)layoutManager:(NSLayoutManager *)arg1 didCompleteLayoutForTextContainer:(NSTextContainer *)arg2 atEnd:(BOOL)arg3;
- (double)layoutManager:(NSLayoutManager *)arg1 lineSpacingAfterGlyphAtIndex:(unsigned long long)arg2 withProposedLineFragmentRect:(struct CGRect)arg3;
- (double)layoutManager:(NSLayoutManager *)arg1 paragraphSpacingAfterGlyphAtIndex:(unsigned long long)arg2 withProposedLineFragmentRect:(struct CGRect)arg3;
- (double)layoutManager:(NSLayoutManager *)arg1 paragraphSpacingBeforeGlyphAtIndex:(unsigned long long)arg2 withProposedLineFragmentRect:(struct CGRect)arg3;
- (BOOL)layoutManager:(NSLayoutManager *)arg1 shouldBreakLineByHyphenatingBeforeCharacterAtIndex:(unsigned long long)arg2;
- (BOOL)layoutManager:(NSLayoutManager *)arg1 shouldBreakLineByWordBeforeCharacterAtIndex:(unsigned long long)arg2;
- (unsigned long long)layoutManager:(NSLayoutManager *)arg1 shouldGenerateGlyphs:(const unsigned short *)arg2 properties:(const long long *)arg3 characterIndexes:(const unsigned long long *)arg4 font:(NSFont *)arg5 forGlyphRange:(struct _NSRange)arg6;
- (BOOL)layoutManager:(NSLayoutManager *)arg1 shouldSetLineFragmentRect:(inout struct CGRect *)arg2 lineFragmentUsedRect:(inout struct CGRect *)arg3 baselineOffset:(inout double *)arg4 inTextContainer:(NSTextContainer *)arg5 forGlyphRange:(struct _NSRange)arg6;
- (long long)layoutManager:(NSLayoutManager *)arg1 shouldUseAction:(long long)arg2 forControlCharacterAtIndex:(unsigned long long)arg3;
- (NSDictionary *)layoutManager:(NSLayoutManager *)arg1 shouldUseTemporaryAttributes:(NSDictionary *)arg2 forDrawingToScreen:(BOOL)arg3 atCharacterIndex:(unsigned long long)arg4 effectiveRange:(struct _NSRange *)arg5;
- (void)layoutManager:(NSLayoutManager *)arg1 textContainer:(NSTextContainer *)arg2 didChangeGeometryFromSize:(struct CGSize)arg3;
- (void)layoutManagerDidInvalidateLayout:(NSLayoutManager *)arg1;
@end

