//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/XCCustomizer.h>

@interface XCDiffComparatorCustomizer : XCCustomizer
{
}

+ (void)initialize;
- (void)_customizingObjectDefaultsDidChange:(id)arg1;
- (id)_diffComparatorView;
- (id)_diffContext;
- (double)autoupdatingDelay;
- (void)dealloc;
- (void)didChange;
- (id)diffHunkColor;
- (BOOL)ignoresCase;
- (BOOL)ignoresLeadingSpaces;
- (BOOL)ignoresLineEnds;
- (BOOL)ignoresSpacesInRuns;
- (BOOL)ignoresTrailingSpaces;
- (id)initWithWindow:(id)arg1;
- (double)maxAutoupdatingDelay;
- (long long)maxNumberOfContextTokens;
- (double)minAutoupdatingDelay;
- (long long)minNumberOfContextTokens;
- (id)modificationColor;
- (long long)numberOfContextTokens;
- (void)revertToDefaults;
- (id)selectedDiffHunkColor;
- (void)setAutoupdatingDelay:(double)arg1;
- (void)setDiffHunkColor:(id)arg1;
- (void)setIgnoresCase:(BOOL)arg1;
- (void)setIgnoresLeadingSpaces:(BOOL)arg1;
- (void)setIgnoresLineEnds:(BOOL)arg1;
- (void)setIgnoresSpacesInRuns:(BOOL)arg1;
- (void)setIgnoresTrailingSpaces:(BOOL)arg1;
- (void)setModificationColor:(id)arg1;
- (void)setNumberOfContextTokens:(long long)arg1;
- (void)setSelectedDiffHunkColor:(id)arg1;
- (void)setShowsChangeNumbers:(BOOL)arg1;
- (void)setShowsMergeDirection:(BOOL)arg1;
- (void)setShowsModification:(BOOL)arg1;
- (BOOL)showsChangeNumbers;
- (BOOL)showsMergeDirection;
- (BOOL)showsModification;
- (void)viewWasInstalled;
- (void)viewWillBeRemoved;

@end

