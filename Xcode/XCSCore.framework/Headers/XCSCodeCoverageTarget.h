//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSCore/XCSCodeCoverageObject.h>

@class NSArray;

@interface XCSCodeCoverageTarget : XCSCodeCoverageObject
{
    NSArray *_files;
}

- (void).cxx_destruct;
- (void)_bindHierarchyWithIntegration:(id)arg1 parentObject:(id)arg2;
- (id)_deviceTinyIDs;
- (id)_initWithFiles:(id)arg1 skipValidation:(BOOL)arg2 skipBindHierarchy:(BOOL)arg3 validationErrors:(id *)arg4;
- (BOOL)_validateWithFiles:(id)arg1 validationErrors:(id *)arg2;
- (id)ccifRepresentation;
- (id)ccimRepresentation;
- (unsigned long long)count;
- (id)dictionaryRepresentation;
@property(retain, nonatomic) NSArray *files; // @synthesize files=_files;
- (id)init;
- (id)initWithContents:(id)arg1 service:(id)arg2 skipValidation:(BOOL)arg3 skipBindHierarchy:(BOOL)arg4 validationErrors:(id *)arg5;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithTitle:(id)arg1 files:(id)arg2;
- (id)keyPath;
- (id)saveRepresentation;
- (id)saveRepresentationHumanReadable:(BOOL)arg1;

@end
