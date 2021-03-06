//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DTPlugInManager;

@interface DTExtension : NSObject
{
    id _extensionData;
    DTPlugInManager *_plugInManager;
    id _realExtension;
    unsigned int _extensionFlags;
    void *_reserved[3];
}

- (void)_fireExtensionFault;
- (id)_initWithExtensionDescription:(id)arg1 plugInManager:(id)arg2 isExtensionFault:(BOOL)arg3;
- (BOOL)_isExtensionFault;
- (id)_realExtension;
- (id)basedOnExtension;
- (id)bundle;
- (void)dealloc;
- (id)derivedExtensions;
- (void)didAccessValueForKey:(id)arg1;
- (id)extensionData;
- (id)extensionElement;
- (id)extensionPoint;
- (void)forwardInvocation:(id)arg1;
- (id)identifier;
- (id)initWithExtensionData:(id)arg1;
- (BOOL)isValid;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)name;
- (id)plugIn;
- (id)primitiveValueForKey:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)version;
- (void)willAccessValueForKey:(id)arg1;

@end

