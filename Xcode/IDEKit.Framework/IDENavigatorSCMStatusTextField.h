//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextField.h>

@class NSString;

@interface IDENavigatorSCMStatusTextField : NSTextField
{
    long long _backgroundStyle;
}

+ (Class)cellClass;
+ (id)keyPathsForValuesAffectingHideLocalStatus;
+ (id)keyPathsForValuesAffectingLocalStatus;
+ (id)keyPathsForValuesAffectingServerStatus;
- (BOOL)allowsVibrancy;
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property BOOL hideLocalStatus;
- (id)init;
@property(copy, nonatomic) NSString *localStatus;
@property(copy, nonatomic) NSString *serverStatus;
- (void)setHidden:(BOOL)arg1;

@end
