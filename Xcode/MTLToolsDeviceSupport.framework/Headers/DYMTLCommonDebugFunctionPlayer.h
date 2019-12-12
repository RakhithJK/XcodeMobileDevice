//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MTLToolsDeviceSupport/DYMTLCommonFunctionPlayer.h>

@class CAMetalLayer, DYMTLDebugWireframeRenderer, DYMTLTextureRenderer, NSDictionary, NSMutableArray, NSString;

@interface DYMTLCommonDebugFunctionPlayer : DYMTLCommonFunctionPlayer
{
    struct unordered_map<unsigned long long, unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, unsigned long long>>> _drawableIdToLayerIdMap;
    struct unordered_map<unsigned long long, DrawableInfo, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, DrawableInfo>>> _textureToDrawableMap;
    struct unordered_map<unsigned long long, GPUTools::MTL::Utils::DYMTLRenderPassDescriptor, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, GPUTools::MTL::Utils::DYMTLRenderPassDescriptor>>> _commandEncoderDescriptorMap;
    NSDictionary *_counterInfos;
    struct vector<unsigned long, std::__1::allocator<unsigned long>> _baseCounterIndexForList;
    struct unordered_map<unsigned long long, CommandBufferInfo, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, CommandBufferInfo>>> _commandBufferMap;
    unordered_map_ca22002e _encoderMap;
    unordered_map_ca22002e _parallelEncoderMap;
    struct unordered_map<unsigned long long, unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, unsigned long long>>> _encoderToParallelEncoderMap;
    unsigned long long _lastEncoderID;
    BOOL _disableWireframe;
    struct unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long>> _commandQueueSet;
    DYMTLDebugWireframeRenderer *_wireframeRenderer;
    long long _wireframeRenderMode;
    DYMTLTextureRenderer *_textureRenderer;
    unsigned int _commandBufferIndex;
    unsigned int _encoderIndex;
    unsigned int _drawIndex;
    unsigned long long _targetCommandEncoderId;
    CAMetalLayer *_layer;
    BOOL _shouldIgnoreCaptureFile;
    _Bool _isInVertexMode;
    _Bool _requiresMultiplePasses;
    unsigned int _currentEncoderIndex;
    NSMutableArray *_counterTypes;
    NSMutableArray *_counterListsPerPass;
    NSString *_statVertices;
    NSString *_statPixels;
    NSMutableArray *_frameCounters;
    NSMutableArray *_reqCountersVertex;
    NSMutableArray *_reqCountersFragment;
    NSMutableArray *_reqCounters;
}

+ (id)harvestableTexture:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addRenderPassDescriptorToEncoderMapFromArgumentPointer:(void *)arg1 forEncoder:(unsigned long long)arg2;
- (struct AttachmentInfo)_attachmentInfoForCommandEncoderID:(unsigned long long)arg1;
- (void)_endEncodingForAllRemainingEncoders:(unordered_map_ca22002e *)arg1;
- (void)_executeGraphicsFunction;
- (void)_forceAttachmentStoreActionToStore:(id)arg1;
- (BOOL)_isFunctionCommandEncoderCreation;
- (BOOL)_isMandatoryCounter:(id)arg1;
- (BOOL)_isReceiverTypeCommandEncoderRelated;
- (void)_modifyDescriptorForStore:(id)arg1;
- (_Bool)_setupCounterConfigurationForCommandQueue:(id)arg1;
- (void)_superExecutePlatformFunction;
- (id)_texture2DFromTexture:(id)arg1 level:(unsigned long long)arg2 slice:(unsigned long long)arg3 depthPlane:(unsigned long long)arg4 commandBuffer:(id)arg5;
- (void)_trackObjects;
- (void)_updateMemorylessTextures:(id)arg1;
- (void)commitEncodersAndCommandBuffers;
- (id)counterInfo:(id)arg1;
@property(retain, nonatomic) NSMutableArray *counterListsPerPass; // @synthesize counterListsPerPass=_counterListsPerPass;
@property(retain, nonatomic) NSMutableArray *counterTypes; // @synthesize counterTypes=_counterTypes;
@property(nonatomic) unsigned int currentEncoderIndex; // @synthesize currentEncoderIndex=_currentEncoderIndex;
- (_Bool)didSetupFrameProfilingNeedMultiplePasses;
- (void)enableStatsSampling:(BOOL)arg1;
- (unordered_map_ca22002e *)encoderMap;
- (void)executeFunctions:(struct CoreFunction *)arg1 count:(unsigned long long)arg2;
- (void)executeGraphicsFunction;
- (void)executePlatformFunction;
@property(retain, nonatomic) NSMutableArray *frameCounters; // @synthesize frameCounters=_frameCounters;
- (unsigned long long)getStatLocations;
- (id)initWithCaptureStore:(id)arg1;
@property(nonatomic) _Bool isInVertexMode; // @synthesize isInVertexMode=_isInVertexMode;
- (void)prepareForCaptureExecution;
- (void)presentDrawable;
@property(retain, nonatomic) NSMutableArray *reqCounters; // @synthesize reqCounters=_reqCounters;
@property(retain, nonatomic) NSMutableArray *reqCountersFragment; // @synthesize reqCountersFragment=_reqCountersFragment;
@property(retain, nonatomic) NSMutableArray *reqCountersVertex; // @synthesize reqCountersVertex=_reqCountersVertex;
- (void)requestFragmentCounters;
@property(nonatomic) _Bool requiresMultiplePasses; // @synthesize requiresMultiplePasses=_requiresMultiplePasses;
- (void)sampleEncoderCounters;
- (void)setDevice:(id)arg1;
@property(nonatomic) BOOL shouldIgnoreCaptureFile; // @synthesize shouldIgnoreCaptureFile=_shouldIgnoreCaptureFile;
- (void)setStatLocations:(unsigned long long)arg1;
@property(retain, nonatomic) NSString *statPixels; // @synthesize statPixels=_statPixels;
@property(retain, nonatomic) NSString *statVertices; // @synthesize statVertices=_statVertices;
- (void)setupAllStatLocations;
- (void)setupProfilingForCounterLists;
- (_Bool)setupProfilingForListAtIndex:(unsigned long long)arg1;
- (void)stopFrameProfiling;
- (void)waitForCommmandBuffersCompletion;
@property(readonly, nonatomic) long long wireframeRenderMode; // @synthesize wireframeRenderMode=_wireframeRenderMode;

@end

