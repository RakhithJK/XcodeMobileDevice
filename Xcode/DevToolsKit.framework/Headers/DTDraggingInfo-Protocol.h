//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsKit/NSDraggingInfo-Protocol.h>

@class DTDraggedImageState, NSDictionary;

@protocol DTDraggingInfo <NSDraggingInfo>
- (DTDraggedImageState *)draggedImageState;
- (struct CGPoint)draggingLocationOnScreen;
- (NSDictionary *)draggingSourceContext;
- (struct CGSize)draggingStickiness;
- (void)setDraggedImageStateNeedsUpdate:(BOOL)arg1;
- (void)setDraggingStickiness:(struct CGSize)arg1;
@end

