//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXAbstractProductSettingsModule.h>

#import <DevToolsInterface/NSTextFieldDelegate-Protocol.h>

@class NSImageView, NSString, PBXExtendedTextField;

@interface PBXProductIconSettingsModule : PBXAbstractProductSettingsModule <NSTextFieldDelegate>
{
    PBXExtendedTextField *_iconFileField;
    NSImageView *_iconImageView;
}

- (void)_setIconImage;
- (void)takeStringValueFrom:(id)arg1;
- (void)update;
- (unsigned long long)view:(id)arg1 draggingEntered:(id)arg2;
- (BOOL)view:(id)arg1 performDragOperation:(id)arg2;
- (BOOL)view:(id)arg1 prepareForDragOperation:(id)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

