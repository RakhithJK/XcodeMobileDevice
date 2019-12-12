//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEBreakpointAction, NSString;

@interface IDEBreakpointActionArchivingProxy : NSObject
{
    NSString *_actionExtensionID;
    BOOL _wasSuccessfullyUnarchived;
    IDEBreakpointAction *_proxiedAction;
}

+ (id)_breakpointActionExtensions;
+ (id)_extensionIDForAction:(id)arg1;
+ (id)actionProxyForAction:(id)arg1;
- (void).cxx_destruct;
- (void)addActionContent:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
@property(readonly) IDEBreakpointAction *proxiedAction; // @synthesize proxiedAction=_proxiedAction;
- (void)setActionExtensionIDFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
@property(readonly) BOOL wasSuccessfullyUnarchived; // @synthesize wasSuccessfullyUnarchived=_wasSuccessfullyUnarchived;

@end
