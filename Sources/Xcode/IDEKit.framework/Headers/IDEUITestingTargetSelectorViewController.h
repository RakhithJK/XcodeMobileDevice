//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class NSPopUpButton, NSString;
@protocol IDEBlueprint;

@interface IDEUITestingTargetSelectorViewController : IDEViewController
{
    BOOL _shouldSetBundleLoader;
    id <IDEBlueprint> _unitTestBlueprint;
    NSString *_blueprintIdentifierToTest;
    NSPopUpButton *_testHostPopUp;
}

- (void).cxx_destruct;
- (void)_rebuildTestHostPopUp;
- (id)blueprintForMenuItem:(id)arg1;
@property(retain, nonatomic) NSString *blueprintIdentifierToTest; // @synthesize blueprintIdentifierToTest=_blueprintIdentifierToTest;
- (id)filteredBlueprints;
- (id)initWithUnitTestBlueprint:(id)arg1;
- (void)loadView;
- (void)primitiveInvalidate;
- (void)selectBlueprint:(id)arg1;
- (id)selectedBlueprint;
@property(nonatomic) BOOL shouldSetBundleLoader; // @synthesize shouldSetBundleLoader=_shouldSetBundleLoader;
@property(retain) NSPopUpButton *testHostPopUp; // @synthesize testHostPopUp=_testHostPopUp;
@property(retain, nonatomic) id <IDEBlueprint> unitTestBlueprint; // @synthesize unitTestBlueprint=_unitTestBlueprint;
- (void)updateUI;
- (void)updateUnitTestBlueprint;

@end

