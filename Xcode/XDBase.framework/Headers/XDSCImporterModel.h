//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XDBase/XDModel.h>

@class PBXProject;

@interface XDSCImporterModel : XDModel
{
    PBXProject *_project;
}

- (void)classifier:(id)arg1 didChangeShowOptionFrom:(unsigned long long)arg2;
- (void)classifier:(id)arg1 willInsertObject:(id)arg2 inOwnedCommentsAtIndex:(unsigned long long)arg3;
- (void)classifier:(id)arg1 willRemoveObjectFromOwnedCommentsAtIndex:(unsigned long long)arg2;
- (id)newClassWithName:(id)arg1;
- (id)newInterfaceWithName:(id)arg1;
- (id)newOperationWithName:(id)arg1;
- (id)newPropertyWithName:(id)arg1;
- (id)projectIndex;
- (void)removeGeneralization:(id)arg1 forClassifier:(id)arg2;
- (void)removeGeneralizations:(id)arg1 forClassifier:(id)arg2;
- (void)removeImplementation:(id)arg1 forClassifier:(id)arg2;
- (void)removeImplementations:(id)arg1 forClassifier:(id)arg2;
- (void)setProject:(id)arg1;

@end

