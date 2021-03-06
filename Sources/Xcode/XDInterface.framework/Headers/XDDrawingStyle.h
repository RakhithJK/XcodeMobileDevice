//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XDInterface/NSCoding-Protocol.h>
#import <XDInterface/NSCopying-Protocol.h>

@class XDGraphic;

@interface XDDrawingStyle : NSObject <NSCoding, NSCopying>
{
    XDGraphic *_graphic;
}

+ (id)defaultDrawingStyle;
+ (void)initialize;
- (void)_setGraphic:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)drawGraphic:(id)arg1 inView:(id)arg2;
- (void)drawInView:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)graphic;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithGraphic:(id)arg1;
- (id)undoManager;

@end

