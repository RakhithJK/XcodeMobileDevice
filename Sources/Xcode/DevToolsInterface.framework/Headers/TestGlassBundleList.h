//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/TestGlassOutlineNodeAdapter.h>

@interface TestGlassBundleList : TestGlassOutlineNodeAdapter
{
    BOOL _showFrameworks;
}

+ (id)nodeForBundleList;
+ (id)nodeForFrameworkList;
- (id)bundles;
- (id)dataNode:(id)arg1 objectValueForTableColumn:(id)arg2;
- (void)displayObjectInfoFor:(id)arg1 withinFace:(id)arg2;
- (void)instantiateChildrenForDataNode:(id)arg1;
- (BOOL)isDataNodeExpandable:(id)arg1;

@end

