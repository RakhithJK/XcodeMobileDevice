//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEWorkspace, NSArray;

@interface IDETextIndexDataProvider : NSObject
{
    NSArray *_fileDataTypes;
    IDEWorkspace *_workspace;
}

- (void).cxx_destruct;
@property(readonly) NSArray *fileDataTypes; // @synthesize fileDataTypes=_fileDataTypes;
- (id)findableForFilePath:(id)arg1;
- (id)initWithFileDataTypes:(id)arg1 workspace:(id)arg2;
- (id)textRepresentationOfContentsAtPath:(id)arg1;
- (BOOL)wantsIndexedFindResultsForFileDataType:(id)arg1;
@property(readonly) IDEWorkspace *workspace; // @synthesize workspace=_workspace;

@end

