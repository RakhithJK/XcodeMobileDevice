//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXRulerMarker.h>

@class NSMutableArray, PBXBuildMessage;

@interface PBXProblemMarker : PBXRulerMarker
{
    PBXBuildMessage *_buildMessage;
    id _sender;
    NSMutableArray *_buildMessages;
    long long _lineNumber;
    unsigned long long _timestamp;
}

+ (id)bigProblemIcon;
+ (id)errorIcon;
+ (id)problemIcon;
+ (id)warningIcon;
- (void)addBuildMessage:(id)arg1;
- (id)buildMessage;
- (id)buildMessages;
- (void)dealloc;
- (void)didMove;
- (void)didSingleClickWithModifierFlags:(unsigned long long)arg1;
- (id)image;
- (id)initWithRulerView:(id)arg1 location:(double)arg2 lineNumber:(long long)arg3 timestamp:(unsigned long long)arg4 representedObject:(id)arg5 sender:(id)arg6;
- (long long)lineNumber;
- (void)setBuildMessage:(id)arg1;
- (void)setLineNumber:(long long)arg1;
- (unsigned long long)timestamp;
- (id)tooltipString;

@end

