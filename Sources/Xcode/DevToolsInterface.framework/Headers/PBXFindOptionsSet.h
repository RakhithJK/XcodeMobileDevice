//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsInterface/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface PBXFindOptionsSet : NSObject <NSCopying>
{
    NSString *_name;
    struct {
        unsigned int searchOpenFiles:1;
        unsigned int searchOpenProjects:1;
        unsigned int whichProjectFiles:2;
        unsigned int projectFilesOrFrameworks:2;
        unsigned int fileFilterType:2;
        unsigned int searchFilesAndFolders:1;
        unsigned int searchIncludedFiles:1;
        unsigned int _RESERVED:22;
    } _fosFlags;
    NSMutableArray *_positiveNamePatternsArray;
    NSMutableArray *_negativeNamePatternsArray;
    NSMutableArray *_searchFilesArray;
}

+ (void)_readGlobalSets;
+ (void)_readNamePatterns;
+ (void)_writeGlobalSets;
+ (void)_writeNamePatterns;
+ (void)addGlobalFindOptionSet:(id)arg1;
+ (void)addNamePattern:(id)arg1;
+ (id)globalFindOptionsSetWithName:(id)arg1;
+ (id)globalFindOptionsSets;
+ (long long)indexOfOptionsSet:(id)arg1;
+ (id)namePatterns;
+ (id)regularExpressionForPattern:(id)arg1;
+ (void)removeGlobalFindOptionsSet:(id)arg1;
+ (void)removeNamePattern:(id)arg1;
+ (void)replaceNamePatternAtIndex:(unsigned long long)arg1 withNamePattern:(id)arg2;
- (void)addNegativeNamePattern:(id)arg1;
- (void)addPositiveNamePattern:(id)arg1;
- (void)addSearchFiles:(id)arg1;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)didChange;
- (int)fileFilterType;
- (BOOL)findInFilesAndFolders;
- (BOOL)findInIncludedFiles;
- (BOOL)findInOpenFiles;
- (BOOL)findInOpenProjects;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)name;
- (id)negativeNamePatterns;
- (id)positiveNamePatterns;
- (int)projectFindCandidates;
- (int)projectFindScope;
- (id)propertyListRepresentation;
- (void)readPropertyListRepresentation:(id)arg1;
- (void)removeNegativeNamePattern:(id)arg1;
- (void)removePositiveNamePattern:(id)arg1;
- (void)removeSearchFiles:(id)arg1;
- (void)replaceSearchFileAtIndex:(long long)arg1 WithSearchFile:(id)arg2;
- (id)searchFiles;
- (void)setFileFilterType:(int)arg1;
- (void)setFindInFilesAndFolders:(BOOL)arg1;
- (void)setFindInIncludedFiles:(BOOL)arg1;
- (void)setFindInOpenFiles:(BOOL)arg1;
- (void)setFindInOpenProjects:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setProjectFindCandidates:(int)arg1;
- (void)setProjectFindScope:(int)arg1;

@end

