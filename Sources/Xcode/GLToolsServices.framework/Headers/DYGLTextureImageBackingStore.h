//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GLToolsServices/DYTextureImageBackingStore-Protocol.h>

@class NSData, NSString;

@interface DYGLTextureImageBackingStore : NSObject <DYTextureImageBackingStore>
{
    int lock;
    NSData *_data;
    NSData *_uncompressedData;
    NSData *_palette;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long cachingCost;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSData *palette; // @synthesize palette=_palette;
@property(retain, nonatomic) NSData *uncompressedData; // @synthesize uncompressedData=_uncompressedData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

