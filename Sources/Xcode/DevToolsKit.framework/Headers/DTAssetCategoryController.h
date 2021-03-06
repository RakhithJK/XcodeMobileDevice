//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DevToolsKit/NSOutlineViewDataSource-Protocol.h>

@class DTAssetCategory, DTAssetDetailTextView, DTAssetLibrary, NSArray, NSString;

@interface DTAssetCategoryController : NSObject <NSOutlineViewDataSource>
{
    DTAssetDetailTextView *defaultAssetDetailView;
    DTAssetCategory *assetCategory;
    DTAssetLibrary *library;
    NSArray *draggedPairs;
    NSArray *draggedGroups;
    BOOL acceptedDraggedAssets;
    id delegate;
    struct CGSize initialDraggingOffset;
}

- (id)addAssetsFromDraggingInfo:(id)arg1 toGroup:(id)arg2 copy:(BOOL)arg3;
- (void)addObjectsFromDraggingInfo:(id)arg1 toGroup:(id)arg2;
- (void)assetAndGroupSet:(id)arg1 willDisplayAsset:(id)arg2 inAssetView:(id)arg3;
- (id)assetCategory;
- (void)assetDetailView:(id)arg1 beginDraggingWithMouseDownEvent:(id)arg2 andMouseDraggedEvent:(id)arg3;
- (id)assetDetailViewForAsset:(id)arg1;
- (void)assetEditorController:(id)arg1 finishedEditingAsset:(id)arg2 returnCode:(long long)arg3 context:(id)arg4;
- (id)assetGroupPasteboardType;
- (id)assetPasteboardType;
- (id)assetTileViewContent;
- (id)assetTileViewForceSynchronizedContent:(BOOL)arg1;
- (unsigned long long)calculateAssetViewDragOperation:(id)arg1 targetGroup:(id *)arg2 targetIndex:(long long *)arg3;
- (BOOL)canPerformEditAsset:(id)arg1;
- (BOOL)canPerformRemoveAssetFromLibrary:(id)arg1;
- (id)createViewForSmartRuleViewID:(id)arg1;
- (void)dealloc;
- (id)defaultAssetDetailView;
- (id)defaultAssetDetailViewIfCreated;
- (id)defaultDragImageState:(id)arg1;
- (id)delegate;
- (id)deserializeGroupsFromPropertyLists:(id)arg1;
- (void)dragAssetPairs:(id)arg1 withMouseDownEvent:(id)arg2 mouseDraggedEvent:(id)arg3 initialDraggedImageState:(id)arg4 allowedOperations:(unsigned long long)arg5 imageLocationInWindow:(struct CGPoint)arg6;
- (id)draggedAssets;
- (id)draggedGroups;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3 withException:(id)arg4 shouldSlideBack:(char *)arg5;
- (id)draggedImageStateForAssetGroupPairs:(id)arg1 draggedPair:(id)arg2 referenceRectForClickedItem:(struct CGRect *)arg3;
- (id)draggedPairs;
- (unsigned long long)draggingOperationForDragInfo:(id)arg1 withTargetGroup:(id)arg2 targetCanBeMoveWithinGroup:(BOOL)arg3;
- (id)groupOutlineView;
- (void)groupedTileView:(id)arg1 concludeDragOperation:(id)arg2;
- (id)groupedTileView:(id)arg1 draggedImageState:(id)arg2;
- (unsigned long long)groupedTileView:(id)arg1 draggingEntered:(id)arg2;
- (void)groupedTileView:(id)arg1 draggingExited:(id)arg2;
- (unsigned long long)groupedTileView:(id)arg1 draggingUpdated:(id)arg2;
- (BOOL)groupedTileView:(id)arg1 performDragOperation:(id)arg2;
- (BOOL)groupedTileView:(id)arg1 prepareForDragOperation:(id)arg2;
- (void)groupedTileViewDragSelectedItems:(id)arg1 withMouseDownEvent:(id)arg2 andMouseDraggedEvent:(id)arg3;
- (id)groupsForOutlineItems:(id)arg1;
- (id)initWithAssetCategory:(id)arg1;
- (id)initialDragImageState:(id)arg1;
- (id)inputFieldForType:(id)arg1;
- (id)insertAssetsFromDraggingInfo:(id)arg1 intoGroup:(id)arg2 atIndex:(long long)arg3 copy:(BOOL)arg4;
- (void)insertObjectsFromDraggingInfo:(id)arg1 intoGroup:(id)arg2 atIndex:(long long)arg3;
- (id)library;
- (id)libraryWindow;
- (id)objectPasteboardTypes;
- (id)operatorsForType:(id)arg1;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (id)outlineView:(id)arg1 draggedImageState:(id)arg2;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (void)performEditAsset:(id)arg1;
- (void)performRemoveAssetsFromLibrary:(id)arg1;
- (void)populatePasteboard:(id)arg1 withAssetAndCategoryPairs:(id)arg2 defaultDraggedImageState:(id *)arg3 identifierMapTable:(id *)arg4;
- (void)refreshAssetDetailView:(id)arg1 withAsset:(id)arg2;
- (void)registerForDropTypes;
- (id)representativesForDraggedGroups:(id)arg1;
- (void)runImagePickerWithImage:(id)arg1 asset:(id)arg2 assetSourceIdentifier:(id)arg3 group:(id)arg4 andIndex:(long long)arg5;
- (id)searchTermsForAsset:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDraggedGroups:(id)arg1;
- (void)setDraggedPairs:(id)arg1;
- (void)setLibrary:(id)arg1;
- (void)sizeAssetDetailView:(id)arg1 toFitSuggestedSize:(struct CGSize)arg2 forAsset:(id)arg3;
- (id)smartAssetGroupRuleEditorController:(id)arg1 createViewForSmartRuleViewID:(id)arg2;
- (id)smartAssetGroupRuleEditorControllerRuleDefinitionsPropertyList:(id)arg1;
- (id)smartGroupRuleDefinitionsPropertyList;
- (void)window:(id)arg1 concludeDragOperation:(id)arg2;
- (id)window:(id)arg1 draggedImageState:(id)arg2;
- (void)window:(id)arg1 draggingEnded:(id)arg2;
- (unsigned long long)window:(id)arg1 draggingEntered:(id)arg2;
- (void)window:(id)arg1 draggingExited:(id)arg2;
- (struct CGSize)window:(id)arg1 draggingStickiness:(id)arg2;
- (unsigned long long)window:(id)arg1 draggingUpdated:(id)arg2;
- (BOOL)window:(id)arg1 performDragOperation:(id)arg2;
- (BOOL)window:(id)arg1 prepareForDragOperation:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

