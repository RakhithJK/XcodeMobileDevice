//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DSADocSet, DSADocSetUpdate, NSArrayController, NSMutableArray, NSWindow, XCDocSetGetInfoTableView;

@interface XCDocSetGetInfoController : NSObject
{
    DSADocSet *_docSet;
    DSADocSetUpdate *_docSetUpdate;
    NSWindow *_getInfoWindow;
    NSMutableArray *_docSetProperties;
    XCDocSetGetInfoTableView *_summaryTableView;
    XCDocSetGetInfoTableView *_duplicatesTableView;
    NSArrayController *_propertiesController;
    NSArrayController *_duplicatesController;
    BOOL _showRevealInFinderButton;
}

+ (id)docSetGetInfoControllerWithDocSet:(id)arg1;
+ (id)docSetGetInfoControllerWithDocSetUpdate:(id)arg1;
+ (id)docSetGetInfoControllers;
+ (void)initialize;
+ (id)lookupKeyForDocSet:(id)arg1;
- (void)_downloadDidFinish:(id)arg1;
- (void)_infoWindowWillClose:(id)arg1;
- (void)_loadDocSetProperties;
- (void)_loadDocSetUpdateProperties;
- (void)_loadDuplicateDocSetInfo;
- (void)_setupTableView:(id)arg1;
- (void)_showPropertiesForDocSet:(id)arg1;
- (void)awakeFromNib;
- (unsigned long long)countOfDocSetProperties;
- (void)dealloc;
@property(retain, nonatomic) DSADocSet *docSet; // @synthesize docSet=_docSet;
@property(retain, nonatomic) NSMutableArray *docSetProperties; // @synthesize docSetProperties=_docSetProperties;
@property(retain, nonatomic) DSADocSetUpdate *docSetUpdate; // @synthesize docSetUpdate=_docSetUpdate;
- (void)getDocSetProperties:(id *)arg1 range:(struct _NSRange)arg2;
- (id)getInfoWindow;
- (id)initWithObject:(id)arg1;
- (void)insertObject:(id)arg1 inDocSetPropertiesAtIndex:(unsigned long long)arg2;
- (id)objectInDocSetPropertiesAtIndex:(unsigned long long)arg1;
- (void)removeObjectFromDocSetPropertiesAtIndex:(unsigned long long)arg1;
- (void)replaceObjectInDocSetPropertiesAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)revealDocSetInFinder:(id)arg1;
@property(nonatomic) BOOL showRevealInFinderButton; // @synthesize showRevealInFinderButton=_showRevealInFinderButton;
- (void)showDocSetInfo:(id)arg1;

@end

