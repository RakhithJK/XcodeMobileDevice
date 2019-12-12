//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextView.h>

#import <IDEKit/IDEApplicationEventDelegate-Protocol.h>

@class DVTNotificationToken, IDEKeyBindingFieldCell, NSButton, NSColor, NSString;

@interface IDEKeyBindingFieldEditor : NSTextView <IDEApplicationEventDelegate>
{
    unsigned int _savedHotKeyOperatingMode;
    BOOL _needsToRestoreSavedHotKeyOperatingMode;
    DVTNotificationToken *_windowDidBecomeKeyObserverToken;
    DVTNotificationToken *_windowDidResignKeyObserverToken;
    IDEKeyBindingFieldCell *_editingCell;
    NSButton *_addKeyboardShortcutButton;
    NSButton *_deleteKeyboardShortcutButton;
    NSColor *_borderColor;
    struct CGSize _buttonOffset;
}

- (void).cxx_destruct;
- (void)_disableHotKeyOperationMode;
- (void)_restoreHotKeyOperationMode;
- (void)_setSelectionFromEvent:(id)arg1;
- (void)_syncDisplay;
- (id)acceptableDragTypes;
- (void)addKeyboardShortcut:(id)arg1;
- (BOOL)application:(id)arg1 shouldSendEvent:(id)arg2;
- (void)beginEditingKeyboardShortcutForCell:(id)arg1;
@property(retain, nonatomic) NSColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) struct CGSize buttonOffet; // @synthesize buttonOffet=_buttonOffset;
- (void)deleteKeyboardShortcut:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
@property(readonly) IDEKeyBindingFieldCell *editingCell; // @synthesize editingCell=_editingCell;
- (void)endEditingKeyboardShortcut;
- (void)mouseDown:(id)arg1;
- (id)readablePasteboardTypes;
- (void)resetCursorRects;
- (void)setFrame:(struct CGRect)arg1;
- (BOOL)shouldDrawInsertionPoint;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)viewDidMoveToWindow;
- (id)writablePasteboardTypes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
