//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/TestGlassPropertyDefinitionStringNodeAdapter.h>

@class NSCell;

@interface TestGlassPropertyDefinitionUserDefinedNodeAdapter : TestGlassPropertyDefinitionStringNodeAdapter
{
    BOOL _noEditUntilRebuild;
    NSCell *_nameCell;
}

- (void)assignCurrentValuesFor:(id)arg1;
- (id)dataNode:(id)arg1 outlineView:(id)arg2 dataCellForTableColumn:(id)arg3;
- (BOOL)dataNode:(id)arg1 shouldEditTableColumn:(id)arg2;
- (void)dataNodeConfigure:(id)arg1;
- (BOOL)formatter:(id)arg1 getObjectValue:(out id *)arg2 forString:(id)arg3 errorDescription:(out id *)arg4;
- (void)rename:(id)arg1 toNewName:(id)arg2 conditionSet:(id)arg3;
- (void)setNewName:(id)arg1;

@end
