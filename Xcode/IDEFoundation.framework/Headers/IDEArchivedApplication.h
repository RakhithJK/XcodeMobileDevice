//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEArchivedContent.h>

@class DVTFilePath, DVTPlatform, NSString;

@interface IDEArchivedApplication : IDEArchivedContent
{
}

+ (id)_codesigningIdentityFromApplicationPath:(id)arg1;
+ (id)archivedContentPathPlistKey;
+ (id)archivedContentPropertiesPlistKey;
+ (BOOL)fillInfoDictionary:(id)arg1 forContentAtPath:(id)arg2 inArchiveProductsDirectory:(id)arg3;
+ (id)keyPathsForValuesAffectingApplicationPath;
+ (id)keyPathsForValuesAffectingIconPath;
+ (id)soleArchivedContentRelativePathInDirectory:(id)arg1;
@property(readonly) DVTFilePath *applicationPath;
- (long long)autodetectedFormatForPackaging;
- (id)packager;
@property(readonly) DVTPlatform *platform;
- (id)platformName;
@property(readonly) NSString *signingIdentity;
- (BOOL)supportsPackagingAsFormat:(long long)arg1;

@end
