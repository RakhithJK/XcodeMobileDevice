//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTSourceControl/DVTSourceControlRevisionLocation.h>

@class NSString;

@interface DVTSourceControlTag : DVTSourceControlRevisionLocation
{
    unsigned long long _options;
    NSString *_identifier;
}

+ (id)defaultImage;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentationWithOptions:(unsigned long long)arg1;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithNewTagName:(id)arg1;
- (id)initWithTagName:(id)arg1;
- (id)initWithTagPathLocation:(id)arg1 branchAndTagLocations:(id)arg2;
- (BOOL)isEqual:(id)arg1;
@property(readonly, getter=isNewTag) BOOL newTag;
@property(readonly) NSString *name;
@property unsigned long long options; // @synthesize options=_options;
- (id)pathLocationForBranchAndTagLocations:(id)arg1;

@end

