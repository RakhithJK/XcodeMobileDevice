//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XDInterface/NSObject-Protocol.h>

@class NSNotification, NSText;

@protocol NSTextDelegate <NSObject>

@optional
- (void)textDidBeginEditing:(NSNotification *)arg1;
- (void)textDidChange:(NSNotification *)arg1;
- (void)textDidEndEditing:(NSNotification *)arg1;
- (BOOL)textShouldBeginEditing:(NSText *)arg1;
- (BOOL)textShouldEndEditing:(NSText *)arg1;
@end
