//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, _UXFlowLayoutSection;

__attribute__((visibility("hidden")))
@interface _UXFlowLayoutRow : NSObject
{
    NSMutableArray *_items;
    struct CGSize _rowSize;
    struct CGRect _rowFrame;
    long long _index;
    BOOL _isValid;
    BOOL _complete;
    long long _verticalAlignement;
    long long _horizontalAlignement;
    BOOL _fixedItemSize;
    _UXFlowLayoutSection *_section;
}

- (void)addItem:(id)arg1;
@property(nonatomic) BOOL complete; // @synthesize complete=_complete;
- (id)copyFromSection:(id)arg1;
- (void)dealloc;
@property(nonatomic) BOOL fixedItemSize; // @synthesize fixedItemSize=_fixedItemSize;
@property(nonatomic) long long index; // @synthesize index=_index;
- (id)init;
- (void)invalidate;
@property(readonly, nonatomic) NSMutableArray *items; // @synthesize items=_items;
- (void)layoutRow;
@property(nonatomic) struct CGRect rowFrame; // @synthesize rowFrame=_rowFrame;
@property(nonatomic) struct CGSize rowSize; // @synthesize rowSize=_rowSize;
@property(nonatomic) _UXFlowLayoutSection *section; // @synthesize section=_section;
- (id)snapshot;

@end
