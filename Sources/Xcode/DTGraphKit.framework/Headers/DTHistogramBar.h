//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DTHistogramBin, NSColor;

@interface DTHistogramBar : NSObject
{
    unsigned long long height;
    DTHistogramBin *bin;
    unsigned long long binOffset;
    NSColor *color;
    struct CGRect rect;
}

- (void).cxx_destruct;
@property DTHistogramBin *bin; // @synthesize bin;
@property(nonatomic) unsigned long long binOffset; // @synthesize binOffset;
@property(retain) NSColor *color; // @synthesize color;
@property(nonatomic) unsigned long long height; // @synthesize height;
@property(nonatomic) struct CGRect rect; // @synthesize rect;

@end

