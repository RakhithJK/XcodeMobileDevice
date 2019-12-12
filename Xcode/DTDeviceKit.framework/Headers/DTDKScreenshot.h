//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage, NSString;

@interface DTDKScreenshot : NSObject
{
    NSString *_path;
    NSString *_deviceIdentifier;
    NSImage *_image;
}

+ (id)keyPathsForValuesAffectingDeviceIdentifier;
+ (id)keyPathsForValuesAffectingImage;
+ (id)screenshotWithPath:(id)arg1;
- (void).cxx_destruct;
@property(readonly) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
- (unsigned long long)hash;
@property(readonly) NSImage *image; // @synthesize image=_image;
- (id)initWithPath:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(copy) NSString *path; // @synthesize path=_path;

@end

