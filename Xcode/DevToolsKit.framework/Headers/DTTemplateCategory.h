//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage, NSMutableArray, NSString;

@interface DTTemplateCategory : NSObject
{
    NSString *displayName;
    NSImage *image;
    NSMutableArray *templateItems;
    NSString *identifier;
}

- (void)addTemplateItem:(id)arg1;
- (void)dealloc;
@property(readonly) NSString *displayName; // @synthesize displayName;
@property(readonly) NSString *identifier; // @synthesize identifier;
@property(readonly) NSImage *image; // @synthesize image;
- (id)initWithDisplayName:(id)arg1 image:(id)arg2 templateItems:(id)arg3 identifier:(id)arg4;
- (void)setTemplateItems:(id)arg1;
- (id)templateItems;

@end
