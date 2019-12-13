//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/NSCopying-Protocol.h>
#import <IDEKit/NSValidatedUserInterfaceItem-Protocol.h>

@class IDEKeyBindingSet, NSArray, NSMutableArray, NSString;

@interface IDEKeyBinding : NSObject <NSCopying, NSValidatedUserInterfaceItem>
{
    IDEKeyBindingSet *_keyBindingSet;
    NSString *_title;
    NSString *_parentTitle;
    NSString *_group;
    NSArray *_actions;
    NSMutableArray *_keyboardShortcuts;
    unsigned long long _maxNumberOfShortcuts;
    struct _IDEKeyBindingFlags _kbFlags;
}

+ (unsigned long long)_defaultMaxNumberOfShortcuts;
+ (id)_stringFromModifierMask:(unsigned long long)arg1;
+ (id)keyBindingWithTitle:(id)arg1 parentTitle:(id)arg2 group:(id)arg3 actions:(id)arg4 keyboardShortcuts:(id)arg5;
+ (id)keyPathsForValuesAffectingIsModified;
- (void).cxx_destruct;
- (void)_disablePostingKeyboardShortcutsDidChangeNotification;
- (void)_reenablePostingKeyboardShortcutsDidChangeNotification;
@property(readonly) SEL action;
@property(readonly) NSArray *actions; // @synthesize actions=_actions;
- (id)addPrefixKeyboardShortcut:(id)arg1 toKeyboardShortcut:(id)arg2;
@property(readonly, copy) NSString *commandIdentifier;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)displayTitle;
@property(readonly) NSString *group; // @synthesize group=_group;
- (id)initWithTitle:(id)arg1 parentTitle:(id)arg2 group:(id)arg3 actions:(id)arg4 keyboardShortcuts:(id)arg5;
- (void)insertObject:(id)arg1 inKeyboardShortcutsAtIndex:(unsigned long long)arg2;
@property(setter=setAlternate:) BOOL isAlternate;
@property(setter=setAlternateModifierMaskLocked:) BOOL isAlternateModifierMaskLocked;
@property(setter=setCommandModifierMaskLocked:) BOOL isCommandModifierMaskLocked;
@property(setter=setConflicted:) BOOL isConflicted;
@property(setter=setConflictedWithHotKey:) BOOL isConflictedWithHotKey;
@property(setter=setControlModifierMaskLocked:) BOOL isControlModifierMaskLocked;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToKeyBinding:(id)arg1;
@property(setter=setGroupedAlternate:) BOOL isGroupedAlternate;
@property(readonly) BOOL isModified;
@property(setter=setNavigation:) BOOL isNavigation;
@property(setter=setShiftModifierMaskLocked:) BOOL isShiftModifierMaskLocked;
@property(retain) IDEKeyBindingSet *keyBindingSet; // @synthesize keyBindingSet=_keyBindingSet;
@property(copy, nonatomic) NSArray *keyboardShortcuts; // @synthesize keyboardShortcuts=_keyboardShortcuts;
@property unsigned long long maxNumberOfShortcuts; // @synthesize maxNumberOfShortcuts=_maxNumberOfShortcuts;
@property(readonly) NSMutableArray *mutableKeyboardShortcuts;
@property(readonly) NSString *parentTitle; // @synthesize parentTitle=_parentTitle;
- (void)removeObjectFromKeyboardShortcutsAtIndex:(unsigned long long)arg1;
- (void)removePrefixFromKeyboardShortcut:(id)arg1;
@property(readonly) long long tag;
@property(readonly) NSString *title; // @synthesize title=_title;

@end
