//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@interface IDEDownloadsPrefToolchainItemTableCellView : NSTableCellView
{
    BOOL _showContextButton;
}

+ (id)keyPathsForValuesAffectingShowWarningIcon;
- (void)_addTrackingArea;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
@property BOOL showContextButton; // @synthesize showContextButton=_showContextButton;
- (BOOL)showWarningIcon;

@end
