//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXCornerView.h>

@interface XCPerspectiveSlider : PBXCornerView
{
    struct CGPoint _dragOrigin;
    BOOL _useLiveResize;
}

- (void)mouseDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)updatePerspectiveSwitch;
- (void)viewDidMoveToWindow;

@end
