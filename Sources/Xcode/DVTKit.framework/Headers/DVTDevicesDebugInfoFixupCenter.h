//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTNotificationToken, NSMetadataQuery;

@interface DVTDevicesDebugInfoFixupCenter : NSObject
{
    NSMetadataQuery *_dsymQuery;
    DVTNotificationToken *_dsymFinishedInitialGatheringToken;
    DVTNotificationToken *_dsymUpdateToken;
}

+ (void)_dSYMFixupFixItem:(id)arg1;
+ (id)_dSYMFixupUuidImporterPath;
+ (id)logAspect;
+ (id)sharedCenter;
- (void).cxx_destruct;
- (void)_dSYMFixupQueryDidFinishInitialGathering:(id)arg1;
- (void)_dSYMFixupQueryDidUpdate:(id)arg1;
- (BOOL)_isEnabled;
- (void)dealloc;
- (id)init;
- (void)startFixup;
- (void)stopFixup;

@end
