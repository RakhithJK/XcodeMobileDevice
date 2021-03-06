//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTObservingToken, DVTStackBacktrace, NSArray, NSString;
@protocol IDEProvisionable, IDEProvisioningStyleDataSource, IDEProvisioningStyleDataSourceProvider;

@interface IDEProvisioningSettingsTargetEditorViewControllersManager : NSObject <DVTInvalidation>
{
    id <IDEProvisioningStyleDataSourceProvider> _provisioningStyleDataSourceProvider;
    NSArray *_provisioningSettingsTargetEditorViewControllers;
    id <IDEProvisionable> _provisionable;
    id <IDEProvisioningStyleDataSource> _provisioningStyleDataSource;
    DVTObservingToken *_provisioningStyleDataSourceProviderFinishedLoadingObserver;
    DVTObservingToken *_provisioningStyleDataSourceFinishedLoadingObserver;
    DVTObservingToken *_provisioningSelectionDataSourcesObserver;
}

+ (void)initialize;
- (void).cxx_destruct;
- (id)initWithProvisioningStyleDataSourceProvider:(id)arg1 provisionable:(id)arg2;
- (void)primitiveInvalidate;
@property(retain, nonatomic) id <IDEProvisionable> provisionable; // @synthesize provisionable=_provisionable;
@property(retain, nonatomic) DVTObservingToken *provisioningSelectionDataSourcesObserver; // @synthesize provisioningSelectionDataSourcesObserver=_provisioningSelectionDataSourcesObserver;
@property(retain, nonatomic) NSArray *provisioningSettingsTargetEditorViewControllers; // @synthesize provisioningSettingsTargetEditorViewControllers=_provisioningSettingsTargetEditorViewControllers;
@property(retain, nonatomic) id <IDEProvisioningStyleDataSource> provisioningStyleDataSource; // @synthesize provisioningStyleDataSource=_provisioningStyleDataSource;
@property(retain, nonatomic) DVTObservingToken *provisioningStyleDataSourceFinishedLoadingObserver; // @synthesize provisioningStyleDataSourceFinishedLoadingObserver=_provisioningStyleDataSourceFinishedLoadingObserver;
@property(retain, nonatomic) id <IDEProvisioningStyleDataSourceProvider> provisioningStyleDataSourceProvider; // @synthesize provisioningStyleDataSourceProvider=_provisioningStyleDataSourceProvider;
@property(retain, nonatomic) DVTObservingToken *provisioningStyleDataSourceProviderFinishedLoadingObserver; // @synthesize provisioningStyleDataSourceProviderFinishedLoadingObserver=_provisioningStyleDataSourceProviderFinishedLoadingObserver;
- (void)refresh;
- (void)startObservations;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

