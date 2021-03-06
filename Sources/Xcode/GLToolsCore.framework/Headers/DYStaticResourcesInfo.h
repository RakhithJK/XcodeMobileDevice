//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GLToolsCore/NSCoding-Protocol.h>

@class NSArray;

@interface DYStaticResourcesInfo : NSObject <NSCoding>
{
    NSArray *textures;
    NSArray *renderbuffers;
    NSArray *framebuffers;
    NSArray *buffers;
    NSArray *vertexArrays;
    NSArray *queries;
    NSArray *shaders;
    NSArray *programs;
    NSArray *programPipelines;
}

@property(retain, nonatomic) NSArray *buffers; // @synthesize buffers;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) NSArray *framebuffers; // @synthesize framebuffers;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSArray *programPipelines; // @synthesize programPipelines;
@property(retain, nonatomic) NSArray *programs; // @synthesize programs;
@property(retain, nonatomic) NSArray *queries; // @synthesize queries;
@property(retain, nonatomic) NSArray *renderbuffers; // @synthesize renderbuffers;
@property(retain, nonatomic) NSArray *shaders; // @synthesize shaders;
@property(retain, nonatomic) NSArray *textures; // @synthesize textures;
@property(retain, nonatomic) NSArray *vertexArrays; // @synthesize vertexArrays;

@end

