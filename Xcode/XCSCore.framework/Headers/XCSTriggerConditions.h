//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@interface XCSTriggerConditions : XCSObject
{
}

+ (id)triggerConditionsWithStatus:(long long)arg1 onSuccess:(BOOL)arg2 onWarnings:(BOOL)arg3 onAnalyzerWarnings:(BOOL)arg4 onFailingTests:(BOOL)arg5 onBuildErrors:(BOOL)arg6 validationErrors:(id *)arg7;
- (BOOL)_validateStatus:(long long)arg1 onSuccess:(BOOL)arg2 onWarnings:(BOOL)arg3 onAnalyzerWarnings:(BOOL)arg4 onFailingTests:(BOOL)arg5 onBuildErrors:(BOOL)arg6 validationErrors:(id *)arg7;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithStatus:(long long)arg1 onSuccess:(BOOL)arg2 onWarnings:(BOOL)arg3 onAnalyzerWarnings:(BOOL)arg4 onFailingTests:(BOOL)arg5 onBuildErrors:(BOOL)arg6 service:(id)arg7 validationErrors:(id *)arg8;
- (BOOL)shouldExecuteForIntegration:(id)arg1;

// Remaining properties
@property(nonatomic) BOOL onAnalyzerWarnings; // @dynamic onAnalyzerWarnings;
@property(nonatomic) BOOL onBuildErrors; // @dynamic onBuildErrors;
@property(nonatomic) BOOL onFailingTests; // @dynamic onFailingTests;
@property(nonatomic) BOOL onInternalErrors; // @dynamic onInternalErrors;
@property(nonatomic) BOOL onSuccess; // @dynamic onSuccess;
@property(nonatomic) BOOL onWarnings; // @dynamic onWarnings;
@property(nonatomic) long long status; // @dynamic status;

@end

