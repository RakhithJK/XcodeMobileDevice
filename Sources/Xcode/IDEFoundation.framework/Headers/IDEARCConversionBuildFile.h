//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEARCConversionTarget, IDEFileReference, NSString;

@interface IDEARCConversionBuildFile : NSObject
{
    id _iconImage;
    IDEFileReference *_fileReference;
    IDEARCConversionTarget *_target;
    NSString *_warningMessage;
    BOOL _enablesARC;
}

- (void).cxx_destruct;
- (void)_setEnablesARC:(BOOL)arg1 overridingOnly:(BOOL)arg2;
- (void)disableOverridingBuildSettings;
@property(readonly, copy) NSString *displayName;
- (void)enableOverridingBuildSettings;
@property BOOL enablesARC; // @synthesize enablesARC=_enablesARC;
@property(readonly, copy) IDEFileReference *fileReference; // @synthesize fileReference=_fileReference;
- (id)initWithFileReference:(id)arg1 target:(id)arg2;
@property(readonly) IDEARCConversionTarget *target; // @synthesize target=_target;
- (void)updateBuildSettings;
@property(readonly, copy) NSString *warningMessage; // @synthesize warningMessage=_warningMessage;

@end

