//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsInterface/XCEDataNodeAdapterP-Protocol.h>

@class NSCell, NSString, XCPropertyConditionSet, XCPropertyDefinition, XCPropertyInfoContext, XCTestGlassBuildTableUnit;

@interface TestGlassPropertyDefinitionNodeAdapter : NSObject <XCEDataNodeAdapterP>
{
    NSCell *_cell;
    XCTestGlassBuildTableUnit *_tableUnit;
    XCPropertyInfoContext *_pic;
    XCPropertyDefinition *_pDefinition;
    NSString *_pName;
    XCPropertyConditionSet *_pConditionSet;
}

- (id)_editorModule;
- (void)_editorSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)addConditionForDataNode:(id)arg1;
- (BOOL)allowsFlavor:(id)arg1;
- (void)assignCell;
- (void)assignCurrentValuesFor:(id)arg1;
- (id)categoryAdapterForDataNode:(id)arg1;
- (long long)compareDataNode:(id)arg1 withDataNode:(id)arg2;
- (BOOL)dataNode:(id)arg1 doubleClickInColumn:(id)arg2;
- (BOOL)dataNode:(id)arg1 matchesName:(id)arg2 definition:(id)arg3 conditionSet:(id)arg4;
- (BOOL)dataNode:(id)arg1 matchesPersistentObjectComponent:(id)arg2;
- (id)dataNode:(id)arg1 objectValueForTableColumn:(id)arg2;
- (id)dataNode:(id)arg1 outlineView:(id)arg2 dataCellForTableColumn:(id)arg3;
- (void)dataNode:(id)arg1 outlineView:(id)arg2 willDisplayCell:(id)arg3 forTableColumn:(id)arg4;
- (void)dataNode:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3;
- (BOOL)dataNode:(id)arg1 shouldEditTableColumn:(id)arg2;
- (void)dataNodeConfigure:(id)arg1;
- (id)dataNodePersistentObjectComponent:(id)arg1;
- (void)instantiateChildrenForDataNode:(id)arg1;
- (void)invokeSheetForEditor:(id)arg1;
- (BOOL)isDataNodeExpandable:(id)arg1;
- (BOOL)locallyAssigned;
- (id)objectValueForExpandedString:(id)arg1 orValue:(id)arg2;
- (id)propertyDefinitionValue;
- (id)propertyDisplayName;
- (void)removeLocalAssignmentForDataNode:(id)arg1;
- (void)setDefinitionValue:(id)arg1;
- (void)setNewName:(id)arg1;
- (BOOL)userCanEditAssignmentInSheet;
- (BOOL)userCanRemoveAssignment;
- (id)valueToStoreForObjectValue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

