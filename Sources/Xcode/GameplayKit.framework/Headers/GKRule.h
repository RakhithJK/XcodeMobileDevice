//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GKRule : NSObject
{
    long long _salience;
}

+ (id)ruleWithBlockPredicate:(CDUnknownBlockType)arg1 action:(CDUnknownBlockType)arg2;
+ (id)ruleWithPredicate:(id)arg1 assertingFact:(id)arg2 grade:(float)arg3;
+ (id)ruleWithPredicate:(id)arg1 retractingFact:(id)arg2 grade:(float)arg3;
- (BOOL)evaluatePredicateWithSystem:(id)arg1;
- (void)performActionWithSystem:(id)arg1;
@property(nonatomic) long long salience; // @synthesize salience=_salience;

@end

