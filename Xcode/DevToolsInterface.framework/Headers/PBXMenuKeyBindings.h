//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXKeyBindings.h>

@interface PBXMenuKeyBindings : PBXKeyBindings
{
}

+ (void)_addMenuItemsToCache:(id)arg1;
+ (id)actionToMenuItemCache;
+ (id)bindingToMenuItemCache;
+ (id)menuItemForAction:(id)arg1;
+ (id)menuItemForKeyEquivalent:(id)arg1;
+ (id)nonbindableSelectors;
+ (id)systemKeyBindings;
- (void)_applyKeyBindingsToMenu:(id)arg1;
- (void)_removeKeyEqivalentForMenuItem:(id)arg1;
- (void)_removeKeyEqivalentForMenuItem:(id)arg1 atIndex:(unsigned long long)arg2 inMenu:(id)arg3;
- (id)actionAndTag:(unsigned long long *)arg1 forKeyEquivalent:(id)arg2;
- (id)actionForKeyEquivalent:(id)arg1;
- (void)activate;
- (id)keyEquivalentsForAction:(id)arg1 tag:(unsigned long long)arg2;
- (id)setKeyEquivalents:(id)arg1 forAction:(id)arg2;
- (id)setKeyEquivalents:(id)arg1 forAction:(id)arg2 tag:(unsigned long long)arg3;
- (id)validatedKeyEquivalent:(id)arg1;

@end

