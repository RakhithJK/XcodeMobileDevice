//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IDESchemeActionAbstractTestSummaryObject : NSObject
{
    NSString *_name;
}

- (void).cxx_destruct;
- (id)_testActivitySummariesForSummaryObject:(id)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithName:(id)arg1;
- (void)loadAttachmentsFromDirectory:(id)arg1;
@property(copy) NSString *name; // @synthesize name=_name;
@property(readonly) unsigned long long status;
@property(readonly) NSArray *testActivitySummaries;
- (BOOL)updateWithDictionaryRepresentation:(id)arg1;

@end
