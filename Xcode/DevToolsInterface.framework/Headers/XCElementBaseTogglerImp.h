//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/XCElementImp.h>

@class NSMutableArray, XCEActivity;

@interface XCElementBaseTogglerImp : XCElementImp
{
    NSMutableArray *_toggleElements;
    XCEActivity *_sourceActivity;
    struct {
        unsigned int initial:1;
        unsigned int initialPositioning:1;
        unsigned int positionOnUpdate:1;
        unsigned int adjustPreviousWhenToggling:1;
        unsigned int displayed:1;
        unsigned int _reserved:27;
    } _tFlags;
}

- (void)_addChildAsOriginally:(id)arg1;
- (void)_releaseValuesBaseToggler;
- (void)_updateChangedElementState;
- (void)addChild:(id)arg1;
- (BOOL)adjustPreviousWhenToggling;
- (void)clearView;
- (void)configureAndSetSourceActivity:(id)arg1;
- (void)dealloc;
- (id)initInMain:(id)arg1;
- (void)observeToggleSignal:(id)arg1;
- (void)observeToggleSource:(id)arg1 keyPath:(id)arg2;
- (BOOL)positionOnUpdate;
- (void)preparePositioningAfterChildren;
- (void)receiveObservedValue:(id)arg1;
- (void)receiveXCESignal:(id)arg1;
- (void)reflectObservedToggleState;
- (void)removeAndClearChildren;
- (void)setAdjustPreviousWhenToggling:(BOOL)arg1;
- (void)setObservedValueTo:(id)arg1;
- (void)setObservedValueToNO:(id)arg1;
- (void)setObservedValueToYES:(id)arg1;
- (void)setPositionOnUpdate:(BOOL)arg1;
- (void)setSourceActivity:(id)arg1;
- (id)sourceActivity;
- (void)updateCurrentChildren;

@end

