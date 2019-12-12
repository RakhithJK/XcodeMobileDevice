//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, PBXHeaderMap;

@interface PBXHeaderFileSearchContext : NSObject
{
    BOOL _lookInIncludersDirectory;
    NSArray *_userHeaderSearchPaths;
    PBXHeaderMap *_headermap;
    NSArray *_systemHeaderSearchPaths;
    NSArray *_frameworkSearchPaths;
    NSMutableDictionary *_directoryEntriesCache;
    NSMutableDictionary *_frameworkPathsCache;
    NSMutableDictionary *_tildeInPathsCache;
}

+ (id)headerFileSearchContextWithUserHeaderSearchPaths:(id)arg1 headermap:(id)arg2 systemHeaderSearchPaths:(id)arg3 frameworkSearchPaths:(id)arg4;
- (void)_fillFrameworkPathCache;
- (id)_fullPathOfFileNamed:(id)arg1 inPath:(id)arg2;
- (void)dealloc;
- (id)frameworkSearchPaths;
- (id)headerPathForHeaderInclusionString:(id)arg1 includedFromFilesAtPaths:(id)arg2 usingQuoteNotation:(BOOL)arg3;
- (id)headerPathForHeaderInclusionString:(id)arg1 includedFromFilesAtPaths:(id)arg2 usingQuoteNotation:(BOOL)arg3 ensureFileExists:(BOOL)arg4;
- (id)headermap;
- (id)init;
- (id)initWithUserHeaderSearchPaths:(id)arg1 headermap:(id)arg2 systemHeaderSearchPaths:(id)arg3 frameworkSearchPaths:(id)arg4;
- (void)setHeadermap:(id)arg1;
- (id)systemHeaderSearchPaths;
- (id)userHeaderSearchPaths;

@end

