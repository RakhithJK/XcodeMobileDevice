//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XDBase/XDUMLClassifierImp.h>

#import <XDBase/XDUMLAssociation-Protocol.h>

@class NSMutableArray, NSString;

@interface XDUMLAssociationImpl : XDUMLClassifierImp <XDUMLAssociation>
{
    NSMutableArray *_ends;
}

- (void)addMemberEnd:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isDerived;
- (id)memberEnds;
- (id)ownedEnds;
- (id)relatedElements;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

