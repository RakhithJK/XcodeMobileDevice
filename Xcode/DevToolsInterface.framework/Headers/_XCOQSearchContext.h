//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, PBXFileDocument, PBXProjectModule, _XCOQMatchContext;

@interface _XCOQSearchContext : NSObject
{
    PBXProjectModule *_projectModule;
    PBXFileDocument *_editorDocument;
    NSString *_editorDocumentPath;
    NSString *_projectFolderPath;
    NSString *_rawInput;
    NSString *_trimmedInput;
    NSString *_line;
    BOOL _isInclude;
    BOOL _isQuote;
    _XCOQMatchContext *_matchContext;
}

+ (id)_currentProjectModule;
+ (id)_selectedStringIsInInclude:(char *)arg1 inQuotes:(char *)arg2;
+ (struct _NSRange)_selectionRangeInTextView:(id)arg1 inInclude:(char *)arg2 inQuotes:(char *)arg3;
+ (id)_trimIputString:(id)arg1;
+ (id)context;
- (id)_matchContextWithTrimmedInput:(id)arg1 line:(id)arg2;
- (void)dealloc;
- (id)description;
@property(retain) PBXFileDocument *editorDocument; // @synthesize editorDocument=_editorDocument;
@property(copy) NSString *editorDocumentPath; // @synthesize editorDocumentPath=_editorDocumentPath;
- (id)init;
@property BOOL isInclude; // @synthesize isInclude=_isInclude;
@property BOOL isQuote; // @synthesize isQuote=_isQuote;
@property(copy) NSString *line; // @synthesize line=_line;
@property(retain) _XCOQMatchContext *matchContext; // @synthesize matchContext=_matchContext;
@property(copy) NSString *projectFolderPath; // @synthesize projectFolderPath=_projectFolderPath;
@property(retain) PBXProjectModule *projectModule; // @synthesize projectModule=_projectModule;
@property(copy) NSString *rawInput; // @synthesize rawInput=_rawInput;
@property(copy) NSString *trimmedInput; // @synthesize trimmedInput=_trimmedInput;
- (void)takeInputFromCurrentSelection;

@end

