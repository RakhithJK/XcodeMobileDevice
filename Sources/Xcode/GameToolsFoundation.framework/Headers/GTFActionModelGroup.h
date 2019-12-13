//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameToolsFoundation/NSCoding-Protocol.h>

@class GTFActionTimelineModel, NSArray, NSMutableArray;

@interface GTFActionModelGroup : NSObject <NSCoding>
{
    NSMutableArray *_tracks;
    struct map<int, NSMutableArray *, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, NSMutableArray *>>> _trackActions;
    double _startTime;
    double _duration;
    int _topTrack;
    int _bottomTrack;
    int _numActions;
    BOOL _actionsLocked;
    int _groupId;
    GTFActionTimelineModel *_ownerTimeline;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_getSKActionForPreview:(BOOL)arg1 withStartTime:(double)arg2 activeAnimationFound:(char *)arg3 ignoreScrubSensitiveActions:(BOOL)arg4;
@property(nonatomic) BOOL actionsLocked; // @synthesize actionsLocked=_actionsLocked;
- (void)addAction:(id)arg1;
- (void)addActionToActionTrackMap:(id)arg1;
- (void)addActions:(id)arg1;
- (void)adjustStartTime:(double)arg1;
- (BOOL)anyActionsInTrack:(int)arg1;
@property(readonly, nonatomic) int bottomTrackIndex;
- (BOOL)containsAction:(id)arg1;
@property(nonatomic) double duration;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic) double endTime;
- (void)findBottomTrack;
- (void)findTopTrack;
- (id)getActions;
- (id)getActionsForTrack:(int)arg1;
- (id)getPreviewSKActionWithStartTime:(double)arg1 activeAnimationFound:(char *)arg2 ignoreScrubSensitiveActions:(BOOL)arg3;
- (id)getSCNAction;
- (id)getSKAction;
@property(nonatomic) int groupId; // @synthesize groupId=_groupId;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isInTrack:(int)arg1;
@property(readonly, nonatomic) int numActions;
- (void)offsetStartTime:(double)arg1;
@property(nonatomic) __weak GTFActionTimelineModel *ownerTimeline; // @synthesize ownerTimeline=_ownerTimeline;
- (void)removeAction:(id)arg1;
- (void)removeActions:(id)arg1;
- (void)removeAllActions;
@property(nonatomic) double startTime;
- (void)setupGroup;
@property(readonly, nonatomic) int topTrackIndex;
@property(readonly, nonatomic) NSArray *tracks; // @synthesize tracks=_tracks;
- (void)update;
- (void)updateTrackIndexes;

@end
