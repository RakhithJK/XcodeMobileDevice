//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IDETestSchemeBaselineRecord : NSObject
{
    NSMutableDictionary *_infoDict;
    NSMutableDictionary *_bundleBaselinesByTestBundleUUIDDict;
}

+ (id)_bundleBaselineRecordFilePathInSchemeBaselineWithFilePath:(id)arg1 withTestBundleName:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
- (id)bundleBaselineRecordForTestBundleName:(id)arg1;
- (id)init;
- (id)initWithFilePath:(id)arg1 error:(id *)arg2;
- (void)setBundleBaselineRecord:(id)arg1 forTestBundleName:(id)arg2;
- (id)testBundleNames;
- (void)unionWithSchemeBaselineRecord:(id)arg1;
- (BOOL)writeToFilePath:(id)arg1 workspace:(id)arg2 error:(id *)arg3;

@end

