//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DSADocSet_FastTokenCache, DSANode, DSATermManager, DSATokenIndex, DVTDispatchLock, NSArray, NSDictionary, NSManagedObject, NSManagedObjectContext, NSMapTable, NSMutableDictionary, NSPersistentStoreCoordinator, NSString, NSURL;
@protocol OS_dispatch_group;

@interface DSADocSet : NSObject
{
    struct __CFBundle *_docSetBundle;
    NSString *_localization;
    BOOL _isLegacy;
    BOOL _isValid;
    int _modelVersion;
    NSURL *_documentsURL;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSManagedObjectContext *_managedObjectContext;
    NSMutableDictionary *_indexesByName;
    DSATokenIndex *_mainTokenIndex;
    DSATokenIndex *_backgroundTokenIndex;
    NSManagedObject *_docSetMO;
    DSANode *_rootNode;
    NSArray *_apiLanguageMOs;
    NSDictionary *_nodesByPath;
    NSMutableDictionary *_nodesByID;
    NSArray *_availabilityArchitectures;
    NSMutableDictionary *_nodeByUUID;
    NSObject<OS_dispatch_group> *_tocLoadGroup;
    NSMapTable *_nodeTermLists;
    DSATermManager *_termManager;
    BOOL _searchTermsLoaded;
    DVTDispatchLock *_tokenCacheLock;
    BOOL _buildingTokenCache;
    BOOL _discoveredInvalidTokenCache;
    DSADocSet_FastTokenCache *_fastTokenCache;
}

+ (id)_URLForModelInBundle:(struct __CFBundle *)arg1 withLocalization:(id)arg2;
+ (id)_URLForStoreInBundle:(struct __CFBundle *)arg1 withLocalization:(id)arg2;
+ (id)_docSetForCoordinator:(id)arg1;
+ (id)_resolveAbsoluteFileURL:(id)arg1 forDocSets:(id)arg2 resolvedWithDocSet:(id *)arg3;
+ (id)_resolveRelativeURL:(id)arg1 forDocSets:(id)arg2 resolvedWithDocSet:(id *)arg3;
+ (id)_resolveRemoteURL:(id)arg1 forDocSets:(id)arg2 resolvedWithDocSet:(id *)arg3;
+ (void)_setDocSet:(id)arg1 forCoordinator:(id)arg2;
+ (void)cancelTextSearchForDelegate:(id)arg1 contextInfo:(void *)arg2;
+ (void)cancelTokenSearchForDelegate:(id)arg1 contextInfo:(void *)arg2;
+ (int)defaultModelVersion;
+ (id)docSetForManagedObject:(id)arg1;
+ (BOOL)isTokenDeprecated:(id)arg1;
+ (id)modelForVersion:(int)arg1;
+ (id)modelPathForVersion:(int)arg1;
+ (id)resolvedURL:(id)arg1 forDocSets:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
+ (BOOL)searchForText:(id)arg1 inDocSets:(id)arg2 withMatchType:(unsigned long long)arg3 delegate:(id)arg4 contextInfo:(void *)arg5;
+ (BOOL)searchForTokens:(id)arg1 inDocSets:(id)arg2 withSortDescriptors:(id)arg3 delegate:(id)arg4 contextInfo:(void *)arg5;
+ (int)versionForModel:(id)arg1;
- (void).cxx_destruct;
- (id)_apiLanguageMOs;
- (void)_dump;
- (id)_dumpStr;
- (id)_indexNamed:(id)arg1 forUpdating:(BOOL)arg2;
- (void)_loadCachedNodePaths;
- (id)_localizedPathForNode:(id)arg1 inBundle:(id)arg2 forLocalization:(id)arg3;
- (id)_localizedPathInBundle:(id)arg1 forFile:(id)arg2 forLocalization:(id)arg3;
- (id)_nodeForLookupString:(id)arg1 URLisFileURL:(BOOL)arg2 URLPointsIntoDocSet:(BOOL)arg3;
- (id)_objectForInfoKey:(id)arg1;
- (id)_objectIDForNodeID:(id)arg1;
- (id)_pathForCachedNodePaths;
- (void)_removePersistentStores;
- (void)_resetBundle;
- (void)_saveCachedNodePaths;
- (void)_setObjectID:(id)arg1 forNodeID:(id)arg2;
- (void)_setObjectIDSForNodes:(id)arg1;
- (void)_setupNodesByPath;
- (BOOL)_shouldLoadNodePathCache:(id)arg1;
- (void)_startLoadingTOCInfo;
- (void)_writeCachedNodeInfo;
- (id)allNodes;
- (id)allTokens;
- (id)apiIndexForUpdating:(BOOL)arg1;
- (id)apiLanguages;
- (id)availabilityArchitectures;
- (id)bookNodeForURL:(id)arg1;
- (void)buildTokenCache;
- (id)bundle;
- (void)cancelTextSearchForDelegate:(id)arg1 contextInfo:(void *)arg2;
- (id)certificateIssuer;
- (id)certificateSigner;
- (long long)compare:(id)arg1;
- (CDStruct_6df46f26)configurationVersion;
- (BOOL)containsTokens:(id)arg1;
- (void)dealloc;
- (void)deleteDiskCaches;
- (id)description;
- (id)docSetURL;
- (id)documentsURL;
- (id)fallbackURL;
- (id)fallbackURLs;
@property(retain) DSADocSet_FastTokenCache *fastTokenCache; // @synthesize fastTokenCache=_fastTokenCache;
- (id)feedURL;
- (id)fullTextIndexForUpdating:(BOOL)arg1;
@property(readonly) BOOL hasTokenCache;
- (BOOL)hasTokenWithScope:(id)arg1;
- (id)identifier;
- (id)initWithBundle:(struct __CFBundle *)arg1 withPersistentStoreURL:(id)arg2 modelVersion:(int)arg3 forLocalization:(id)arg4 error:(id *)arg5;
- (id)initWithBundle:(struct __CFBundle *)arg1 withXML:(id)arg2 withPersistentStoreCoordinator:(id)arg3 modelVersion:(int)arg4 forLocalization:(id)arg5 error:(id *)arg6;
- (id)initWithDocRootDirectory:(id)arg1 forLocalization:(id)arg2 error:(id *)arg3;
- (id)initWithDocRootDirectory:(id)arg1 withXML:(id)arg2;
- (id)initWithURL:(id)arg1 error:(id *)arg2;
- (void)invalidate;
- (BOOL)isLegacyPackage;
@property(readonly) BOOL isValid;
- (void)loadTokenCache;
- (id)localization;
@property(readonly) NSString *localizedDescription;
- (id)localizedFeedName;
- (id)localizedName;
- (id)localizedPathsForNode:(id)arg1 inBundle:(id)arg2;
@property(readonly) NSString *localizedPublisherName;
- (id)lookupTokensWithUSR:(id)arg1;
- (id)managedObjectContext;
- (id)managedObjectModel;
- (CDStruct_6df46f26)maximumSupportedXcodeVersion;
- (BOOL)migrateDataToURL:(id)arg1 copyModel:(BOOL)arg2 error:(id *)arg3;
- (CDStruct_6df46f26)minimumSupportedXcodeVersion;
- (int)modelVersion;
- (id)nodeAtNamedPath:(id)arg1;
- (id)nodeForURL:(id)arg1;
- (id)nodeWithID:(long long)arg1;
- (id)nodeWithIDNumber:(id)arg1;
- (id)nodeWithUUID:(id)arg1;
- (id)nodes;
- (id)nodesWithDocumentType:(unsigned long long)arg1;
- (id)nodesWithIDNumbers:(id)arg1;
- (id)nodesWithUUIDPattern:(id)arg1;
- (double)offsetIntervalForUpdateCheck;
- (id)persistentStoreCoordinator;
- (id)persistentStoreURL;
- (id)platformFamily;
- (CDStruct_6df46f26)platformVersion;
@property(readonly) NSString *publisherIdentifier;
- (id)releaseNoteInformation;
@property(readonly) BOOL requiresUpdateForContent;
- (id)rootNode;
- (BOOL)saveChanges:(id *)arg1;
- (id)searchForText:(id)arg1 inNodes:(id)arg2 withMatchType:(unsigned long long)arg3;
- (BOOL)searchForText:(id)arg1 inNodes:(id)arg2 withMatchType:(unsigned long long)arg3 delegate:(id)arg4 contextInfo:(void *)arg5;
- (id)searchForTokens:(id)arg1 inNodes:(id)arg2;
- (id)searchTermsForNodeID:(id)arg1 waitForCache:(BOOL)arg2;
- (id)searchTermsForNodes:(id)arg1;
- (void)serializeFastTokenCache:(id)arg1 toPath:(id)arg2;
- (id)sharedAPIIndex;
- (id)sharedBackgroundAPIIndex;
@property(readonly) BOOL supportsUSRLookup;
- (id)termManager;
- (id)textIndexURL;
- (id)tokenCacheURL;
- (id)tokenFileURLs;
- (id)tokenXMLForToken:(id)arg1;
- (id)tokensMatchingString:(id)arg1 withMatchType:(unsigned long long)arg2;
- (id)urlForNode:(id)arg1;
- (id)urlForNode:(id)arg1 localizingPath:(BOOL)arg2;
- (id)urlForToken:(id)arg1;
- (id)urlForTokenXML:(id)arg1;
- (CDStruct_6df46f26)version;
@property(readonly) BOOL wouldLoadTokenCache;

@end

