//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDELocalizationWorkContext.h>

#import <IDEFoundation/IDELocalizationWorkProvider-Protocol.h>

@class DVTFilePath, NSValue;

@interface IDELocalizationWorkWriteStrings : IDELocalizationWorkContext <IDELocalizationWorkProvider>
{
}

+ (id)contextWithParent:(id)arg1 dryRun:(BOOL)arg2 strings:(id)arg3 comments:(id)arg4 container:(id)arg5 group:(id)arg6 language:(id)arg7;
- (id)comments;
- (id)container;
@property(readonly) NSValue *createdNewSubitem;
- (id)group;
- (id)language;
@property(readonly) DVTFilePath *path;
- (id)strings;
- (id)work;

@end

