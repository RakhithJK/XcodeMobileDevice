//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/XCEditFileEditor.h>

@interface PBXDisassemblyFileEditor : XCEditFileEditor
{
}

- (void)_addBreakpointAtPoint:(struct CGPoint)arg1;
- (void)_checkDataTipEvent:(id)arg1;
- (void)_computeBreakpointMarkers;
- (id)initWithFileDocument:(id)arg1;
- (void)replaceFileDocument:(id)arg1;
- (void)rulerView:(id)arg1 didMoveMarker:(id)arg2;
- (double)rulerView:(id)arg1 willMoveMarker:(id)arg2 toLocation:(double)arg3;

@end
