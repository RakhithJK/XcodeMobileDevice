//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEContainerItemCore-Protocol.h>

@class NSString;
@protocol IDEContainerCore, IDEGroupCore;

@interface IDEContainerItemCore : NSObject <IDEContainerItemCore>
{
    id <IDEGroupCore> _parentGroup;
    NSString *_path;
}

- (void).cxx_destruct;
@property(readonly) id <IDEContainerCore> parentContainer;
@property(retain) id <IDEGroupCore> parentGroup; // @synthesize parentGroup=_parentGroup;
@property(copy) NSString *path; // @synthesize path=_path;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
