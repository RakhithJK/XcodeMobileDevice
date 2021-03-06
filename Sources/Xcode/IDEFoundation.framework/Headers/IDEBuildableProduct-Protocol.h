//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEBuildable-Protocol.h>

@class DVTFileDataType, DVTFilePath, IDEBuildParameters, NSDictionary, NSString;

@protocol IDEBuildableProduct <IDEBuildable>
@property(readonly, copy) DVTFileDataType *fileDataType;
@property(readonly) DVTFilePath *filePath;
- (DVTFilePath *)filePathForBuildParameters:(IDEBuildParameters *)arg1;
@property(readonly) NSString *iconPath;
@property(readonly) BOOL productIsExecutable;
@property(readonly) NSDictionary *productSettings;
- (NSString *)productTypeIdentifier;
@end

