//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameplayKit/GKNoiseSource.h>

@interface GKCoherentNoiseSource : GKNoiseSource
{
    int _seed;
    double _frequency;
    long long _octaveCount;
    double _lacunarity;
}

- (struct Module *)__newModule;
@property(nonatomic) double frequency; // @synthesize frequency=_frequency;
@property(nonatomic) double lacunarity; // @synthesize lacunarity=_lacunarity;
@property(nonatomic) long long octaveCount; // @synthesize octaveCount=_octaveCount;
@property(nonatomic) int seed; // @synthesize seed=_seed;

@end

