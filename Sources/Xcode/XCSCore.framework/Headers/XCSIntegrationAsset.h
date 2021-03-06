//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@class NSArray, NSDictionary, NSString, NSURL;

@interface XCSIntegrationAsset : XCSObject
{
    BOOL _allowAnonymousAccess;
    NSString *_integrationID;
    NSString *_fileName;
    NSString *_relativePath;
    unsigned long long _size;
    NSDictionary *_infoDictionary;
    NSArray *_variantIds;
    NSString *_productID;
    NSString *_triggerName;
}

+ (id)assetWithFileName:(id)arg1 relativePath:(id)arg2 allowAnonymousAccess:(BOOL)arg3 validationErrors:(id *)arg4;
+ (id)assetWithFileName:(id)arg1 relativePath:(id)arg2 allowAnonymousAccess:(BOOL)arg3 variantIds:(id)arg4 productID:(id)arg5 validationErrors:(id *)arg6;
+ (id)assetWithFileName:(id)arg1 relativePath:(id)arg2 infoDictionary:(id)arg3 allowAnonymousAccess:(BOOL)arg4 variantIds:(id)arg5 validationErrors:(id *)arg6;
+ (id)assetWithFileName:(id)arg1 validationErrors:(id *)arg2;
- (void).cxx_destruct;
- (id)_initWithID:(id)arg1 revision:(id)arg2 fileName:(id)arg3 relativePath:(id)arg4 size:(unsigned long long)arg5 infoDictionary:(id)arg6 allowAnonymousAccess:(BOOL)arg7 variantIds:(id)arg8 productID:(id)arg9 triggerName:(id)arg10 validationErrors:(id *)arg11;
- (BOOL)_validateFileName:(id)arg1 relativePath:(id)arg2 size:(unsigned long long)arg3 infoDictionary:(id)arg4 variantIds:(id)arg5 productID:(id)arg6 triggerName:(id)arg7 validationErrors:(id *)arg8;
@property BOOL allowAnonymousAccess; // @synthesize allowAnonymousAccess=_allowAnonymousAccess;
- (id)dictionaryRepresentation;
@property(readonly) NSURL *downloadURL;
- (id)downloadURLForService:(id)arg1 friendly:(BOOL)arg2;
@property(retain) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain) NSDictionary *infoDictionary; // @synthesize infoDictionary=_infoDictionary;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
@property(readonly) NSString *integrationID; // @synthesize integrationID=_integrationID;
@property(retain) NSString *productID; // @synthesize productID=_productID;
@property(retain) NSString *relativePath; // @synthesize relativePath=_relativePath;
- (id)saveRepresentation;
@property unsigned long long size; // @synthesize size=_size;
@property(retain) NSString *triggerName; // @synthesize triggerName=_triggerName;
@property(retain) NSArray *variantIds; // @synthesize variantIds=_variantIds;

@end

