//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XDBase/NSCoding-Protocol.h>

@class NSMutableArray, NSString, XDModelManager, XDModelPackage;

@interface XDModel : NSObject <NSCoding>
{
    XDModelManager *_manager;
    NSString *_name;
    XDModelPackage *_rootPackage;
    NSMutableArray *_comments;
    id _controller;
}

- (id)_nameFromQualifiedName:(id)arg1;
- (id)_packagePathFromQualifiedName:(id)arg1;
- (id)comments;
- (id)controller;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (void)insertObject:(id)arg1 inCommentsAtIndex:(unsigned long long)arg2;
- (id)manager;
- (id)name;
- (id)newAssociation;
- (id)newClassWithName:(id)arg1;
- (id)newClassWithName:(id)arg1 inPackage:(id)arg2;
- (id)newComment;
- (id)newDataTypeWithName:(id)arg1;
- (id)newDataTypeWithName:(id)arg1 inPackage:(id)arg2;
- (id)newGeneralizationFrom:(id)arg1 to:(id)arg2;
- (id)newImplementationOf:(id)arg1 by:(id)arg2;
- (id)newInterfaceWithName:(id)arg1;
- (id)newInterfaceWithName:(id)arg1 inPackage:(id)arg2;
- (id)newOperationWithName:(id)arg1;
- (id)newPackageWithName:(id)arg1;
- (id)newParameterWithName:(id)arg1;
- (id)newPropertyWithName:(id)arg1;
- (id)newStereotypeWithName:(id)arg1;
- (void)removeObjectFromCommentsAtIndex:(unsigned long long)arg1;
- (id)rootPackage;
- (void)setController:(id)arg1;
- (void)setManager:(id)arg1;
- (void)setName:(id)arg1;

@end
