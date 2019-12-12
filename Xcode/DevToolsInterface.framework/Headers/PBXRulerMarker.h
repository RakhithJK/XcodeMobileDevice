//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSRulerMarker.h>

@interface PBXRulerMarker : NSRulerMarker
{
    double _imageOffset;
    BOOL _isValid;
}

- (id)delegate;
- (void)didDoubleClickWithModifierFlags:(unsigned long long)arg1;
- (void)didMove;
- (void)didSingleClickWithModifierFlags:(unsigned long long)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithRulerView:(id)arg1 location:(double)arg2 representedObject:(id)arg3;
- (id)initWithRulerView:(id)arg1 markerLocation:(double)arg2 image:(id)arg3 imageOrigin:(struct CGPoint)arg4;
- (BOOL)isValid;
- (void)setIsValid:(BOOL)arg1;
- (unsigned long long)supportedModifiers;
- (long long)supportedTypes;
- (BOOL)trackMouse:(id)arg1 adding:(BOOL)arg2;

@end

