//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XDInterface/XDDiagramTool.h>

@class XDGraphic;

@interface XDSelectionTool : XDDiagramTool
{
    XDGraphic *_mouseOverGraphic;
    struct CGRect _rubberbandRect;
}

+ (id)defaultIdentifier;
+ (void)initialize;
- (void)_diagramStorageWillRemoveGraphic:(id)arg1;
- (void)becomeCurrentDiagramTool;
- (void)dealloc;
- (BOOL)dragSelectedGraphicsWithEvent:(id)arg1 inView:(id)arg2;
- (void)drawRect:(struct CGRect)arg1 inView:(id)arg2;
- (id)imageForDiagramToolbarItem;
- (id)initWithIdentifier:(id)arg1;
- (void)mouseDown:(id)arg1 inView:(id)arg2;
- (void)mouseMoved:(id)arg1 inView:(id)arg2;
- (BOOL)moveSelectedGraphicsWithEvent:(id)arg1 inView:(id)arg2;
- (void)resignCurrentDiagramTool;
- (void)rubberbandSelectionWithEvent:(id)arg1 inView:(id)arg2;
- (void)trackKnob:(int)arg1 ofGraphic:(id)arg2 withEvent:(id)arg3 inView:(id)arg4;

@end

