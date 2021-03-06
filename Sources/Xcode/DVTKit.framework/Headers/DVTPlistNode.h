//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTKit/NSCopying-Protocol.h>

@interface DVTPlistNode : NSObject <NSCopying>
{
    DVTPlistNode *_parent;
}

+ (id)plistfromPropertyList:(id)arg1 withParent:(id)arg2;
- (id)children;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)findStringMatchingDescriptor:(id)arg1 backwards:(BOOL)arg2 startingAt:(id)arg3 document:(id)arg4;
- (unsigned long long)indexOfChild:(id)arg1;
- (unsigned long long)indexOfKey:(id)arg1;
- (id)initWithParentNode:(id)arg1;
@property(readonly, getter=isLeaf) BOOL leaf;
- (BOOL)isPlistCommentNode;
- (id)keyAtIndex:(unsigned long long)arg1;
- (id)keyForChild:(id)arg1;
- (id)keyPath;
- (unsigned long long)numberOfChildren;
@property DVTPlistNode *parent; // @synthesize parent=_parent;
- (id)plistStringWithIndent:(id)arg1;
- (id)rawPlist;
@property(retain) id value;
- (void)setValueFromPlist:(id)arg1;
- (id)stringForSearch;
- (id)valueAtIndex:(unsigned long long)arg1;
- (id)xmlStringWithIndent:(id)arg1;

@end

