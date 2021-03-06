//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GLToolsCore/NSCoding-Protocol.h>

@class NSDictionary, NSSet, NSString;

@interface DYRendererInfo : NSObject <NSCoding>
{
    NSString *vendor;
    NSString *renderer;
    NSString *version;
    NSString *glslVersion;
    NSSet *extensions;
    NSDictionary *limits;
    NSDictionary *bitCounts;
    NSDictionary *shaderPrecisionsFormats;
}

+ (BOOL)_dimensionsAreSupported:(id)arg1 supportedDimensions:(id)arg2;
+ (BOOL)_rangeIsSupported:(id)arg1 supportedRange:(id)arg2;
+ (id)rendererInfoWithGLIContext:(struct __GLIContextRec *)arg1 dispatch:(struct __GLIFunctionDispatchRec *)arg2 api:(int)arg3;
- (BOOL)_supportsGLSLVersion:(id)arg1;
- (BOOL)_supportsGLVersion:(id)arg1;
- (BOOL)_supportsLimits:(id)arg1;
@property(retain, nonatomic) NSDictionary *bitCounts; // @synthesize bitCounts;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) NSSet *extensions; // @synthesize extensions;
@property(retain, nonatomic) NSString *glslVersion; // @synthesize glslVersion;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSDictionary *limits; // @synthesize limits;
@property(retain, nonatomic) NSString *renderer; // @synthesize renderer;
@property(retain, nonatomic) NSDictionary *shaderPrecisionsFormats; // @synthesize shaderPrecisionsFormats;
@property(retain, nonatomic) NSString *vendor; // @synthesize vendor;
@property(retain, nonatomic) NSString *version; // @synthesize version;
- (BOOL)supportsCapabilitiesOfRenderer:(id)arg1;

@end

