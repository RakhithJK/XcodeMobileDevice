//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSCell.h>

@class XCEConfigurableDataNode;

@interface XCEForwardingCell : NSCell
{
    XCEConfigurableDataNode *_dataNode;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) XCEConfigurableDataNode *dataNode; // @synthesize dataNode=_dataNode;
- (void)dealloc;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;

@end
