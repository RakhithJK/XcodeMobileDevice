//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSView, PBXModule, PBXProject;

@protocol XCDockableDragSource
- (void)closeIfAppropriate;
- (PBXModule *)dragSourceModule;
- (BOOL)isDockTarget;
- (PBXModule *)owningModuleForView:(NSView *)arg1;
- (PBXProject *)project;
- (PBXModule *)removeSubmoduleAtIndex:(long long)arg1;
- (struct CGSize)sizeOfSourceModule:(long long)arg1;
- (NSArray *)submodules;
@end

