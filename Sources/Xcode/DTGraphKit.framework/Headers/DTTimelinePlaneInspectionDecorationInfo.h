//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DTTimelineInspectionDecoration, DTTimelinePlane;

__attribute__((visibility("hidden")))
@interface DTTimelinePlaneInspectionDecorationInfo : NSObject
{
    DTTimelinePlane *_plane;
    DTTimelineInspectionDecoration *_inspectionDecoration;
    double _yPosition;
}

- (void).cxx_destruct;
- (id)initWithPlane:(id)arg1 inspectionDecoration:(id)arg2 yPosition:(double)arg3;
@property(readonly, nonatomic) DTTimelineInspectionDecoration *inspectionDecoration; // @synthesize inspectionDecoration=_inspectionDecoration;
@property(readonly, nonatomic) DTTimelinePlane *plane; // @synthesize plane=_plane;
@property(readonly, nonatomic) double yPosition; // @synthesize yPosition=_yPosition;

@end
