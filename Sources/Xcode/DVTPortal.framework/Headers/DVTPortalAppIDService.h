//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTPortal/DVTPortalService.h>

@class NSDictionary;

@interface DVTPortalAppIDService : DVTPortalService
{
    NSDictionary *_featureKeyToSanitizedPlistValue;
}

+ (id)_requestParameterPayloadDictionaryFromFeatures:(id)arg1;
+ (id)_serviceIdentifier;
+ (id)_serviceWithTeam:(id)arg1 program:(id)arg2 features:(id)arg3 extraParameters:(id)arg4;
- (void).cxx_destruct;
- (id)_requestParameters;
@property(copy, nonatomic) NSDictionary *featureKeyToSanitizedPlistValue; // @synthesize featureKeyToSanitizedPlistValue=_featureKeyToSanitizedPlistValue;

@end
