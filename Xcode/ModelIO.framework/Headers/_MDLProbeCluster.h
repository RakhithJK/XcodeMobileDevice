//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface _MDLProbeCluster : NSObject
{
    NSMutableSet *_probes;
    // Error parsing type: , name: _centroid
}

- (void).cxx_destruct;
- (void)calculateCentroidNotIncludingSamplesinArray:(id)arg1;
// Error parsing type for property centroid:
// Property attributes: T,V_centroid

- (unsigned long long)hash;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToCluster:(id)arg1;
@property(retain) NSMutableSet *probes; // @synthesize probes=_probes;

@end

