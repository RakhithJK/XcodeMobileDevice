//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class XCAPIAssistant;

@interface PanelView : NSView
{
    XCAPIAssistant *_assistant;
}

- (void)_addControls;
@property(retain, nonatomic) XCAPIAssistant *assistant; // @synthesize assistant=_assistant;
- (id)initWithFrame:(struct CGRect)arg1 assistant:(id)arg2;

@end

