//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/NSCopying-Protocol.h>

@class NSString;

@interface IDEKeyboardShortcut : NSObject <NSCopying>
{
    NSString *_keyEquivalent;
    unsigned long long _modifierMask;
    IDEKeyboardShortcut *_nextKeyboardShortcut;
    id _cachedRawKeyboardShortcutOrNull;
}

+ (id)_keyboardShortcutWithRawKeyEquivalent:(id)arg1 rawModifierMask:(unsigned long long)arg2;
+ (id)alternateKeyHumanRedableName;
+ (id)commandKeyHumanRedableName;
+ (id)controlKeyHumanRedableName;
+ (id)emptyKeyboardShortcut;
+ (id)humanReadableNameForKeyEquivalentCharacter:(unsigned short)arg1;
+ (id)keyboardShortcutFromStringRepresentation:(id)arg1;
+ (id)keyboardShortcutWithKeyEquivalent:(id)arg1 modifierMask:(unsigned long long)arg2;
+ (id)shiftKeyHumanRedableName;
+ (id)translateKeyEquivalent:(id)arg1 modifierMask:(unsigned long long)arg2;
- (void).cxx_destruct;
- (void)_computeMetaKeyGlyphWidths;
- (id)_rawCopyWithZone:(struct _NSZone *)arg1;
- (double)_widthOfKeyEquivalentCharacter:(unsigned short)arg1 usingAttributes:(id)arg2;
- (double)alignmentOffset;
- (id)attributedStringValue;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly) NSString *displayName;
- (unsigned long long)hash;
@property(readonly) NSString *humanRedableName;
- (id)initWithKeyEquivalent:(id)arg1 modifierMask:(unsigned long long)arg2;
- (id)initWithRawKeyEquivalent:(id)arg1 rawModifierMask:(unsigned long long)arg2;
@property(readonly, getter=isEmpty) BOOL empty;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToKeyboardShortcut:(id)arg1;
@property(readonly) NSString *keyEquivalent;
@property(readonly) NSString *keyEquivalentDisplayName;
@property(readonly) NSString *localizedDisplayName;
@property(readonly) NSString *localizedKeyEquivalentDisplayName;
@property(readonly) NSString *localizedModifierMaskDisplayName;
@property(readonly) unsigned long long modifierMask;
@property(readonly) NSString *modifierMaskDisplayName;
@property(copy) IDEKeyboardShortcut *nextKeyboardShortcut;
@property(readonly) NSString *rawKeyEquivalent;
@property(readonly) IDEKeyboardShortcut *rawKeyboardShortcut;
@property(readonly) unsigned long long rawModifierMask;
@property(readonly) NSString *stringRepresentation;

@end
