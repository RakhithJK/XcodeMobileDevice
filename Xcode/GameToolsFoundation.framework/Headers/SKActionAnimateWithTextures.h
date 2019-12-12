//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameToolsFoundation/GTFActionModel.h>

@class NSArray;

@interface SKActionAnimateWithTextures : GTFActionModel
{
    BOOL _resize;
    BOOL _restore;
}

+ (id)keyPathsForValuesAffectingInspectorResize;
+ (id)keyPathsForValuesAffectingInspectorRestore;
+ (id)keyPathsForValuesAffectingInspectorTextureFileNames;
- (id)_recursivePathsForResourcesNamed:(id)arg1 inDirectory:(id)arg2;
- (id)_textureForFilename:(id)arg1;
- (id)actionColor;
- (id)actionInfoString;
- (id)actionName;
- (long long)actionType;
- (void)encodeWithCoder:(id)arg1;
- (id)findAbsolutePathForResourceNamed:(id)arg1;
- (id)getSKAction;
- (id)initWithCoder:(id)arg1;
- (id)initWithTextures:(id)arg1 resize:(BOOL)arg2 restore:(BOOL)arg3;
@property(nonatomic) BOOL inspectorResize;
@property(nonatomic) BOOL inspectorRestore;
@property(retain, nonatomic) NSArray *inspectorTextureFileNames;
@property BOOL resize; // @synthesize resize=_resize;
@property BOOL restore; // @synthesize restore=_restore;
- (void)reverse;
@property(retain) NSArray *textureFileNames;

@end

