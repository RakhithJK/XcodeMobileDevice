//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBezierPath, NSColor, NSImage;

@interface DVTLineGraphLayerStyle : NSObject
{
    NSImage *_symbolImage;
    NSBezierPath *_symbolPath;
    NSImage *_selectedSymbolImage;
    BOOL _fillSymbol;
    int _symbolStyle;
    double _lineWidth;
    NSColor *_lineColor;
    double _symbolSize;
}

- (void).cxx_destruct;
- (id)_createSymbolPathForSymbolStyle:(int)arg1;
- (void)_resetSymbol;
- (void)_sendStyleChangedNotification;
@property(nonatomic) BOOL fillSymbol; // @synthesize fillSymbol=_fillSymbol;
- (id)init;
@property(copy, nonatomic) NSColor *lineColor; // @synthesize lineColor=_lineColor;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(readonly) NSImage *selectedSymbolImage;
@property(nonatomic) double symbolSize; // @synthesize symbolSize=_symbolSize;
@property(nonatomic) int symbolStyle; // @synthesize symbolStyle=_symbolStyle;
@property(readonly) NSImage *symbolImage;
@property(readonly) NSBezierPath *symbolPath;

@end
