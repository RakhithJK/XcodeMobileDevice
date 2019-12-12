//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DADocSetAccess/DocSetIndex.h>

@class DSADocSet, NSMutableDictionary;

@interface DSATextIndex : DocSetIndex
{
    DSADocSet *_docSet;
    NSMutableDictionary *_rootDocumentForPath;
    struct __CFDictionary *_rootIDURLs;
    struct __CFDictionary *_rootIDTypes;
    struct __CFDictionary *_rootTypeIDs;
    struct __CFDictionary *_skIDToDSID;
    BOOL _mappingIsDirty;
}

- (void).cxx_destruct;
- (void)_indexDocSetNode:(id)arg1 atPath:(id)arg2 isFolder:(BOOL)arg3 localizedPathInfo:(id)arg4 inRootPath:(id)arg5;
- (BOOL)_indexFile:(id)arg1 belowParent:(id)arg2 atPath:(id)arg3 withDefaultTitle:(id)arg4;
- (void)_loadDocRoots;
- (void)_loadMappingsFromProperties:(id)arg1;
- (void)_removeDocumentForDocID:(long long)arg1;
- (id)_standardizedRootURL:(id)arg1;
- (void)dealloc;
- (id)defaultRootDocument;
- (long long)defaultRootID;
- (id)docSet;
- (long long)documentIDForSKID:(long long)arg1;
- (id)fallbackRootDocument;
- (long long)fallbackRootID;
- (BOOL)flush;
- (BOOL)indexDirectoryForDocument:(id)arg1 atPath:(id)arg2 onlyTypes:(id)arg3;
- (void)indexDocSetNode:(id)arg1 atPath:(id)arg2 isFolder:(BOOL)arg3 inRootPath:(id)arg4;
- (void)indexDocSetNode:(id)arg1 atPath:(id)arg2 usingLocalizedPathInfo:(id)arg3 inRootPath:(id)arg4;
- (BOOL)indexFile:(id)arg1 belowParent:(id)arg2 atPath:(id)arg3;
- (BOOL)indexSubDirectory:(id)arg1 forDocument:(id)arg2 atPath:(id)arg3 onlyTypes:(id)arg4;
- (void)invalidate;
- (id)rootDocumentForPath:(id)arg1;
- (id)rootDocumentForType:(id)arg1;
- (long long)rootIDForType:(id)arg1;
- (id)rootTypeForID:(long long)arg1;
- (void)setDefaultRootPath:(id)arg1;
- (void)setDocSet:(id)arg1;
- (void)setFallbackRootPath:(id)arg1;
- (void)setRootURL:(id)arg1 forPath:(id)arg2 ofType:(id)arg3;
- (id)urlForRootID:(long long)arg1;

@end

