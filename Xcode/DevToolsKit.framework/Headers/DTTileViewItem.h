//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DevToolsKit/NSCoding-Protocol.h>
#import <DevToolsKit/NSCopying-Protocol.h>

@class DTTileView, NSMutableData, NSView;

@interface DTTileViewItem : NSObject <NSCopying, NSCoding>
{
    void *_reserved;
    void *_reserved2;
    NSMutableData *_archive;
    DTTileView *_layoutItemOwnerView;
    id _representedObject;
    NSView *_view;
    struct __tileItemFlags {
        unsigned int _selected:1;
        unsigned int _clicked:1;
        unsigned int _removalNeeded:1;
        unsigned int _suppressSelectionChangeNotification:1;
        unsigned int _reservedAnimationContainer:28;
    } _layoutItemFlags;
    struct CGRect _targetViewFrameRect;
    struct CGRect _appliedViewFrameRect;
    unsigned long long _containerReferenceCounter;
}

- (void)_applyTargetConfigurationWithAnimationMoveAndResize:(id *)arg1 show:(id *)arg2 hide:(id *)arg3;
- (void)_applyTargetConfigurationWithoutAnimation;
- (void)_copyConnectionsOfView:(id)arg1 referenceObject:(id)arg2 toView:(id)arg3 referenceObject:(id)arg4;
- (void)_decreaseContainerReferenceCounter;
- (void)_finishHideAnimation;
- (void)_finishShowAnimation;
- (void)_increaseContainerReferenceCounter;
- (void)_init;
- (BOOL)_isRemovalNeeded;
- (void)_releaseResources;
- (void)_setLayoutItemOwnerView:(id)arg1;
- (void)_setRemovalNeeded:(BOOL)arg1;
- (void)_setSelectedWithoutNotification:(BOOL)arg1;
- (void)_setTargetViewFrameRect:(struct CGRect)arg1;
- (struct CGRect)_targetViewFrameRect;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSelected;
- (id)layoutView;
- (id)representedObject;
- (void)setRepresentedObject:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setView:(id)arg1;
- (void)toggleSelected:(id)arg1;
- (id)view;

@end

