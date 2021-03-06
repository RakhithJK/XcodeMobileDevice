//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDEIPAProcessor : NSObject
{
}

+ (id)sharedInstance;
- (id)applicableDeviceFamiliesForPayloadAtPath:(id)arg1 logAspect:(id)arg2 error:(id *)arg3;
- (id)binSearchPathForIPATool;
- (BOOL)compileBitcodeForPayloadAppAtPath:(id)arg1 toPath:(id)arg2 logAspect:(id)arg3 error:(id *)arg4;
- (id)consolidateDeviceFamiliesWithEquivalentTraits:(id)arg1;
- (BOOL)enumerateSupportedDeviceSetInfosForPayloadAppAtPath:(id)arg1 logAspect:(id)arg2 error:(id *)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (BOOL)optimizePayloadAppAtPath:(id)arg1 toPath:(id)arg2 forDeviceFamily:(id)arg3 logAspect:(id)arg4 error:(id *)arg5;
- (id)runIPAToolWithInputPath:(id)arg1 outputPath:(id)arg2 arguments:(id)arg3 logAspect:(id)arg4 outError:(id *)arg5;

@end

