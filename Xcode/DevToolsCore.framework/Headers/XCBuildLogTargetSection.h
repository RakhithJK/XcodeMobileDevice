//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/XCBuildLogSection.h>

@protocol XCBuildables;

@interface XCBuildLogTargetSection : XCBuildLogSection
{
    id <XCBuildables> _buildable;
}

+ (Class)logRecorderClass;
- (id)buildable;
- (void)dealloc;
- (id)initFromDeserializer:(id)arg1;
- (id)initWithTitle:(id)arg1 buildable:(id)arg2;
- (BOOL)isTargetHeadingItem;
- (BOOL)isTargetSection;
- (void)logRecorder:(id)arg1 didStopRecordingWithInfo:(id)arg2;
- (void)writeToSerializer:(id)arg1;

@end
