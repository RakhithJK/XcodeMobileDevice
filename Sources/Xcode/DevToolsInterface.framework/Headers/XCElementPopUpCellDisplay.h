//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/XCElementCellDisplay.h>

@interface XCElementPopUpCellDisplay : XCElementCellDisplay
{
}

- (void)configureForControlSize:(unsigned long long)arg1 font:(id)arg2;
- (void)configureRoundForControlSize:(unsigned long long)arg1 font:(id)arg2;
- (void)displayer:(struct NSObject *)arg1 performDelegateAction:(id)arg2;
- (void)displayer:(struct NSObject *)arg1 setSelectedIndex:(long long)arg2;
- (void)installLocalDataDelegateForDisplayer:(struct NSObject *)arg1;
- (void)readDataFromDisplayer:(struct NSObject *)arg1 intoCell:(id)arg2;
- (long long)selectedIndexForDisplayer:(struct NSObject *)arg1;

@end

