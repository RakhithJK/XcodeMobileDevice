//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class CALayer;

@interface DVTToggleSwitch : NSView
{
    id _accessibilityDisplayOptionObserver;
    BOOL _on;
    BOOL _enabled;
    BOOL _canDrag;
    BOOL _dragging;
    id _target;
    SEL _action;
    CDUnknownBlockType _onDidChangeBlock;
    CALayer *_rootLayer;
    CALayer *_knobBorderLayer;
    CALayer *_maskLayer;
    CALayer *_trackLayer;
    struct CGPoint _lastDragLocation;
}

- (void).cxx_destruct;
- (void)_accessibilityDisplayOptionsDidChange;
- (void)_configureAccessibility;
- (struct CGRect)_frameForRect:(struct CGRect)arg1;
- (void)_press;
- (void)_setOn:(BOOL)arg1 animated:(BOOL)arg2 sendAction:(BOOL)arg3;
- (struct CGColor *)_trackColor;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilityPerformAction:(id)arg1;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) BOOL canDrag; // @synthesize canDrag=_canDrag;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, getter=isDragging) BOOL dragging; // @synthesize dragging=_dragging;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic, getter=isOn) BOOL on; // @synthesize on=_on;
@property(readonly, nonatomic) CALayer *knobBorderLayer; // @synthesize knobBorderLayer=_knobBorderLayer;
@property(nonatomic) struct CGPoint lastDragLocation; // @synthesize lastDragLocation=_lastDragLocation;
@property(readonly, nonatomic) CALayer *maskLayer; // @synthesize maskLayer=_maskLayer;
- (void)mouseDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType onDidChangeBlock; // @synthesize onDidChangeBlock=_onDidChangeBlock;
@property(readonly, nonatomic) CALayer *rootLayer; // @synthesize rootLayer=_rootLayer;
- (void)setOn:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic) id target; // @synthesize target=_target;
@property(readonly, nonatomic) CALayer *trackLayer; // @synthesize trackLayer=_trackLayer;

@end
