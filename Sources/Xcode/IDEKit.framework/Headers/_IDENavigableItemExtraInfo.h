//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTExtension, NSMapTable, NSString;

@interface _IDENavigableItemExtraInfo : NSObject
{
    DVTExtension *_representedExtension;
    NSString *_childItemsKeyPath;
    NSMapTable *_navigableItemsByRepresentedObject;
}

- (void).cxx_destruct;
@property(copy) NSString *childItemsKeyPath; // @synthesize childItemsKeyPath=_childItemsKeyPath;
- (id)init;
@property(readonly) NSMapTable *navigableItemsByRepresentedObject; // @synthesize navigableItemsByRepresentedObject=_navigableItemsByRepresentedObject;
@property(retain) DVTExtension *representedExtension; // @synthesize representedExtension=_representedExtension;

@end
