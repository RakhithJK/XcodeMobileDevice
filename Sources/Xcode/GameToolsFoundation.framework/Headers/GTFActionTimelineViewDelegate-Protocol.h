//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameToolsFoundation/NSObject-Protocol.h>

@class GTFActionTimelineView;

@protocol GTFActionTimelineViewDelegate <NSObject>
- (void)actionTimelineViewDidBeginScrubbing:(GTFActionTimelineView *)arg1;
- (void)actionTimelineViewDidEndScrubbing:(GTFActionTimelineView *)arg1;
- (void)incrementPreviewStartTime:(double)arg1 startPreview:(BOOL)arg2;
- (void)setActionPreviewStartTime:(double)arg1 startPreview:(BOOL)arg2;
@end

