//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsInterface/XCElementAnchorDelegateP-Protocol.h>

@interface XCElementUnit : NSObject <XCElementAnchorDelegateP>
{
}

- (void)_releaseValuesUnit;
- (void)_tableSelectionDidChangeForTable:(id)arg1 anchor:(struct NSObject *)arg2;
- (void)allowReuseOfFace:(id)arg1;
- (BOOL)anchor:(struct NSObject *)arg1 confirmRepresentedObject:(id)arg2;
- (void)anchor:(struct NSObject *)arg1 createLayoutWithinFace:(id)arg2;
- (void)anchor:(struct NSObject *)arg1 didChangeRepresentedObject:(id)arg2 previousObject:(id)arg3;
- (void)anchor:(struct NSObject *)arg1 initialLayoutWithinFace:(id)arg2;
- (void)anchor:(struct NSObject *)arg1 layoutChangingContentGroupWithinFace:(id)arg2;
- (void)anchor:(struct NSObject *)arg1 layoutSimpleContentGroupWithinFace:(id)arg2;
- (void)anchor:(struct NSObject *)arg1 objectDidBeginEditing:(struct NSObject *)arg2 inElement:(struct NSObject *)arg3;
- (void)anchor:(struct NSObject *)arg1 objectDidEndEditing:(struct NSObject *)arg2 inElement:(struct NSObject *)arg3;
- (void)anchor:(struct NSObject *)arg1 observeForChangeLayout:(id)arg2 keyPath:(id)arg3;
- (void)anchor:(struct NSObject *)arg1 observeForUpdateLayout:(id)arg2 keyPath:(id)arg3;
- (void)anchor:(struct NSObject *)arg1 observeTogglerForChangeLayout:(struct NSObject *)arg2;
- (void)anchor:(struct NSObject *)arg1 startObservingTableSelection:(id)arg2;
- (void)anchorAddToView:(struct NSObject *)arg1;
- (BOOL)anchorCanBeClosed:(struct NSObject *)arg1;
- (void)anchorChangeLayout:(struct NSObject *)arg1;
- (void)anchorClearView:(struct NSObject *)arg1;
- (void)anchorClose:(struct NSObject *)arg1;
- (BOOL)anchorCommitEditing:(struct NSObject *)arg1;
- (BOOL)anchorContentDisplayed:(struct NSObject *)arg1;
- (void)anchorDidChangeContentGroupDisplayed:(struct NSObject *)arg1;
- (void)anchorDiscardEditing:(struct NSObject *)arg1;
- (BOOL)anchorIsEditing:(struct NSObject *)arg1;
- (BOOL)anchorIsInEditingState:(struct NSObject *)arg1;
- (void)anchorObjectDidChange:(struct NSObject *)arg1;
- (BOOL)anchorPrepareToClose:(struct NSObject *)arg1;
- (void)anchorRemoveFromView:(struct NSObject *)arg1;
- (id)anchorTitleForDisclosure:(struct NSObject *)arg1;
- (void)anchorUpdateLayout:(struct NSObject *)arg1;
- (void)dealloc;
- (id)newOrRetainedFace;
- (id)objectForTable:(id)arg1 row:(long long)arg2;
- (BOOL)prepareToHide;
- (BOOL)prepareToShow;

@end

