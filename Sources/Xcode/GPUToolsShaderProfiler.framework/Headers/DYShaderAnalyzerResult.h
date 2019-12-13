//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUToolsShaderProfiler/NSCoding-Protocol.h>
#import <GPUToolsShaderProfiler/NSCopying-Protocol.h>

@class NSDictionary;

@interface DYShaderAnalyzerResult : NSObject <NSCoding, NSCopying>
{
    double _instructionCount;
    double _instructionCountMin;
    double _instructionCountMax;
    double _totalCost;
    NSDictionary *_totalPerLineCost;
    NSDictionary *_drawCallCost;
    NSDictionary *_drawCallPerLineCost;
    NSDictionary *_perFileCost;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(retain, nonatomic) NSDictionary *drawCallCost; // @synthesize drawCallCost=_drawCallCost;
@property(retain, nonatomic) NSDictionary *drawCallPerLineCost; // @synthesize drawCallPerLineCost=_drawCallPerLineCost;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) double instructionCount; // @synthesize instructionCount=_instructionCount;
@property(nonatomic) double instructionCountMax; // @synthesize instructionCountMax=_instructionCountMax;
@property(nonatomic) double instructionCountMin; // @synthesize instructionCountMin=_instructionCountMin;
@property(retain, nonatomic) NSDictionary *perFileCost; // @synthesize perFileCost=_perFileCost;
@property(nonatomic) double totalCost; // @synthesize totalCost=_totalCost;
@property(retain, nonatomic) NSDictionary *totalPerLineCost; // @synthesize totalPerLineCost=_totalPerLineCost;

@end
