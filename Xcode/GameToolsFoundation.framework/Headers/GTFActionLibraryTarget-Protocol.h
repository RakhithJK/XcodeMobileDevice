//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameToolsFoundation/NSObject-Protocol.h>

@class GTFActionLibraryTargetThumbnail, NSString;
@protocol NSCopying;

@protocol GTFActionLibraryTarget <NSObject>
@property(readonly, nonatomic) NSString *gtf_name;
@property(readonly, nonatomic) GTFActionLibraryTargetThumbnail *gtf_thumbnailImage;
@property(readonly, nonatomic) id <NSCopying> gtf_uid;
@end

