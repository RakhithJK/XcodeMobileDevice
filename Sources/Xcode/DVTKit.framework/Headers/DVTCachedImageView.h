//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSBitmapImageRep;

@interface DVTCachedImageView : NSView
{
    NSView *_originalView;
    NSBitmapImageRep *_cachedImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSBitmapImageRep *cachedImage; // @synthesize cachedImage=_cachedImage;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithView:(id)arg1;
@property(retain, nonatomic) NSView *originalView; // @synthesize originalView=_originalView;

@end
