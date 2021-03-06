//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUTools/DYExperiment.h>

#import <GPUTools/NSCoding-Protocol.h>
#import <GPUTools/NSCopying-Protocol.h>

@class NSArray, NSMutableDictionary, NSSet;

@interface DYExperimentOverrideEnable : DYExperiment <NSCoding, NSCopying>
{
    NSMutableDictionary *_properties;
    NSSet *_overrideTypeStrings;
    NSArray *_perFunctionProfilingData;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 captureArchivePath:(id)arg2 overrides:(id)arg3;
- (BOOL)isPresentFrameEnabled;
@property(readonly, retain, nonatomic) NSSet *overrideTypeStrings; // @synthesize overrideTypeStrings=_overrideTypeStrings;
@property(readonly, retain, nonatomic) NSMutableDictionary *properties; // @synthesize properties=_properties;

@end

