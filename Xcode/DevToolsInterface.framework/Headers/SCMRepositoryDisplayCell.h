//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

@class NSImageCell, SCMRepository, SCMSandbox;

@interface SCMRepositoryDisplayCell : NSTextFieldCell
{
    NSTextFieldCell *_descriptionTextCell;
    NSTextFieldCell *_activeTextCell;
    NSImageCell *_imageCell;
    SCMRepository *_repository;
    SCMSandbox *_sandbox;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)init;
- (void)setObjectValue:(id)arg1;
- (void)setRepository:(id)arg1;
- (void)setSandbox:(id)arg1;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;

@end

