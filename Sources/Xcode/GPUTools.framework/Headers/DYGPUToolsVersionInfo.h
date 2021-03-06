//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUTools/NSCoding-Protocol.h>

@class NSDictionary, NSString;

@interface DYGPUToolsVersionInfo : NSObject <NSCoding>
{
    NSDictionary *_infoPlist;
    NSDictionary *_versionPlist;
    unsigned int _interposeVersionGL;
    unsigned int _interposeVersionMetal;
}

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
@property(copy, nonatomic) NSDictionary *infoPlist; // @synthesize infoPlist=_infoPlist;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) unsigned int interposeVersionGL; // @synthesize interposeVersionGL=_interposeVersionGL;
@property(nonatomic) unsigned int interposeVersionMetal; // @synthesize interposeVersionMetal=_interposeVersionMetal;
- (id)objectForInfoPlistKey:(id)arg1;
- (id)objectForVersionPlistKey:(id)arg1;
@property(copy, nonatomic) NSDictionary *versionPlist; // @synthesize versionPlist=_versionPlist;
@property(readonly, retain, nonatomic) NSString *shortVersion;
@property(readonly, retain, nonatomic) NSString *sourceVersion;
@property(readonly, retain, nonatomic) NSString *version;

@end

