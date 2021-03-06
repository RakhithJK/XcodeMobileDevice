//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface DVTPortalService : NSObject
{
    BOOL _wantsPlatformInRequestURL;
    NSString *_action;
    NSDictionary *_parameters;
    NSArray *_expectedResponseTemplates;
    NSArray *_extensionRequestParameters;
    NSString *_identifier;
}

+ (void)initialize;
+ (id)serviceWithIdentifier:(id)arg1 parameters:(id)arg2;
- (void).cxx_destruct;
- (void)_assertValidityOfParameters:(id)arg1 extensionRequestParameters:(id)arg2;
- (id)_errorFromPayload:(id)arg1 resultCode:(long long)arg2;
- (BOOL)_isResponseParameterSatisfied:(id)arg1 resultCode:(long long)arg2;
- (id)_payloadFromParameters:(id)arg1 extensionRequestParameters:(id)arg2;
- (id)_requestParameters;
- (id)_requestWithSession:(id)arg1;
- (id)_responseFromServiceWithSession:(id)arg1 request:(id *)arg2 error:(id *)arg3;
- (id)_resultFromPayload:(id)arg1 resultCode:(long long)arg2 error:(id *)arg3;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
- (id)description;
@property(readonly, nonatomic) NSArray *expectedResponseTemplates; // @synthesize expectedResponseTemplates=_expectedResponseTemplates;
@property(readonly, nonatomic) NSArray *extensionRequestParameters; // @synthesize extensionRequestParameters=_extensionRequestParameters;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithExtension:(id)arg1 parameters:(id)arg2;
@property(readonly, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
- (id)resultFromServiceWithSession:(id)arg1 error:(id *)arg2;
- (id)resultFromServiceWithSession:(id)arg1 response:(id *)arg2 error:(id *)arg3;
@property(nonatomic) BOOL wantsPlatformInRequestURL; // @synthesize wantsPlatformInRequestURL=_wantsPlatformInRequestURL;

@end

