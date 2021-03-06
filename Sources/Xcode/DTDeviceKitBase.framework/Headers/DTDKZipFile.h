//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;

@interface DTDKZipFile : NSObject
{
    NSURL *_zipFileURL;
    struct unz_internal *_archive;
    NSMutableDictionary *_attributes;
}

+ (id)zipFileWithContentsOfURL:(id)arg1;
+ (id)zipFileWithContentsOfURL:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (id)_attributesDictionaryForCurrentFileWithError:(id *)arg1;
- (id)_attributesDictionaryFromInternalFields:(const struct unz_file_info_s *)arg1 withInternalName:(id)arg2;
- (id)_extractCurrentFileWithError:(id *)arg1;
- (_Bool)_openWithError:(id *)arg1;
@property(nonatomic) struct unz_internal *archive;
@property(retain) NSMutableDictionary *attributes; // @synthesize attributes=_attributes;
- (id)attributesForAllFilesWithError:(id *)arg1;
- (id)attributesForFileWithInternalPath:(id)arg1 error:(id *)arg2;
- (_Bool)canOpen;
- (_Bool)canOpenWithError:(id *)arg1;
- (unsigned long long)countOfFilesWithError:(id *)arg1;
- (_Bool)enumerateFileDataWithError:(id *)arg1 andBlock:(CDUnknownBlockType)arg2;
- (_Bool)enumerateFilesWithError:(id *)arg1 andBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)expandedSizeWithError:(id *)arg1;
- (_Bool)extractEntireArchiveTo:(id)arg1 error:(id *)arg2;
- (_Bool)extractEntireArchiveTo:(id)arg1 error:(id *)arg2 withProgressHandler:(CDUnknownBlockType)arg3;
- (id)extractFileWithInternalPath:(id)arg1 error:(id *)arg2;
- (id)extractPropertyListWithInternalPath:(id)arg1 error:(id *)arg2;
- (_Bool)fileExistsAtInternalPath:(id)arg1;
- (void)invalidate;
@property(copy) NSURL *zipFileURL; // @synthesize zipFileURL=_zipFileURL;

@end

