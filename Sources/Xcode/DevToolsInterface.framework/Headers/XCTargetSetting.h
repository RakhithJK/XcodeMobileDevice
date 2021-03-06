//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, PBXTarget;

@interface XCTargetSetting : NSObject
{
    PBXTarget *_target;
    NSArray *_fileRefs;
    long long _chosen;
    BOOL _validOption;
}

- (void)_removeObservers;
- (void)_removeTargetObservers;
- (long long)chosen;
- (void)computeChosen;
- (void)dealloc;
- (id)fileRefs;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setChosen:(long long)arg1;
- (void)setFileRefs:(id)arg1;
- (void)setInitiallyChosen:(long long)arg1;
- (void)setTarget:(id)arg1;
- (void)setValidOption:(BOOL)arg1;
- (id)target;
- (BOOL)validOption;

@end

