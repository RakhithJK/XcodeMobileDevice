//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/DVTInvalidation-Protocol.h>
#import <IDEFoundation/NSObject-Protocol.h>

@class DVTExtension, DVTFileDataType, DVTFilePath, NSArray;
@protocol IDEContainerGroupCore;

@protocol IDEContainerCore <NSObject, DVTInvalidation>
+ (NSArray *)containerDataFilePathsForFilePath:(DVTFilePath *)arg1;
+ (DVTFileDataType *)containerFileType;
+ (BOOL)supportsFilePersistence;
- (DVTExtension *)containerExtension;
- (int)currentActivity;
- (DVTFilePath *)filePath;
- (id)initWithFilePath:(DVTFilePath *)arg1 extension:(DVTExtension *)arg2 error:(id *)arg3;
- (void)releaseContainerCore;
- (void)retainContainerCore;
- (id <IDEContainerGroupCore>)rootGroup;
@end

