//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface XCSLogFacility : NSObject
{
    BOOL _outputsToStandardError;
    NSString *_name;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_outputFiles;
}

+ (void)critical:(id)arg1;
+ (void)debug:(id)arg1;
+ (id)defaultFacility;
+ (void)error:(id)arg1;
+ (id)facilityWithName:(id)arg1;
+ (void)info:(id)arg1;
+ (void)setDefaultFacilityName:(id)arg1;
+ (void)warn:(id)arg1;
- (void).cxx_destruct;
- (void)addOutputFile:(id)arg1;
- (void)addOutputFileHandle:(id)arg1;
- (void)critical:(id)arg1;
- (void)debug:(id)arg1;
- (void)error:(id)arg1;
- (void)info:(id)arg1;
- (id)initWithName:(id)arg1;
- (void)logAtLevel:(int)arg1 attributes:(id)arg2 message:(id)arg3;
- (void)logAtLevel:(int)arg1 format:(id)arg2 arguments:(struct __va_list_tag [1])arg3;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSMutableDictionary *outputFiles; // @synthesize outputFiles=_outputFiles;
@property(nonatomic) BOOL outputsToStandardError; // @synthesize outputsToStandardError=_outputsToStandardError;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)removeOutputFile:(id)arg1;
- (void)removeOutputFileHandle:(id)arg1;
- (void)warn:(id)arg1;

@end

