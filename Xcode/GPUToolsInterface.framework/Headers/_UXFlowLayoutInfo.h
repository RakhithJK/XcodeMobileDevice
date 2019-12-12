//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UXFlowLayoutInfo : NSObject
{
    NSMutableArray *_sections;
    BOOL _useFloatingHeaderFooter;
    BOOL _horizontal;
    BOOL _leftToRight;
    struct CGRect _visibleBounds;
    struct CGSize _layoutSize;
    double _dimension;
    BOOL _isValid;
    NSDictionary *_rowAlignmentOptions;
    BOOL _usesFloatingHeaderFooter;
    struct CGSize _contentSize;
}

- (id)addSection;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
- (id)copy;
- (void)dealloc;
@property(nonatomic) double dimension; // @synthesize dimension=_dimension;
- (struct CGRect)frameForItemAtIndexPath:(id)arg1;
@property(nonatomic) BOOL horizontal; // @synthesize horizontal=_horizontal;
- (id)init;
- (void)invalidate:(BOOL)arg1;
@property(nonatomic) BOOL leftToRight; // @synthesize leftToRight=_leftToRight;
@property(retain, nonatomic) NSDictionary *rowAlignmentOptions; // @synthesize rowAlignmentOptions=_rowAlignmentOptions;
@property(readonly, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(nonatomic) BOOL usesFloatingHeaderFooter; // @synthesize usesFloatingHeaderFooter=_usesFloatingHeaderFooter;
- (id)snapshot;

@end

