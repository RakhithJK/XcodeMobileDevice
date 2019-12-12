//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSAttributedString, NSString, PBXBookmark, PBXDocBookmark, PBXFileReference;

@interface PBXFindResult : NSObject
{
    PBXBookmark *_bookmark;
    NSString *_string;
    NSAttributedString *_displayAttributedString;
    PBXDocBookmark *_docBookmark;
    PBXFileReference *_fileReference;
    struct _NSRange _foundRange;
    unsigned long long _currentTimestamp;
    NSString *_lineForDisplayAttributedString;
    struct _NSRange _foundStringRange;
}

+ (void)initialize;
- (id)_initWithBookmark:(id)arg1 foundString:(id)arg2 displayAttributedString:(id)arg3;
- (void)_setupDisplayAttributedString;
- (id)bookmark;
- (void)dealloc;
- (id)description;
- (id)displayAttributedString;
@property(retain) PBXDocBookmark *docBookmark; // @synthesize docBookmark=_docBookmark;
- (id)fileReference;
- (id)foundString;
- (id)initWithBookmark:(id)arg1 foundString:(id)arg2 displayAttributedString:(id)arg3;
- (id)initWithBookmark:(id)arg1 foundString:(id)arg2 fullLine:(id)arg3 foundStringRange:(struct _NSRange)arg4;
- (id)initWithFileReference:(id)arg1 range:(struct _NSRange)arg2 foundString:(id)arg3 currentTimestamp:(unsigned long long)arg4 fullLine:(id)arg5 foundStringRange:(struct _NSRange)arg6;
- (BOOL)shouldShowBookIcon;

@end
