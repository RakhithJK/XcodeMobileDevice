//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEDebugNavigableModel-Protocol.h>

@class IDELaunchSession, NSArray, NSNumber, NSString;

@interface IDECompressedStackFrame : NSObject <IDEDebugNavigableModel>
{
    unsigned long long _hash;
    NSString *_associatedProcessUUID;
    NSArray *_representedStackFrames;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *associatedProcessUUID; // @synthesize associatedProcessUUID=_associatedProcessUUID;
@property(readonly, copy) NSString *displayName;
@property(readonly, copy) NSNumber *frameNumber;
@property(readonly) BOOL hasSymbols;
@property(readonly) unsigned long long hash;
- (id)init;
- (id)initWithStackFrames:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) IDELaunchSession *launchSession;
@property(readonly, copy) NSString *name;
@property(readonly, copy) NSArray *representedStackFrames; // @synthesize representedStackFrames=_representedStackFrames;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

