//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface XCTargetTemplateScanner : NSObject
{
}

+ (id)findTemplatesForProject:(id)arg1;
- (void)_addClassBasedTemplatesToTree:(id)arg1 forProject:(id)arg2;
- (void)_addTemplate:(id)arg1 toTemplateTree:(id)arg2;
- (void)_addTemplatesFromSearchPath:(id)arg1 subpath:(id)arg2 toTemplateTree:(id)arg3 forProject:(id)arg4;
- (id)_buildTemplateTreeForProject:(id)arg1;
- (BOOL)_checkForTargetTemplatesAtBaseSearchPath:(id)arg1 subpath:(id)arg2 withTemplateTree:(id)arg3 forProject:(id)arg4;
- (id)_directoryEntriesToSkip;
- (void)_fillArray:(id)arg1 withTemplatesfromTreeNode:(id)arg2;
- (id)_scanForTemplatesForProject:(id)arg1;
- (id)_templateSearchPaths;

@end

