//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _IDETestOperationValidator : NSObject
{
    int _type;
    NSString *_identifier;
}

+ (id)errorDescriptionForEvent:(int)arg1;
+ (id)validatorWithType:(int)arg1 andIdentifier:(id)arg2;
- (void).cxx_destruct;
- (id)description;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property int type; // @synthesize type=_type;
- (BOOL)validateEvent:(int)arg1;

@end

