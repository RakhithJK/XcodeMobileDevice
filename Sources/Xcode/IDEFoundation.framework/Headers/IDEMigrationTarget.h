//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEMigrationContext, NSArray, NSMutableArray, NSString;
@protocol IDEBlueprint;

@interface IDEMigrationTarget : NSObject
{
    IDEMigrationContext *_migrationContext;
    id <IDEBlueprint> _blueprint;
    NSMutableArray *_buildFiles;
    id _iconImage;
    NSString *_title;
}

- (void).cxx_destruct;
@property(readonly) id <IDEBlueprint> blueprint; // @synthesize blueprint=_blueprint;
@property(readonly, copy) NSArray *buildFiles; // @synthesize buildFiles=_buildFiles;
@property(readonly) BOOL buildsValidArchtectures;
@property(readonly) BOOL buildsWithClang;
@property(readonly) BOOL canMigrate;
- (id)description;
- (unsigned long long)hash;
- (id)initWithBlueprint:(id)arg1 migrationContext:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)latestSDK;
@property(readonly) IDEMigrationContext *migrationContext; // @synthesize migrationContext=_migrationContext;
@property(readonly) BOOL shouldMigrate;
@property(readonly, copy) NSString *title; // @synthesize title=_title;
- (void)updateBuildSettings;
@property(readonly, copy) NSString *warningMessage;

@end

