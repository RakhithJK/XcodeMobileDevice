//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDEDistributionManifest : NSObject
{
    NSString *_name;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSString *_appURL;
    NSString *_displayImageURL;
    NSString *_fullSizeImageURL;
    NSString *_assetPackManifestURL;
}

- (void).cxx_destruct;
- (BOOL)_validateURL:(id)arg1 propertyName:(id)arg2 error:(id *)arg3;
@property(copy) NSString *appURL; // @synthesize appURL=_appURL;
@property(copy) NSString *assetPackManifestURL; // @synthesize assetPackManifestURL=_assetPackManifestURL;
@property(copy) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
- (id)dictionaryRepresentationForVariants:(id)arg1 error:(id *)arg2;
@property(copy) NSString *displayImageURL; // @synthesize displayImageURL=_displayImageURL;
@property(copy) NSString *fullSizeImageURL; // @synthesize fullSizeImageURL=_fullSizeImageURL;
- (BOOL)isValidManifest;
@property(copy) NSString *name; // @synthesize name=_name;
- (BOOL)validateAppURL:(id *)arg1 error:(id *)arg2;
- (BOOL)validateAssetPackManifestURL:(id *)arg1 error:(id *)arg2;
- (BOOL)validateDisplayImageURL:(id *)arg1 error:(id *)arg2;
- (BOOL)validateFullSizeImageURL:(id *)arg1 error:(id *)arg2;

@end

