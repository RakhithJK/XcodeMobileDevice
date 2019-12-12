//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface DSATermManager : NSObject
{
    NSMapTable *_terms;
    unsigned int _nextID;
}

+ (id)_termsFromString:(id)arg1 usingWordBoundaries:(id)arg2;
+ (id)termsFromQuery:(id)arg1;
+ (id)termsFromString:(id)arg1;
- (void).cxx_destruct;
- (unsigned int)addTerm:(id)arg1;
- (unsigned int)idForTerm:(id)arg1;
- (id)initWithTerms:(id)arg1;
- (id)orderedTerms;
- (id)termMatchForSubstring:(id)arg1 style:(unsigned long long)arg2;

@end

