//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTOperation.h>

@class IDESourceControlRequest, NSArray, NSString;

@interface IDESourceControlOperation : DVTOperation
{
    NSArray *_result;
    IDESourceControlRequest *_request;
    NSString *_rawInput;
    NSString *_rawStandardOutput;
    NSString *_rawErrorOutput;
    unsigned int _scmPowerAssertion;
    BOOL _waitToParseData;
    BOOL _allowsSleep;
    BOOL _userInitiated;
}

- (void).cxx_destruct;
@property BOOL allowsSleep; // @synthesize allowsSleep=_allowsSleep;
- (void)cancel;
- (id)initWithRequest:(id)arg1;
- (void)main;
@property(retain) NSString *rawErrorOutput; // @synthesize rawErrorOutput=_rawErrorOutput;
@property(retain) NSString *rawInput; // @synthesize rawInput=_rawInput;
@property(retain) NSString *rawStandardOutput; // @synthesize rawStandardOutput=_rawStandardOutput;
@property(readonly) IDESourceControlRequest *request; // @synthesize request=_request;
@property(retain) NSArray *result; // @synthesize result=_result;
@property BOOL userInitiated; // @synthesize userInitiated=_userInitiated;
@property BOOL waitToParseData; // @synthesize waitToParseData=_waitToParseData;

@end

