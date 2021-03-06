//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DSADocSet, DSADocSetGroup, NSDate, NSDictionary, NSError, NSNumber, NSString, PSEntry;

@interface DSADocSetUpdate : NSObject
{
    NSString *_identifier;
    DSADocSet *_docSet;
    PSEntry *_feedEntry;
    NSDictionary *_docSetFeedKeys;
    DSADocSetGroup *_group;
    float _updateProgress;
    int _updateStatus;
    NSError *_updateError;
    NSString *_updatePath;
    BOOL _updateAsUser;
    struct AuthorizationOpaqueRef *_updateAuthRef;
    long long _updateSize;
    NSNumber *_contentsFileID;
    NSDate *_updateCompletionDate;
}

+ (id)updateForDocSet:(id)arg1 feedEntry:(id)arg2;
+ (id)updateForIdentifier:(id)arg1 feedEntry:(id)arg2;
- (CDStruct_6df46f26)_feedVersion;
- (void)cancelUpdate;
@property(retain) NSNumber *contentsFileID; // @synthesize contentsFileID=_contentsFileID;
- (void)dealloc;
- (id)description;
@property(retain) DSADocSet *docSet; // @synthesize docSet=_docSet;
@property(readonly) NSDictionary *docSetFeedKeys;
- (id)downloadURL;
- (id)enclosure;
@property(retain) PSEntry *feedEntry; // @synthesize feedEntry=_feedEntry;
- (void)finalize;
@property(retain) DSADocSetGroup *group; // @synthesize group=_group;
- (BOOL)hasUpdate;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithIdentifier:(id)arg1 docSet:(id)arg2 feedEntry:(id)arg3;
- (void)installUpdate;
- (void)installUpdateAtDirectory:(id)arg1;
- (BOOL)isNew;
@property(readonly) NSString *localizedDescription;
@property(readonly) NSString *localizedName;
@property BOOL updateAsUser; // @synthesize updateAsUser=_updateAsUser;
@property struct AuthorizationOpaqueRef *updateAuthRef; // @synthesize updateAuthRef=_updateAuthRef;
@property(copy) NSDate *updateCompletionDate; // @synthesize updateCompletionDate=_updateCompletionDate;
@property(retain) NSError *updateError; // @synthesize updateError=_updateError;
@property(copy) NSString *updatePath; // @synthesize updatePath=_updatePath;
@property float updateProgress; // @synthesize updateProgress=_updateProgress;
@property long long updateSize; // @synthesize updateSize=_updateSize;
@property int updateStatus; // @synthesize updateStatus=_updateStatus;
@property(readonly) CDStruct_6df46f26 version;

@end

