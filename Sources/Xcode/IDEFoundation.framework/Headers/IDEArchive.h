//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFilePath, IDEArchivedApplication, IDEArchivedContent, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSString;

@interface IDEArchive : NSObject
{
    NSMutableDictionary *_infoDictionary;
    BOOL _savePending;
    NSArray *_topLevelDistributionItems;
    BOOL _symbolDownloadInProgress;
    BOOL _estimateInProgress;
    BOOL _isFromFreeProvisioningTeam;
    DVTFilePath *_path;
    IDEArchivedContent *_archivedContent;
    NSString *_archiveSize;
}

+ (id)_archivePathOverride;
+ (id)_archivePlistPathForArchivePath:(id)arg1;
+ (id)_availableArchivePathInDirectory:(id)arg1 withName:(id)arg2 creationDate:(id)arg3 usingFileManager:(id)arg4;
+ (long long)_computedApproximateAppStoreFileSizeForArchiveContentPath:(id)arg1 forPlatform:(id)arg2;
+ (BOOL)_copyAppleProvidedContentFromDirectory:(id)arg1 toArchiveWithPath:(id)arg2 usingFileManager:(id)arg3 error:(id *)arg4;
+ (BOOL)_copyBCSymbolMapsFromDirectory:(id)arg1 toArchiveWithPath:(id)arg2 usingFileManager:(id)arg3 error:(id *)arg4;
+ (BOOL)_copyProductDefinitionPlistFromDirectory:(id)arg1 toArchiveWithPath:(id)arg2 usingFileManager:(id)arg3 error:(id *)arg4;
+ (void)_copySCMBlueprintFromWorkspace:(id)arg1 toArchiveWithPath:(id)arg2 usingFileManager:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
+ (BOOL)_copydSYMsFromDirectory:(id)arg1 toArchiveWithPath:(id)arg2 usingFileManager:(id)arg3 error:(id *)arg4;
+ (id)_createArchiveWithName:(id)arg1 usingFileManager:(id)arg2 error:(id *)arg3;
+ (id)_dSYMDirectoryPathForArchivePath:(id)arg1;
+ (long long)_fileSizeForPathString:(id)arg1;
+ (id)_folderPathForArchiveWithDate:(id)arg1;
+ (id)_infoForToolchain:(id)arg1;
+ (id)_productDefinitionPlistPathForArchivePath:(id)arg1;
+ (id)_productsDirectoryPathForArchivePath:(id)arg1;
+ (id)_sourceControlBlueprintDirectoryPathForArchivePath:(id)arg1;
+ (BOOL)_zipDirectoryAtPath:(id)arg1 destination:(id)arg2 excluding:(id)arg3;
+ (id)archiveWithArchivePath:(id)arg1;
+ (void)createArchiveWithName:(id)arg1 schemeName:(id)arg2 platform:(id)arg3 toolchain:(id)arg4 products:(id)arg5 auxiliaryFiles:(id)arg6 workspace:(id)arg7 usingFileManager:(id)arg8 completionBlock:(CDUnknownBlockType)arg9;
+ (id)installArchiveWithArchivePath:(id)arg1 usingFileManager:(id)arg2;
+ (id)keyPathsForValuesAffectingCanDownloadSymbols;
+ (id)keyPathsForValuesAffectingDSYMDirectoryPath;
+ (id)keyPathsForValuesAffectingProductDefinitionPlistPath;
+ (id)keyPathsForValuesAffectingProductsDirectoryPath;
+ (id)keyPathsForValuesAffectingSourceControlBlueprint;
- (void).cxx_destruct;
- (BOOL)_canPerformAllTasksWithError:(id *)arg1;
- (BOOL)_canPerformTask:(int)arg1 ignorePreflightChecks:(BOOL)arg2 error:(id *)arg3;
- (id)_initWithPath:(id)arg1 infoDictionary:(id)arg2;
- (void)_saveArchive:(id)arg1;
- (id)_toolchainInfo;
- (void)addDownloadedSymbolUUID:(id)arg1;
@property(readonly) IDEArchivedApplication *application;
@property(readonly) NSString *archiveSize; // @synthesize archiveSize=_archiveSize;
@property(readonly) IDEArchivedContent *archivedContent; // @synthesize archivedContent=_archivedContent;
@property(readonly) BOOL canDownloadSymbols;
@property(readonly) BOOL canExport;
@property(readonly) BOOL canSubmit;
- (BOOL)canSubmitIgnoringPreflightChecks;
@property(readonly) BOOL canValidate;
@property(copy) NSString *comment;
@property(readonly) BOOL containsCustomToolchain;
@property(readonly) NSDate *creationDate;
@property(readonly) DVTFilePath *dSYMDirectoryPath;
@property(readonly, copy) NSArray *downloadedSymbolUUIDs;
@property(copy) NSDictionary *enterpriseDistributionManifest;
@property BOOL estimateInProgress; // @synthesize estimateInProgress=_estimateInProgress;
- (void)estimateSizeInBackgroundForPlatform:(id)arg1;
@property long long estimatedAppStoreFileSize;
@property BOOL estimatedAppStoreFileSizeIsValid;
@property(readonly) NSMutableDictionary *infoDictionary;
@property BOOL isFromFreeProvisioningTeam; // @synthesize isFromFreeProvisioningTeam=_isFromFreeProvisioningTeam;
- (void)markDirty;
@property(copy) NSString *name;
- (id)objectForEnterpriseDistributionKey:(id)arg1;
@property(retain) DVTFilePath *path; // @synthesize path=_path;
@property(readonly) DVTFilePath *productDefinitionPlistPath;
@property(readonly) DVTFilePath *productsDirectoryPath;
@property(readonly) NSString *schemeName;
- (void)setObject:(id)arg1 forEnterpriseDistributionKey:(id)arg2;
@property(copy) NSString *statusString;
@property BOOL symbolDownloadInProgress; // @synthesize symbolDownloadInProgress=_symbolDownloadInProgress;
@property(readonly) DVTFilePath *sourceControlBlueprintDirectoryPath;
@property(readonly) NSString *toolchainDisplayName;
@property(readonly) NSString *toolchainIdentifier;
@property(readonly) unsigned long long version;

@end

