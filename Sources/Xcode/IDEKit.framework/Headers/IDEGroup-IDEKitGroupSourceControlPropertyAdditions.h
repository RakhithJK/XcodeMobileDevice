//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEGroup.h>

@class NSString;

@interface IDEGroup (IDEKitGroupSourceControlPropertyAdditions)
+ (id)keyPathsForValuesAffectingNavigableItem_sourceControlLocalStatus;
+ (id)keyPathsForValuesAffectingNavigableItem_sourceControlLocalStatusFlag;
+ (id)keyPathsForValuesAffectingNavigableItem_sourceControlServerStatus;
+ (id)keyPathsForValuesAffectingNavigableItem_sourceControlServerStatusFlag;
@property(readonly) unsigned long long navigableItem_conflictStateForUpdateOrMerge;
@property(readonly) NSString *navigableItem_sourceControlLocalStatus;
- (int)navigableItem_sourceControlLocalStatusFlag;
@property(readonly) NSString *navigableItem_sourceControlServerStatus;
- (int)navigableItem_sourceControlServerStatusFlag;
@end

