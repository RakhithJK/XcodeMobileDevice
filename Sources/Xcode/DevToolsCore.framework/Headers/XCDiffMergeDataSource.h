//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/XCDiffDataSource.h>

@interface XCDiffMergeDataSource : XCDiffDataSource
{
    struct __CFDictionary *_updatedDescriptors;
    struct _XCDiffMergeDataSourceFlags _dmdsFlags;
}

+ (void)initialize;
- (void)_diffContextDidChangeDiffDescriptors:(id)arg1;
- (void)_diffContextWillChangeDiffDescriptors:(id)arg1;
- (BOOL)_setContent:(id)arg1;
- (void)appendStringForDiffDescriptor:(id)arg1;
- (void)beginEditingContent;
- (void)dealloc;
- (void)diffDescriptorDidChange:(id)arg1;
- (void)diffDescriptorWillChange:(id)arg1;
- (void)endEditingContent;
- (id)initWithContent:(id)arg1;
- (BOOL)needsUpdate;
- (void)setDiffContext:(id)arg1;
- (void)setNeedsUpdate:(BOOL)arg1;

@end

