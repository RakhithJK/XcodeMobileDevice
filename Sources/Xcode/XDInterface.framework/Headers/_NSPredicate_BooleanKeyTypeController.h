//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XDInterface/_NSPredicate_RootTypeController.h>

@class NSPopUpButton;

@interface _NSPredicate_BooleanKeyTypeController : _NSPredicate_RootTypeController
{
    NSPopUpButton *_valuePopUp;
}

- (BOOL)_booleanValue;
- (void)_createValuePopUp;
- (id)_noValue;
- (id)_yesValue;
- (void)dealloc;
- (id)firstKeyView;
- (id)lastKeyView;
- (id)leafPredicate;
- (BOOL)passInString:(id)arg1;
- (id)possibleOperators;
- (void)remove;
- (id)setLeafPredicate:(id)arg1;
- (struct CGSize)setPosition:(struct CGPoint)arg1 secondRow:(struct CGPoint)arg2;
- (id)stringToPassOn;

@end

