//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTInstrumentsFoundation/DTXAllowedRPC-Protocol.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

@protocol DTFileBrowserServiceAuthorizedAPI <DTXAllowedRPC>
- (NSArray *)contentsOfDirectoryAtPath:(NSString *)arg1;
- (NSData *)dataFromFileAtPath:(NSString *)arg1;
- (NSArray *)entriesAtPath:(NSString *)arg1;
- (NSArray *)entriesInPathsArray:(NSArray *)arg1;
- (NSMutableDictionary *)updateAttributesForItem:(NSMutableDictionary *)arg1;
@end

