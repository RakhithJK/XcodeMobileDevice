//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSBezierPath.h>

@interface NSBezierPath (XDDiagramAppKitExtensions)
+ (id)_diagram_bezierPathFromDictionaryRepresentation:(id)arg1;
+ (id)_diagram_bezierPathWithBezelInRect:(struct CGRect)arg1 cornerRadius:(double)arg2;
- (BOOL)_diagram_intersectionPoint:(struct CGPoint *)arg1 withLineFromPoint:(struct CGPoint)arg2 toPoint:(struct CGPoint)arg3;
- (BOOL)_diagram_intersectsRect:(struct CGRect)arg1;
- (BOOL)_diagram_isStrokeHitByPoint:(struct CGPoint)arg1;
@end

