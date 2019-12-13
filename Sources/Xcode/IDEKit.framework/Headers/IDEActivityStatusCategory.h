//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage, NSString;

@interface IDEActivityStatusCategory : NSObject
{
    BOOL _alwaysShow;
    NSString *_title;
    NSImage *_image;
    long long _count;
    CDUnknownBlockType _clickHandler;
}

+ (id)keyPathsForValuesAffectingShouldShow;
- (void).cxx_destruct;
@property BOOL alwaysShow; // @synthesize alwaysShow=_alwaysShow;
@property(readonly) CDUnknownBlockType clickHandler; // @synthesize clickHandler=_clickHandler;
@property long long count; // @synthesize count=_count;
- (id)description;
@property(retain) NSImage *image; // @synthesize image=_image;
- (id)initWithTitle:(id)arg1 image:(id)arg2 clickHandler:(CDUnknownBlockType)arg3;
@property(retain) NSString *title; // @synthesize title=_title;
@property(readonly) BOOL shouldShow;

@end
