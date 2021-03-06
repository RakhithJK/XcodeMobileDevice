//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsInterface/XCEDataNodeAdapterP-Protocol.h>

@class NSString, XCBuildPropertiesInspectorPane, XCBuildPropertyTwoFlavorsCell, XCPropertyDomainSpecification;

@interface XCBuildPropertyCategoryNodeAdapter : NSObject <XCEDataNodeAdapterP>
{
    XCPropertyDomainSpecification *_propertyDomain;
    XCBuildPropertiesInspectorPane *_inspector;
    XCBuildPropertyTwoFlavorsCell *_twoFlavorCell;
}

- (long long)compareDataNode:(id)arg1 withDataNode:(id)arg2;
- (BOOL)dataNode:(id)arg1 matchesPersistentObjectComponent:(id)arg2;
- (id)dataNode:(id)arg1 objectValueForTableColumn:(id)arg2;
- (id)dataNode:(id)arg1 outlineView:(id)arg2 dataCellForTableColumn:(id)arg3;
- (BOOL)dataNode:(id)arg1 outlineViewIsGroupItem:(id)arg2;
- (id)dataNodePersistentObjectComponent:(id)arg1;
- (BOOL)filter:(id)arg1 searchString:(id)arg2;
- (BOOL)filterAllValuesForName:(id)arg1 searchString:(id)arg2 inValue:(BOOL)arg3 inDefinition:(BOOL)arg4;
- (BOOL)filterChildData:(id)arg1 parentNode:(id)arg2 designatedAdapter:(id)arg3;
@property(nonatomic) XCBuildPropertiesInspectorPane *inspector; // @synthesize inspector=_inspector;
- (void)instantiateChildrenForDataNode:(id)arg1;
- (BOOL)isDataNodeExpandable:(id)arg1;
- (BOOL)isDataNodeSelectable:(id)arg1;
- (BOOL)locallyAssignedName:(id)arg1;
- (id)nameForData:(id)arg1;
- (id)nameForNode:(id)arg1;
@property(retain, nonatomic) XCPropertyDomainSpecification *propertyDomain; // @synthesize propertyDomain=_propertyDomain;
@property(retain, nonatomic) XCBuildPropertyTwoFlavorsCell *twoFlavorCell; // @synthesize twoFlavorCell=_twoFlavorCell;
- (BOOL)shouldSortChildrenOfNode:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

