//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewAnimation.h>

@class NSTableColumn;

@interface DVTTextCompletionWindowResizeAnimation : NSViewAnimation
{
    double _typeColStartWidth;
    double _typeColEndWidth;
    NSTableColumn *_typeColumn;
}

- (void).cxx_destruct;
- (void)setCurrentProgress:(float)arg1;
@property double typeColEndWidth; // @synthesize typeColEndWidth=_typeColEndWidth;
@property double typeColStartWidth; // @synthesize typeColStartWidth=_typeColStartWidth;
@property(retain) NSTableColumn *typeColumn; // @synthesize typeColumn=_typeColumn;

@end

