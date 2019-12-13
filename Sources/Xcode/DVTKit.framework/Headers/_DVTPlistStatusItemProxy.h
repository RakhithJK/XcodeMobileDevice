//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCell, NSString;

@interface _DVTPlistStatusItemProxy : NSObject
{
    id _parent;
    NSCell *_buttonCell;
    struct CGRect _frame;
    NSString *_title;
}

+ (id)statusItemProxyWithButtonCell:(id)arg1 parent:(id)arg2 frame:(struct CGRect)arg3 title:(id)arg4;
- (void).cxx_destruct;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (BOOL)accessibilityIsIgnored;
@property(readonly) NSCell *buttonCell; // @synthesize buttonCell=_buttonCell;
@property(readonly) struct CGRect frame; // @synthesize frame=_frame;
- (unsigned long long)hash;
- (id)initWithButtonCell:(id)arg1 parent:(id)arg2 frame:(struct CGRect)arg3 title:(id)arg4;
- (BOOL)isEqual:(id)arg1;
@property(readonly) id parent; // @synthesize parent=_parent;

@end
