//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GLToolsServices/DYGLResourceObject.h>

@class NSString;

@interface DYGLProgramPipelineObject : DYGLResourceObject
{
    BOOL _valid;
    unsigned int _activeProgram;
    unsigned int _vertexProgram;
    unsigned int _fragmentProgram;
    unsigned int _geometryProgram;
    unsigned int _tessControlProgram;
    unsigned int _tessEvaluationProgram;
    NSString *_infoLog;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int activeProgram; // @synthesize activeProgram=_activeProgram;
@property(readonly, nonatomic) unsigned int fragmentProgram; // @synthesize fragmentProgram=_fragmentProgram;
@property(readonly, nonatomic) unsigned int geometryProgram; // @synthesize geometryProgram=_geometryProgram;
@property(readonly, copy, nonatomic) NSString *infoLog; // @synthesize infoLog=_infoLog;
- (id)initWithProperties:(id)arg1;
- (id)initWithResourceObject:(id)arg1 functionStream:(id)arg2 dataResolver:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) unsigned int tessControlProgram; // @synthesize tessControlProgram=_tessControlProgram;
@property(readonly, nonatomic) unsigned int tessEvaluationProgram; // @synthesize tessEvaluationProgram=_tessEvaluationProgram;
@property(readonly, nonatomic) BOOL valid; // @synthesize valid=_valid;
@property(readonly, nonatomic) unsigned int vertexProgram; // @synthesize vertexProgram=_vertexProgram;

@end

