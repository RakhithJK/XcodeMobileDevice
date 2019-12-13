//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/XCElementRootFace.h>

@class NSDictionary, NSFont, NSMutableArray, NSObject, NSString;
@protocol XCElementDisplayDelegateP;

@interface XCElementFace : XCElementRootFace
{
    NSMutableArray *_stack;
    long long _level;
    id _observable;
    NSString *_bindingPrefix;
    struct NSObject *_lastToggleSource;
    NSString *_lastToggleKeyPath;
    unsigned long long _controlSize;
    BOOL _useControlSize;
    unsigned long long _scrollerControlSize;
    NSFont *_fontForUI;
    NSFont *_boldFontForUI;
    double _charWidthForUI;
    NSMutableArray *_colors;
    NSMutableArray *_labels;
    NSDictionary *_columnBindingOptionsNonRetained;
    struct NSObject *_defaultTabMarker;
    struct _XCElementInset _lineSpace;
    struct _XCElementInset _outerSpace;
    struct NSObject *_labelDisplay;
    struct NSObject *_attributedLabelDisplay;
    struct NSObject *_boldLabelDisplay;
    struct NSObject *_textFieldDisplay;
    struct NSObject *_buttonDisplay;
    struct NSObject *_roundRectButtonDisplay;
    struct NSObject *_checkBoxDisplay;
    struct NSObject *_popUpDisplay;
    struct NSObject *_roundRectPopUpDisplay;
    struct NSObject *_popUpByTitleDisplay;
    struct NSObject *_roundRectPopUpByTitleDisplay;
    struct NSObject *_disclosureDisplay;
    struct NSObject *_segmentedDisplay;
    struct NSObject *_roundRectSegmentedDisplay;
    struct NSObject *_radioDisplay;
    struct NSObject *_imageDisplay;
    struct NSObject *_anyViewDisplay;
    struct NSObject *_anyControlViewDisplay;
    struct NSObject *_buttonViewDisplay;
    struct NSObject *_resizingLabelDisplay;
    BOOL _open;
    XCElementFace *_withinFace;
    BOOL _useCellsByDefault;
    BOOL _useCellsForLabelsByDefault;
    BOOL _useImageCacheByDefault;
    BOOL _useLineSpaceByDefault;
    BOOL _useLineSpaceForImages;
}

+ (id)colorInRGBColorSpaceForColor:(id)arg1;
+ (id)newModalSessionProgressWindowTitled:(id)arg1 label:(id)arg2;
- (void)_closeGroup;
- (struct NSObject *)_internalAddActionButton:(id)arg1 menuSource:(id)arg2 selector:(SEL)arg3;
- (struct NSObject *)_internalAddActionButtonWithImage:(id)arg1 pressedImage:(id)arg2 menu:(id)arg3 menuSource:(id)arg4 selector:(SEL)arg5;
- (id)_nibTemplateWithTag:(long long)arg1;
- (void)_releaseValuesFace;
- (struct NSObject *)addActionButton:(id)arg1;
- (struct NSObject *)addActionButtonWithImageNamed:(id)arg1 pressedImageNamed:(id)arg2 menuSource:(id)arg3 selector:(SEL)arg4;
- (struct NSObject *)addActionButtonWithMenuSource:(id)arg1 selector:(SEL)arg2;
- (struct NSObject *)addAddButton;
- (struct NSObject *)addAnyControlOrView:(id)arg1;
- (struct NSObject *)addAnyControlView:(id)arg1;
- (struct NSObject *)addAnyView:(id)arg1;
- (struct NSObject *)addAttributedLabel:(id)arg1;
- (struct NSObject *)addAttributedLabel:(id)arg1 rightAlignedForTab:(struct NSObject *)arg2;
- (struct NSObject *)addAttributedLabelRightAligned:(id)arg1;
- (struct NSObject *)addBoldLabel:(id)arg1;
- (struct NSObject *)addButton:(id)arg1;
- (struct NSObject *)addButton:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (struct NSObject *)addButtonFromTemplate:(id)arg1;
- (void)addButtonSpace;
- (struct NSObject *)addButtonWithImage:(id)arg1 pushedImage:(id)arg2 target:(id)arg3 action:(SEL)arg4;
- (struct NSObject *)addButtonWithImageNamed:(id)arg1 pushedImageNamed:(id)arg2 target:(id)arg3 action:(SEL)arg4;
- (struct NSObject *)addCButtonFromTemplate:(id)arg1;
- (struct NSObject *)addCancelSheetButton;
- (struct NSObject *)addCheckBox:(id)arg1;
- (struct NSObject *)addCheckBox:(id)arg1 keyPath:(id)arg2;
- (id)addColumnWithID:(id)arg1 width:(double)arg2 title:(id)arg3 keyPath:(id)arg4 edit:(BOOL)arg5 dataCell:(id)arg6 table:(id)arg7 arrayController:(id)arg8;
- (id)addColumnWithID:(id)arg1 width:(double)arg2 title:(id)arg3 keyPath:(id)arg4 edit:(BOOL)arg5 isImage:(BOOL)arg6 table:(id)arg7 arrayController:(id)arg8;
- (struct NSObject *)addDisplayer:(struct NSObject *)arg1 withConfiguration:(id)arg2;
- (struct NSObject *)addDisplayer:(struct NSObject *)arg1 withConfiguration:(id)arg2 keyPath:(id)arg3;
- (struct NSObject *)addDisplayer:(struct NSObject *)arg1 withConfiguration:(id)arg2 localData:(id)arg3;
- (struct NSObject *)addDisplayer:(struct NSObject *)arg1 withConfiguration:(id)arg2 useLocalData:(BOOL)arg3 initialData:(id)arg4 useLineSpace:(BOOL)arg5;
- (struct NSObject *)addDisplayer:(struct NSObject *)arg1 withLocalData:(id)arg2;
- (struct NSObject *)addDisplayerForTableView:(id)arg1 scrollsH:(BOOL)arg2 scrollsV:(BOOL)arg3 autoHide:(BOOL)arg4;
- (struct NSObject *)addDisplayerWithScrollerForView:(id)arg1 scrollsH:(BOOL)arg2 scrollsV:(BOOL)arg3 autoHide:(BOOL)arg4 borderType:(unsigned long long)arg5 scrollerSize:(unsigned long long)arg6;
- (struct NSObject *)addDropper:(BOOL)arg1;
- (struct NSObject *)addDuplicateButton;
- (struct NSObject *)addElementUnit:(id)arg1 initialRepresentedObject:(id)arg2;
- (struct NSObject *)addElementView:(id)arg1 scrollsH:(BOOL)arg2 scrollsV:(BOOL)arg3 maxInitialSize:(struct CGSize)arg4 useSizer:(BOOL)arg5;
- (struct NSObject *)addElementView:(id)arg1 scrollsH:(BOOL)arg2 scrollsV:(BOOL)arg3 maxInitialSize:(struct CGSize)arg4 useSizer:(BOOL)arg5 useGrowBox:(BOOL)arg6;
- (struct NSObject *)addElementView:(id)arg1 scrollsH:(BOOL)arg2 scrollsV:(BOOL)arg3 maxInitialSize:(struct CGSize)arg4 useSizer:(BOOL)arg5 useGrowBox:(BOOL)arg6 resizesWindowHorizontally:(BOOL)arg7 resizesWindowVertically:(BOOL)arg8;
- (struct NSObject *)addFlexerForTabber:(struct NSObject *)arg1;
- (struct NSObject *)addFlexerH;
- (struct NSObject *)addFlexerHorizontal:(BOOL)arg1 vertical:(BOOL)arg2;
- (struct NSObject *)addFlexerV;
- (struct NSObject *)addGlassActionButtonMenuSource:(id)arg1 selector:(SEL)arg2;
- (struct NSObject *)addGlassAddButtonMenuSource:(id)arg1 selector:(SEL)arg2;
- (struct NSObject *)addGlassButtonWithImage:(id)arg1 pushedImage:(id)arg2 target:(id)arg3 action:(SEL)arg4;
- (struct NSObject *)addGlassEditorButtonWithBoolKeyPath:(id)arg1;
- (struct NSObject *)addGlassFiller;
- (struct NSObject *)addGlassSplitterHandle;
- (struct NSObject *)addGlassSplitterHandleWithBoolKeyPath:(id)arg1;
- (struct NSObject *)addGlassStatusButtonWithBoolKeyPath:(id)arg1;
- (struct NSObject *)addGlassToggleButtonWithBoolKeyPath:(id)arg1 image1:(id)arg2 pushedImage1:(id)arg3 image2:(id)arg4 pushedImage2:(id)arg5;
- (struct NSObject *)addHelpButtonWithTag:(long long)arg1;
- (struct NSObject *)addImage:(id)arg1;
- (struct NSObject *)addImageNamed:(id)arg1;
- (struct NSObject *)addLabel:(id)arg1;
- (struct NSObject *)addLabel:(unsigned long long)arg1 keyPath:(id)arg2;
- (struct NSObject *)addLabel:(id)arg1 leftAlignedForTab:(struct NSObject *)arg2;
- (struct NSObject *)addLabel:(id)arg1 rightAlignedForTab:(struct NSObject *)arg2;
- (struct NSObject *)addLabelLeftAligned:(id)arg1;
- (struct NSObject *)addLabelRightAligned:(id)arg1;
- (struct NSObject *)addLabelVarWidthForKeyPath:(id)arg1;
- (struct _XCElementInset)addLineSpace:(struct _XCElementInset)arg1;
- (struct NSObject *)addNumberField:(unsigned long long)arg1 value:(id)arg2;
- (struct NSObject *)addOkSheetButton;
- (struct NSObject *)addPopUp:(id)arg1;
- (struct NSObject *)addPopUp:(id)arg1 keyPath:(id)arg2;
- (struct NSObject *)addPopUpByTitle:(id)arg1;
- (struct NSObject *)addPopUpByTitle:(id)arg1 keyPath:(id)arg2;
- (struct NSObject *)addRadioButton:(id)arg1;
- (struct NSObject *)addRadioButton:(id)arg1 keyPath:(id)arg2 radioList:(id)arg3;
- (struct NSObject *)addRadioButton:(id)arg1 value:(BOOL)arg2;
- (struct NSObject *)addRemoveButton;
- (struct NSObject *)addResizableView:(id)arg1 controlSize:(unsigned long long)arg2;
- (struct NSObject *)addResizableView:(id)arg1 controlSize:(unsigned long long)arg2 useGrowBox:(BOOL)arg3 drawEnclosure:(BOOL)arg4;
- (struct NSObject *)addResizingLabel:(id)arg1;
- (struct NSObject *)addResizingLabelForKeyPath:(id)arg1;
- (struct NSObject *)addRoundRectButton:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (struct NSObject *)addRoundRectPopUp:(id)arg1;
- (struct NSObject *)addRoundRectPopUp:(id)arg1 keyPath:(id)arg2;
- (struct NSObject *)addRoundRectPopUpByTitle:(id)arg1;
- (struct NSObject *)addRoundRectPopUpByTitle:(id)arg1 keyPath:(id)arg2;
- (struct NSObject *)addRoundRectSegmentedControl:(id)arg1;
- (struct NSObject *)addRoundRectSegmentedControl:(id)arg1 keyPath:(id)arg2;
- (struct NSObject *)addSegmentedControl:(id)arg1;
- (struct NSObject *)addSegmentedControl:(id)arg1 keyPath:(id)arg2;
- (struct NSObject *)addSeparator;
- (struct NSObject *)addSeparatorWithColor:(id)arg1;
- (struct NSObject *)addSeparatorWithWidth:(double)arg1 height:(double)arg2;
- (void)addSpace:(struct _XCElementInset)arg1;
- (void)addSpaceBottom:(double)arg1;
- (void)addSpaceLeft:(double)arg1;
- (void)addSpaceLeft:(double)arg1 bottom:(double)arg2;
- (void)addSpaceLeft:(double)arg1 right:(double)arg2;
- (void)addSpaceLeft:(double)arg1 right:(double)arg2 bottom:(double)arg3;
- (void)addSpaceLeft:(double)arg1 top:(double)arg2;
- (void)addSpaceLeft:(double)arg1 top:(double)arg2 bottom:(double)arg3;
- (void)addSpaceLeft:(double)arg1 top:(double)arg2 right:(double)arg3;
- (void)addSpaceLeft:(double)arg1 top:(double)arg2 right:(double)arg3 bottom:(double)arg4;
- (void)addSpaceRight:(double)arg1;
- (void)addSpaceRight:(double)arg1 bottom:(double)arg2;
- (void)addSpaceTop:(double)arg1;
- (void)addSpaceTop:(double)arg1 bottom:(double)arg2;
- (void)addSpaceTop:(double)arg1 right:(double)arg2;
- (void)addSpaceTop:(double)arg1 right:(double)arg2 bottom:(double)arg3;
- (struct NSObject *)addTableView:(id)arg1;
- (struct NSObject *)addTextField:(unsigned long long)arg1;
- (struct NSObject *)addTextField:(unsigned long long)arg1 keyPath:(id)arg2;
- (struct NSObject *)addTextField:(unsigned long long)arg1 value:(id)arg2;
- (struct NSObject *)addTextView:(unsigned long long)arg1 attributedStringKeyPath:(id)arg2 continuous:(BOOL)arg3;
- (struct NSObject *)addTextView:(unsigned long long)arg1 dataKeyPath:(id)arg2 continuous:(BOOL)arg3;
- (struct NSObject *)addTextView:(unsigned long long)arg1 keyPath:(id)arg2 continuous:(BOOL)arg3;
- (struct NSObject *)addTextView:(unsigned long long)arg1 stringKeyPath:(id)arg2 continuous:(BOOL)arg3;
- (struct NSObject *)addTextView:(unsigned long long)arg1 value:(id)arg2;
- (struct NSObject *)addTriangle:(BOOL)arg1;
- (struct NSObject *)addTriangle:(BOOL)arg1 withLabel:(id)arg2;
- (struct NSObject *)addVButton:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (struct NSObject *)addVButtonFromTemplate:(id)arg1;
- (struct NSObject *)addVarTextView:(unsigned long long)arg1 value:(id)arg2;
@property(retain, nonatomic) NSObject<XCElementDisplayDelegateP> *anyControlViewDisplay; // @synthesize anyControlViewDisplay=_anyControlViewDisplay;
@property(retain, nonatomic) NSObject<XCElementDisplayDelegateP> *anyViewDisplay; // @synthesize anyViewDisplay=_anyViewDisplay;
- (void)applyOuterSpace;
@property(retain, nonatomic) NSObject<XCElementDisplayDelegateP> *attributedLabelDisplay; // @synthesize attributedLabelDisplay=_attributedLabelDisplay;
- (struct NSObject *)beginAnchor:(BOOL)arg1 forDelegate:(struct NSObject *)arg2;
- (struct NSObject *)beginDisplayer:(BOOL)arg1 displayDelegate:(struct NSObject *)arg2;
- (struct NSObject *)beginGroup:(BOOL)arg1;
- (struct NSObject *)beginHorizontalGroup;
- (struct NSObject *)beginHorizontalGroup:(id)arg1;
- (struct NSObject *)beginHorizontalGroupInline;
- (struct NSObject *)beginIOLine;
- (struct NSObject *)beginJustifierh:(double)arg1 v:(double)arg2;
- (struct NSObject *)beginMultiToggler:(BOOL)arg1 spaceLeft:(double)arg2;
- (struct NSObject *)beginMultiToggler:(BOOL)arg1 spaceLeft:(double)arg2 toggleSource:(id)arg3 keyPath:(id)arg4 initializeWith:(BOOL)arg5;
- (struct NSObject *)beginRectBorder:(BOOL)arg1;
- (struct NSObject *)beginTabberWithMarker:(struct NSObject *)arg1;
- (struct NSObject *)beginToggler:(BOOL)arg1 spaceLeft:(double)arg2;
- (struct NSObject *)beginToggler:(BOOL)arg1 spaceLeft:(double)arg2 toggleSource:(id)arg3 keyPath:(id)arg4 initializeWith:(BOOL)arg5;
- (struct NSObject *)beginTriangleGroupWithGraphics:(struct NSObject *)arg1;
- (struct NSObject *)beginVerticalGroup;
- (struct NSObject *)beginVerticalGroup:(id)arg1;
- (struct NSObject *)beginVerticalGroupInline;
- (id)bindingPrefix;
- (id)boldFontForUI;
@property(retain, nonatomic) NSObject<XCElementDisplayDelegateP> *boldLabelDisplay; // @synthesize boldLabelDisplay=_boldLabelDisplay;
- (id)bundle;
@property(retain, nonatomic) NSObject<XCElementDisplayDelegateP> *buttonDisplay; // @synthesize buttonDisplay=_buttonDisplay;
@property(retain, nonatomic) NSObject<XCElementDisplayDelegateP> *buttonViewDisplay; // @synthesize buttonViewDisplay=_buttonViewDisplay;
- (double)charWidthForUI;
@property(retain, nonatomic) NSObject<XCElementDisplayDelegateP> *checkBoxDisplay; // @synthesize checkBoxDisplay=_checkBoxDisplay;
- (void)clearDefaultTabMarker;
- (void)clearToggleSource;
- (id)closeLayout;
- (id)colorAtIndex:(unsigned long long)arg1;
- (id)colorInRGBColorSpaceForColor:(id)arg1;
- (void)configureDisplayDelegate:(struct NSObject *)arg1;
- (void)configureDisplayDelegateBold:(struct NSObject *)arg1;
- (void)configureDisplayDelegateRound:(struct NSObject *)arg1;
- (void)configureForResizingFromTheInside;
- (void)configureForResizingFromTheOutside;
- (void)configureForResizingInSynchWithWindow;
- (unsigned long long)controlSize;
- (struct NSObject *)currentAnchor;
- (void)currentBind:(id)arg1 toKeyPath:(id)arg2 options:(id)arg3;
- (void)currentBindToKeyPath:(id)arg1;
- (id)currentControl;
- (struct NSObject *)currentDisplayer;
- (struct NSObject *)currentMultiToggler;
- (void)currentSetAutohidesScrollerH:(BOOL)arg1 scrollerV:(BOOL)arg2;
- (struct NSObject *)currentToggler;
- (id)currentView;
- (id)darkColor;
- (void)dealloc;
- (struct NSObject *)defaultTabMarker;
@property(retain, nonatomic) NSObject<XCElementDisplayDelegateP> *disclosureDisplay; // @synthesize disclosureDisplay=_disclosureDisplay;
- (void)endAnchor;
- (void)endAnyGroup;
- (void)endDisplayer;
- (void)endGroup;
- (void)endGroup:(id)arg1;
- (void)endMultiToggler;
- (void)endRectBorder;
- (void)endTabber;
- (void)endToggler;
- (void)endTriangleGroup;
- (id)findImageNamed:(id)arg1;
- (id)findImageNamed:(id)arg1 inBundle:(id)arg2;
- (id)findImageNamed:(id)arg1 usingCache:(BOOL)arg2;
- (id)fontForUI;
@property(retain, nonatomic) NSObject<XCElementDisplayDelegateP> *imageDisplay; // @synthesize imageDisplay=_imageDisplay;
- (id)init;
- (void)installAsContentViewInWindow:(id)arg1;
- (void)instantiateColors;
- (void)instantiateLabels;
- (BOOL)isOpen;
- (id)labelAtIndex:(unsigned long long)arg1;
@property(retain, nonatomic) NSObject<XCElementDisplayDelegateP> *labelDisplay; // @synthesize labelDisplay=_labelDisplay;
- (id)lastToggleKeyPath;
- (struct NSObject *)lastToggleSource;
- (id)lightColor;
- (struct _XCElementInset)lineSpace;
- (struct NSObject *)mainElementUnit:(id)arg1 initialRepresentedObject:(id)arg2;
- (id)newArrayControllerForManagedObjectContext:(id)arg1 content:(id)arg2 entityName:(id)arg3;
- (id)newArrayControllerForManagedObjectContext:(id)arg1 entityName:(id)arg2;
- (id)newArrayControllerForManagedObjectContext:(id)arg1 observable:(id)arg2 keyPath:(id)arg3 entityName:(id)arg4;
- (void)newDefaultTabMarker;
- (id)newTableWithRowHeight:(long long)arg1 alternating:(BOOL)arg2 size:(struct CGSize)arg3;
- (id)newWindowTitled:(id)arg1 styleMask:(unsigned long long)arg2 usePanel:(BOOL)arg3 releaseWhenClosed:(BOOL)arg4;
- (id)observable;
- (void)openLayoutInView:(id)arg1;
- (void)openLayoutWithElement:(struct NSObject *)arg1;
- (void)openLayoutWithinFace:(id)arg1;
- (void)openLayoutWithinGroup:(struct NSObject *)arg1 replacing:(BOOL)arg2;
- (id)optionsDictionaryForContinuous:(BOOL)arg1;
- (struct _XCElementInset)outerSpace;
@property(retain, nonatomic) NSObject<XCElementDisplayDelegateP> *popUpByTitleDisplay; // @synthesize popUpByTitleDisplay=_popUpByTitleDisplay;
@property(retain, nonatomic) NSObject<XCElementDisplayDelegateP> *popUpDisplay; // @synthesize popUpDisplay=_popUpDisplay;
- (id)positionInInspectorTitled:(id)arg1 at:(struct CGPoint)arg2;
- (id)positionInSheetTitled:(id)arg1 inWindow:(id)arg2;
- (id)positionInWindowTitled:(id)arg1 at:(struct CGPoint)arg2;
- (id)positionInWindowTitled:(id)arg1 at:(struct CGPoint)arg2 styleMask:(unsigned long long)arg3 usePanel:(BOOL)arg4 display:(BOOL)arg5;
- (void)positionWindow:(id)arg1 at:(struct CGPoint)arg2 display:(BOOL)arg3;
- (BOOL)pushIfGroup;
- (void)pushOptionsForColumnBinding:(id)arg1;
@property(retain, nonatomic) NSObject<XCElementDisplayDelegateP> *radioDisplay; // @synthesize radioDisplay=_radioDisplay;
- (void)releaseDisplayDelegates:(BOOL)arg1;
- (void)removeLineSpaceFromCurrent;
@property(retain, nonatomic) NSObject<XCElementDisplayDelegateP> *resizingLabelDisplay; // @synthesize resizingLabelDisplay=_resizingLabelDisplay;
@property(retain, nonatomic) NSObject<XCElementDisplayDelegateP> *roundRectButtonDisplay; // @synthesize roundRectButtonDisplay=_roundRectButtonDisplay;
@property(retain, nonatomic) NSObject<XCElementDisplayDelegateP> *roundRectPopUpByTitleDisplay; // @synthesize roundRectPopUpByTitleDisplay=_roundRectPopUpByTitleDisplay;
@property(retain, nonatomic) NSObject<XCElementDisplayDelegateP> *roundRectPopUpDisplay; // @synthesize roundRectPopUpDisplay=_roundRectPopUpDisplay;
@property(retain, nonatomic) NSObject<XCElementDisplayDelegateP> *roundRectSegmentedDisplay; // @synthesize roundRectSegmentedDisplay=_roundRectSegmentedDisplay;
- (unsigned long long)scrollerControlSize;
@property(retain, nonatomic) NSObject<XCElementDisplayDelegateP> *segmentedDisplay; // @synthesize segmentedDisplay=_segmentedDisplay;
- (void)setAddButtonTemplate:(id)arg1;
- (void)setBindingPrefix:(id)arg1;
- (void)setColor:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setControlSize:(unsigned long long)arg1;
- (void)setDefaultTabMarker:(struct NSObject *)arg1;
- (void)setDuplicateButtonTemplate:(id)arg1;
- (void)setHelpButtonTemplate:(id)arg1;
- (void)setLabel:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setLineSpace:(struct _XCElementInset)arg1;
- (void)setObservable:(id)arg1;
- (void)setRemoveButtonTemplate:(id)arg1;
- (void)setScrollerControlSize:(unsigned long long)arg1;
@property(retain, nonatomic) NSObject<XCElementDisplayDelegateP> *textFieldDisplay; // @synthesize textFieldDisplay=_textFieldDisplay;
@property(nonatomic) BOOL useCellsByDefault; // @synthesize useCellsByDefault=_useCellsByDefault;
@property(nonatomic) BOOL useCellsForLabelsByDefault; // @synthesize useCellsForLabelsByDefault=_useCellsForLabelsByDefault;
- (void)setUseControlSize:(BOOL)arg1;
@property(nonatomic) BOOL useImageCacheByDefault; // @synthesize useImageCacheByDefault=_useImageCacheByDefault;
@property(nonatomic) BOOL useLineSpaceByDefault; // @synthesize useLineSpaceByDefault=_useLineSpaceByDefault;
@property(nonatomic) BOOL useLineSpaceForImages; // @synthesize useLineSpaceForImages=_useLineSpaceForImages;
- (struct NSObject *)sharedAnyControlViewDisplay;
- (struct NSObject *)sharedAnyViewDisplay;
- (struct NSObject *)sharedAttributedLabelDisplay;
- (struct NSObject *)sharedBoldLabelDisplay;
- (struct NSObject *)sharedButtonDisplay;
- (struct NSObject *)sharedButtonViewDisplay;
- (struct NSObject *)sharedCheckBoxDisplay;
- (struct NSObject *)sharedDisclosureDisplay;
- (struct NSObject *)sharedImageDisplay;
- (struct NSObject *)sharedLabelDisplay;
- (struct NSObject *)sharedPopUpByTitleDisplay;
- (struct NSObject *)sharedPopUpDisplay;
- (struct NSObject *)sharedRadioDisplay;
- (struct NSObject *)sharedResizingLabelDisplay;
- (struct NSObject *)sharedRoundRectButtonDisplay;
- (struct NSObject *)sharedRoundRectPopUpByTitleDisplay;
- (struct NSObject *)sharedRoundRectPopUpDisplay;
- (struct NSObject *)sharedRoundRectSegmentedDisplay;
- (struct NSObject *)sharedSegmentedDisplay;
- (struct NSObject *)sharedTextFieldDisplay;
- (id)smallSystemFont;
- (double)stringWidthUsingFontForUI:(id)arg1;
- (BOOL)useControlSize;

@end
