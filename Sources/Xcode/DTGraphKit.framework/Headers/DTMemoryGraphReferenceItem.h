//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DTGraphKit/DTMemoryGraphItem.h>

@interface DTMemoryGraphReferenceItem : DTMemoryGraphItem
{
    unsigned int _srcNode;
    unsigned int _edgeName;
    unsigned int _dstNode;
}

@property(readonly, nonatomic) unsigned int destinationIdentifier;
- (unsigned long long)hash;
- (unsigned int)identifier;
- (id)initWithEdge:(unsigned int)arg1 src:(unsigned int)arg2 dst:(unsigned int)arg3 graphIndex:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (long long)itemKind;
- (id)name;
@property(readonly, nonatomic) CDStruct_8b65991f referenceInfo;
@property(readonly, nonatomic) unsigned int sourceIdentifier;

@end
