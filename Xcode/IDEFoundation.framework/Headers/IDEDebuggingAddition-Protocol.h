//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/DVTInvalidation-Protocol.h>
#import <IDEFoundation/NSObject-Protocol.h>

@class DVTExtension, IDELaunchParametersSnapshot, IDELaunchSession, IDERunDestination, NSString;

@protocol IDEDebuggingAddition <NSObject, DVTInvalidation>
@property(readonly) NSString *identifier;
- (id)initInLaunchSession:(IDELaunchSession *)arg1 withAppDisplayName:(NSString *)arg2 runDestination:(IDERunDestination *)arg3 fromExtension:(DVTExtension *)arg4;
@property(readonly, nonatomic) IDELaunchSession *launchSession;

@optional
+ (BOOL)shouldInstantiateInLaunchSession:(IDELaunchSession *)arg1;
- (IDELaunchParametersSnapshot *)adjustedLaunchParametersForLaunchParameters:(IDELaunchParametersSnapshot *)arg1;
- (void)processFinalLaunchParameters:(IDELaunchParametersSnapshot *)arg1;
@end
