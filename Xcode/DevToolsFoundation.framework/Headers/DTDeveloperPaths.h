//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface DTDeveloperPaths : NSObject
{
    NSMutableDictionary *_pathCache;
}

+ (id)defaultPaths;
- (id)_developerFolderPath;
- (id)_developerUsrPath;
- (id)_pathForDirectory:(unsigned long long)arg1 inDomain:(unsigned long long)arg2 forVersionPathComponent:(id)arg3;
- (void)_setValidDomains:(unsigned long long)arg1;
- (unsigned long long)_validDomains;
- (void)dealloc;
- (id)description;
- (id)developerPathForDirectory:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDeveloperDirPath:(id)arg1 developerUsrPath:(id)arg2;
- (id)initWithDeveloperDirPath:(id)arg1 developerUsrPath:(id)arg2 validDomains:(unsigned long long)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)preferredPathForDirectory:(unsigned long long)arg1 inDomains:(unsigned long long)arg2 forToolsVersion:(id)arg3;
- (id)preferredUnversionedPathForDirectory:(unsigned long long)arg1 inDomains:(unsigned long long)arg2;
- (id)searchPathsForDirectory:(unsigned long long)arg1 inDomains:(unsigned long long)arg2;
- (id)searchPathsForDirectory:(unsigned long long)arg1 inDomains:(unsigned long long)arg2 forToolsVersions:(id)arg3 includingUnversionedLocations:(BOOL)arg4;

@end

