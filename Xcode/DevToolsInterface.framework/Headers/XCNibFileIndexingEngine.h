//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/PBXIndexingEngine.h>

@class NSDictionary;

@interface XCNibFileIndexingEngine : PBXIndexingEngine
{
    NSDictionary *_nibContents;
}

+ (id)indexableFileTypes;
+ (void)initialize;
- (void)_indexActionsOfModeledClass:(id)arg1;
- (void)_indexKeysOfModeledObject:(id)arg1;
- (void)_indexModeledClass:(id)arg1;
- (void)_indexModeledObject:(id)arg1;
- (void)_indexOutletsOfModeledClass:(id)arg1;
- (void)dealloc;
- (void)indexFileAtAbsolutePath:(id)arg1 withSettings:(id)arg2;
- (id)initWithProjectIndex:(id)arg1;

@end
